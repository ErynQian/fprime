// ====================================================================== 
// \title  HelloReceiverImpl.cpp
// \author eryn
// \brief  cpp file for HelloReceiver component implementation class
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


#include "HelloWorld/HelloReceiver/HelloReceiverComponentImpl.hpp"
#include "Fw/Types/BasicTypes.hpp"

namespace HelloWorld {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction 
  // ----------------------------------------------------------------------

  HelloReceiverComponentImpl ::
#if FW_OBJECT_NAMES == 1
    HelloReceiverComponentImpl(
        const char *const compName
    ) :
      HelloReceiverComponentBase(compName)
#else
    HelloReceiverImpl(void)
#endif
   ,response(2)
   ,greetCount(0)
  {

  }

  void HelloReceiverComponentImpl ::
    init(
        const NATIVE_INT_TYPE queueDepth,
        const NATIVE_INT_TYPE instance
    ) 
  {
    HelloReceiverComponentBase::init(queueDepth, instance);
  }

  HelloReceiverComponentImpl ::
    ~HelloReceiverComponentImpl(void)
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for user-defined typed input ports
  // ----------------------------------------------------------------------

  void HelloReceiverComponentImpl ::
    HelloIn_handler(
        const NATIVE_INT_TYPE portNum,
        I32 hello
    )
  {
    // TODO
    HelloWorld::Hello greet;
    greet.sethello(hello);
    greet.sethelloback(2);
    this->tlmWrite_GREET(greet);
    this->HelloOut_out(0,2);

  }

  void HelloReceiverComponentImpl ::
    SchedIn_handler(
        const NATIVE_INT_TYPE portNum,
        NATIVE_UINT_TYPE context
    )
  {
    // TODO
    QueuedComponentBase::MsgDispatchStatus stat = QueuedComponentBase::MSG_DISPATCH_OK;
    // empty message queue
    while (stat != MSG_DISPATCH_EMPTY) {
        stat = this->doDispatch();
    }
  }

  // ----------------------------------------------------------------------
  // Command handler implementations 
  // ----------------------------------------------------------------------

  void HelloReceiverComponentImpl ::
    SET_RESPONSE_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq
    )
  {
    // TODO
    this->response = 2; //helloback
    this->log_ACTIVITY_HI_HELLO_REPLIED(this->response); //event
    this->tlmWrite_NUM_HELLOS(++this->greetCount);       //telemetry
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK); //reply with completion status

  }

  void HelloReceiverComponentImpl ::
    CLEAR_EVENT_THROTTLE_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq
    )
  {
    // TODO
    this->log_ACTIVITY_HI_HELLO_REPLIED_ThrottleClear(); //clear throttle
    this->log_ACTIVITY_HI_THROTTLE_CLEARED();            //send event that throttle is cleared
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK); //reply with completion status

  }

} // end namespace HelloWorld
