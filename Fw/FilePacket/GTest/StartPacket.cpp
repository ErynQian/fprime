// ====================================================================== 
// \title  Fw/FilePacket/GTest/StartPacket.cpp
// \author bocchino
// \brief  Test utilities for start file packets
//
// \copyright
// Copyright (C) 2016, California Institute of Technology.
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

#include <Fw/FilePacket/GTest/FilePackets.hpp>
#include <Fw/Types/GTest/Bytes.hpp>

namespace Fw {

  namespace GTest {

    void FilePackets::StartPacket ::
      compare(
          const FilePacket::StartPacket& expected,
          const FilePacket::StartPacket& actual
      ) 
    {
      FilePackets::Header::compare(expected.header, actual.header);
      ASSERT_EQ(expected.fileSize, actual.fileSize);
      PathName::compare(expected.sourcePath, actual.sourcePath);
      PathName::compare(expected.destinationPath, actual.destinationPath);
    }

  }

}
