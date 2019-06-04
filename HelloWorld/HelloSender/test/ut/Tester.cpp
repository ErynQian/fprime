// ====================================================================== 
// \title  HelloSender.hpp
// \author eryn
// \brief  cpp file for HelloSender test harness implementation class
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
      HelloSenderGTestBase("Tester", MAX_HISTORY_SIZE),
      component("HelloSender")
#else
      HelloSenderGTestBase(MAX_HISTORY_SIZE),
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
    testSayHelloCommand(void) 
  {
    // TODO
    this->sendCmd_SAY_HELLO(0,10,1); 
    this->component.doDispatch();
    ASSERT_FROM_PORT_HISTORY_SIZE(1);
    ASSERT_from_HelloOut_SIZE(1);
    ASSERT_from_HelloOut(0,1);
    ASSERT_TLM_SIZE(1);
    ASSERT_TLM_SEND_HELLO_SIZE(1);
    ASSERT_TLM_SEND_HELLO(0,1);
    ASSERT_EVENTS_SIZE(1);
    ASSERT_EVENTS_I_SAID_HELLO_SIZE(1);
    ASSERT_EVENTS_I_SAID_HELLO(0,1);
    ASSERT_CMD_RESPONSE_SIZE(1);
    ASSERT_CMD_RESPONSE(0,0,10,Fw::COMMAND_OK);

    this->clearHistory();
    this->invoke_to_HelloIn(0,2);
    this->component.doDispatch();
    ASSERT_TLM_SIZE(1);
    ASSERT_TLM_RX_HELLO_SIZE(1);
    ASSERT_TLM_RX_HELLO(0,2);
    ASSERT_EVENTS_SIZE(1);
    ASSERT_EVENTS_I_HEARD_HELLO_SIZE(1);
    ASSERT_EVENTS_I_HEARD_HELLO(0,2);

  }

  // ----------------------------------------------------------------------
  // Handlers for typed from ports
  // ----------------------------------------------------------------------

  void Tester ::
    from_HelloOut_handler(
        const NATIVE_INT_TYPE portNum,
        I32 hello
    )
  {
    this->pushFromPortEntry_HelloOut(hello);
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
