// ======================================================================
// \title  HelloSender/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for HelloSender component Google Test harness base class
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

#include "GTestBase.hpp"

namespace HelloWorld {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  HelloSenderGTestBase ::
    HelloSenderGTestBase(
#if FW_OBJECT_NAMES == 1
        const char *const compName,
        const U32 maxHistorySize
#else
        const U32 maxHistorySize
#endif
    ) : 
        HelloSenderTesterBase (
#if FW_OBJECT_NAMES == 1
            compName,
#endif
            maxHistorySize
        )
  {

  }

  HelloSenderGTestBase ::
    ~HelloSenderGTestBase(void)
  {

  }

  // ----------------------------------------------------------------------
  // Commands
  // ----------------------------------------------------------------------

  void HelloSenderGTestBase ::
    assertCmdResponse_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ((unsigned long) size, this->cmdResponseHistory->size())
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Size of command response history\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->cmdResponseHistory->size() << "\n";
  }

  void HelloSenderGTestBase ::
    assertCmdResponse(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 index,
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        const Fw::CommandResponse response
    )
    const
  {
    ASSERT_LT(index, this->cmdResponseHistory->size())
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Index into command response history\n"
      << "  Expected: Less than size of command response history (" 
      << this->cmdResponseHistory->size() << ")\n"
      << "  Actual:   " << index << "\n";
    const CmdResponse& e = this->cmdResponseHistory->at(index);
    ASSERT_EQ(opCode, e.opCode)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Opcode at index "
      << index
      << " in command response history\n"
      << "  Expected: " << opCode << "\n"
      << "  Actual:   " << e.opCode << "\n";
    ASSERT_EQ(cmdSeq, e.cmdSeq)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Command sequence number at index "
      << index
      << " in command response history\n"
      << "  Expected: " << cmdSeq << "\n"
      << "  Actual:   " << e.cmdSeq << "\n";
    ASSERT_EQ(response, e.response)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Command response at index "
      << index
      << " in command resopnse history\n"
      << "  Expected: " << response << "\n"
      << "  Actual:   " << e.response << "\n";
  }

  // ----------------------------------------------------------------------
  // Telemetry
  // ----------------------------------------------------------------------

  void HelloSenderGTestBase ::
    assertTlm_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->tlmSize)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Total size of all telemetry histories\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmSize << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: SEND_HELLO
  // ----------------------------------------------------------------------

  void HelloSenderGTestBase ::
    assertTlm_SEND_HELLO_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_SEND_HELLO->size(), size)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel SEND_HELLO\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_SEND_HELLO->size() << "\n";
  }

  void HelloSenderGTestBase ::
    assertTlm_SEND_HELLO(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 index,
        const I32& val
    )
    const
  {
    ASSERT_LT(index, this->tlmHistory_SEND_HELLO->size())
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel SEND_HELLO\n"
      << "  Expected: Less than size of history (" 
      << this->tlmHistory_SEND_HELLO->size() << ")\n"
      << "  Actual:   " << index << "\n";
    const TlmEntry_SEND_HELLO& e =
      this->tlmHistory_SEND_HELLO->at(index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << index
      << " on telmetry channel SEND_HELLO\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: RX_HELLO
  // ----------------------------------------------------------------------

  void HelloSenderGTestBase ::
    assertTlm_RX_HELLO_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_RX_HELLO->size(), size)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel RX_HELLO\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_RX_HELLO->size() << "\n";
  }

  void HelloSenderGTestBase ::
    assertTlm_RX_HELLO(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 index,
        const I32& val
    )
    const
  {
    ASSERT_LT(index, this->tlmHistory_RX_HELLO->size())
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel RX_HELLO\n"
      << "  Expected: Less than size of history (" 
      << this->tlmHistory_RX_HELLO->size() << ")\n"
      << "  Actual:   " << index << "\n";
    const TlmEntry_RX_HELLO& e =
      this->tlmHistory_RX_HELLO->at(index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << index
      << " on telmetry channel RX_HELLO\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Events
  // ----------------------------------------------------------------------

  void HelloSenderGTestBase ::
    assertEvents_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventsSize)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Total size of all event histories\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventsSize << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: I_SAID_HELLO
  // ----------------------------------------------------------------------

  void HelloSenderGTestBase ::
    assertEvents_I_SAID_HELLO_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_I_SAID_HELLO->size())
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event I_SAID_HELLO\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_I_SAID_HELLO->size() << "\n";
  }

  void HelloSenderGTestBase ::
    assertEvents_I_SAID_HELLO(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 index,
        const I32 hello
    ) const
  {
    ASSERT_GT(this->eventHistory_I_SAID_HELLO->size(), index)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event I_SAID_HELLO\n"
      << "  Expected: Less than size of history (" 
      << this->eventHistory_I_SAID_HELLO->size() << ")\n"
      << "  Actual:   " << index << "\n";
    const EventEntry_I_SAID_HELLO& e =
      this->eventHistory_I_SAID_HELLO->at(index);
    ASSERT_EQ(hello, e.hello)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument hello at index "
      << index
      << " in history of event I_SAID_HELLO\n"
      << "  Expected: " << hello << "\n"
      << "  Actual:   " << e.hello << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: I_HEARD_HELLO
  // ----------------------------------------------------------------------

  void HelloSenderGTestBase ::
    assertEvents_I_HEARD_HELLO_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_I_HEARD_HELLO->size())
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event I_HEARD_HELLO\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_I_HEARD_HELLO->size() << "\n";
  }

  void HelloSenderGTestBase ::
    assertEvents_I_HEARD_HELLO(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 index,
        const I32 helloback
    ) const
  {
    ASSERT_GT(this->eventHistory_I_HEARD_HELLO->size(), index)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event I_HEARD_HELLO\n"
      << "  Expected: Less than size of history (" 
      << this->eventHistory_I_HEARD_HELLO->size() << ")\n"
      << "  Actual:   " << index << "\n";
    const EventEntry_I_HEARD_HELLO& e =
      this->eventHistory_I_HEARD_HELLO->at(index);
    ASSERT_EQ(helloback, e.helloback)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument helloback at index "
      << index
      << " in history of event I_HEARD_HELLO\n"
      << "  Expected: " << helloback << "\n"
      << "  Actual:   " << e.helloback << "\n";
  }

  // ----------------------------------------------------------------------
  // From ports
  // ----------------------------------------------------------------------

  void HelloSenderGTestBase ::
    assertFromPortHistory_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistorySize)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Total size of all from port histories\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistorySize << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: HelloOut
  // ----------------------------------------------------------------------

  void HelloSenderGTestBase ::
    assert_from_HelloOut_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_HelloOut->size())
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_HelloOut\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_HelloOut->size() << "\n";
  }

} // end namespace HelloWorld
