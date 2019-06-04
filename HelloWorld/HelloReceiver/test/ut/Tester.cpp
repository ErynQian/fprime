// ====================================================================== 
// \title  HelloReceiver.hpp
// \author eryn
// \brief  cpp file for HelloReceiver test harness implementation class
//
// \copyright
// Copyright 2009-2015, by the California Institute of Technology.
// ALL RIGHTS RESERVED.  United States Government Sponsorship
// acknowledged. Any commercial use must be negotiated with the Office
// of Technology Transfer at the California Institute of Technology.
// 
// This software may be subject to U.S. export control laws and
// regulations.  By accepting this document, the user agrees to comply
// with all U.S. export laws and regulations.  User has the
// responsibility to obtain export licenses, or other export authority
// as may be required before exporting such information to foreign
// countries or providing access to foreign persons.
// ====================================================================== 

#include "Tester.hpp"

#define INSTANCE 0
#define MAX_HISTORY_SIZE 10
#define QUEUE_DEPTH 10

namespace HelloWorld {

  // ----------------------------------------------------------------------
  // Construction and destruction 
  // ----------------------------------------------------------------------

  Tester ::
    Tester(void) : 
#if FW_OBJECT_NAMES == 1
      HelloReceiverGTestBase("Tester", MAX_HISTORY_SIZE),
      component("HelloReceiver")
#else
      HelloReceiverGTestBase(MAX_HISTORY_SIZE),
      component()
#endif
  {
    this->initComponents();
    this->connectPorts();
  }

  Tester ::
    ~Tester(void) 
  {
    
  }

  // ----------------------------------------------------------------------
  // Tests 
  // ----------------------------------------------------------------------

    void Tester ::
    testSetResponse(void) 
  {
    // TODO
    this->invoke_to_HelloIn(0,1);
    this->invoke_to_SchedIn(0,0);

    ASSERT_FROM_PORT_HISTORY_SIZE(1);
    ASSERT_from_HelloOut_SIZE(1);
    ASSERT_from_HelloOut(0,2);

    HelloWorld::Hello greet(1,2);
    ASSERT_TLM_SIZE(1);
    ASSERT_TLM_GREET_SIZE(1);
    ASSERT_TLM_GREET(0, greet);

    this->clearHistory();
    this->sendCmd_SET_RESPONSE(0,10);
    this->invoke_to_SchedIn(0,0);
    ASSERT_EVENTS_SIZE(1);
    ASSERT_EVENTS_HELLO_REPLIED_SIZE(1);
    ASSERT_EVENTS_HELLO_REPLIED(0,2);

    ASSERT_TLM_SIZE(1);
    ASSERT_TLM_NUM_HELLOS_SIZE(1);
    ASSERT_TLM_NUM_HELLOS(0,1);

    ASSERT_CMD_RESPONSE_SIZE(1);
    ASSERT_CMD_RESPONSE(0,0,10,Fw::COMMAND_OK);
  }

    void Tester ::
    testThrottle(void)
  {

      // send the number of commands required to throttle the event
      // Use the autocoded value so the unit test passes if the 
      // throttle value is changed
      for (NATIVE_UINT_TYPE cycle = 0; cycle < HelloReceiverComponentBase::EVENTID_HELLO_REPLIED_THROTTLE; cycle++) {
          this->sendCmd_SET_RESPONSE(0,10);
          // invoke scheduler port to dispatch message
          this->invoke_to_SchedIn(0,0);
          // verify the changed value events
          ASSERT_EVENTS_SIZE(1);
          ASSERT_EVENTS_HELLO_REPLIED_SIZE(1);
          ASSERT_EVENTS_HELLO_REPLIED(0,2);
          // verify the changed value channel
          ASSERT_TLM_SIZE(1);
          ASSERT_TLM_NUM_HELLOS_SIZE(1);
          ASSERT_TLM_NUM_HELLOS(0,cycle+1);

          // verify the command response was sent
          ASSERT_CMD_RESPONSE_SIZE(1);
          ASSERT_CMD_RESPONSE(0,0,10,Fw::COMMAND_OK);

          // clear the history
          this->clearHistory();
      }
      // sending the command now will not result in an event since
      // the throttle value has been reached

      // send the command to set factor1 to 2.0
      this->sendCmd_SET_RESPONSE(0,10);
      // invoke scheduler port to dispatch message
      this->invoke_to_SchedIn(0,0);
      // verify the changed value events
      ASSERT_EVENTS_SIZE(0);
      // verify the changed value channel
      ASSERT_TLM_SIZE(1);
      // verify the command response was sent
      ASSERT_CMD_RESPONSE_SIZE(1);
      ASSERT_CMD_RESPONSE(0,0,10,Fw::COMMAND_OK);

      // clear the history
      this->clearHistory();

      // send the command to clear the throttle
      this->sendCmd_CLEAR_EVENT_THROTTLE(0,10);
      // invoke scheduler port to dispatch message
      this->invoke_to_SchedIn(0,0);
      // verify clear event was sent
      ASSERT_EVENTS_SIZE(1);
      ASSERT_EVENTS_THROTTLE_CLEARED_SIZE(1);

      // clear the history
      this->clearHistory();
      // sending the command will now produce the event again
      this->sendCmd_SET_RESPONSE(0,10);
      // invoke scheduler port to dispatch message
      this->invoke_to_SchedIn(0,0);
      // verify the changed value event
      ASSERT_EVENTS_SIZE(1);

  }


  // ----------------------------------------------------------------------
  // Handlers for typed from ports
  // ----------------------------------------------------------------------

  void Tester ::
    from_HelloOut_handler(
        const NATIVE_INT_TYPE portNum,
        I32 helloback
    )
  {
    this->pushFromPortEntry_HelloOut(helloback);
  }

  // ----------------------------------------------------------------------
  // Helper methods 
  // ----------------------------------------------------------------------

  void Tester ::
    connectPorts(void) 
  {

    // HelloIn
    this->connect_to_HelloIn(
        0,
        this->component.get_HelloIn_InputPort(0)
    );

    // SchedIn
    this->connect_to_SchedIn(
        0,
        this->component.get_SchedIn_InputPort(0)
    );

    // CmdDisp
    this->connect_to_CmdDisp(
        0,
        this->component.get_CmdDisp_InputPort(0)
    );

    // HelloOut
    this->component.set_HelloOut_OutputPort(
        0, 
        this->get_from_HelloOut(0)
    );

    // CmdStatus
    this->component.set_CmdStatus_OutputPort(
        0, 
        this->get_from_CmdStatus(0)
    );

    // CmdReg
    this->component.set_CmdReg_OutputPort(
        0, 
        this->get_from_CmdReg(0)
    );

    // Tlm
    this->component.set_Tlm_OutputPort(
        0, 
        this->get_from_Tlm(0)
    );

    // Time
    this->component.set_Time_OutputPort(
        0, 
        this->get_from_Time(0)
    );

    // Log
    this->component.set_Log_OutputPort(
        0, 
        this->get_from_Log(0)
    );

    // LogText
    this->component.set_LogText_OutputPort(
        0, 
        this->get_from_LogText(0)
    );

  }

  void Tester ::
    initComponents(void) 
  {
    this->init();
    this->component.init(
        QUEUE_DEPTH, INSTANCE
    );
  }

} // end namespace HelloWorld
