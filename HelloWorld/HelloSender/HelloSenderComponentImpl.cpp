// ====================================================================== 
// \title  HelloSenderImpl.cpp
// \author eryn
// \brief  cpp file for HelloSender component implementation class
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


#include <HelloWorld/HelloSender/HelloSenderComponentImpl.hpp>
#include "Fw/Types/BasicTypes.hpp"

namespace HelloWorld {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction 
  // ----------------------------------------------------------------------

  HelloSenderComponentImpl ::
#if FW_OBJECT_NAMES == 1
    HelloSenderComponentImpl(
        const char *const compName
    ) :
      HelloSenderComponentBase(compName)
#else
    HelloSenderImpl(void)
#endif
  {

  }

  void HelloSenderComponentImpl ::
    init(
        const NATIVE_INT_TYPE queueDepth,
        const NATIVE_INT_TYPE instance
    ) 
  {
    HelloSenderComponentBase::init(queueDepth, instance);
  }

  HelloSenderComponentImpl ::
    ~HelloSenderComponentImpl(void)
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for user-defined typed input ports
  // ----------------------------------------------------------------------

  void HelloSenderComponentImpl ::
    HelloIn_handler(
        const NATIVE_INT_TYPE portNum,
        I32 helloback
    )
  {
    // TODO
    this->tlmWrite_RX_HELLO(helloback);               //telemetry
    this->log_ACTIVITY_HI_I_HEARD_HELLO(helloback);   //event
  }

  // ----------------------------------------------------------------------
  // Command handler implementations 
  // ----------------------------------------------------------------------

  void HelloSenderComponentImpl ::
    SAY_HELLO_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        I32 hello
    )
  {
    // TODO
    this->tlmWrite_SEND_HELLO(hello);                    //telemetry
    this->log_ACTIVITY_LO_I_SAID_HELLO(hello);           //event
    this->HelloOut_out(0,hello);                         //port
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK); //reply with completion status
  }

} // end namespace HelloWorld
