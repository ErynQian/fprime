// ====================================================================== 
// \title  GpsImpl.hpp
// \author lemstarch
// \brief  hpp header file for the sample F' GPS component, based on a
//         NMEA GPS receiver.
//
// \copyright
// Copyright 2018, lestarch
// ====================================================================== 

#ifndef Gps_HPP
#define Gps_HPP

#include "GpsApp/Gps/GpsComponentAc.hpp"

namespace GpsApp {

  class GpsComponentImpl :
    public GpsComponentBase
  {
      /**
       * GpsPacket:
       *   A structure containing the information in the GPS location pacaket
       * received via the NMEA GPS receiver.
       */
      struct GpsPacket {
          float utcTime;
          float dmNS;
          char northSouth;
          float dmEW;
          char eastWest;
          unsigned int lock;
          unsigned int count;
          float filler;
          float altitude;
      };
    public:

      // ----------------------------------------------------------------------
      // Construction, initialization, and destruction
      // ----------------------------------------------------------------------

      //! Construct object Gps
      //!
      GpsComponentImpl(
#if FW_OBJECT_NAMES == 1
          const char *const compName /*!< The component name*/
#else
          void
#endif
      );

      //! Initialize object Gps
      //!
      void init(
          const NATIVE_INT_TYPE queueDepth, /*!< The queue depth*/
          const NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
      );

      //! Destroy object Gps
      //!
      ~GpsComponentImpl(void);

    PRIVATE:
      //! Setup the UART interface for taking with the GPS module. Note: this
      //! is currently implemented using standard Unix /dev/tty* devices.
      //!
      void setup(void);
      // ----------------------------------------------------------------------
      // Handler implementations for user-defined typed input ports
      // ----------------------------------------------------------------------

      //! Handler implementation for schedIn
      //!
      void schedIn_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          NATIVE_UINT_TYPE context /*!< The call order*/
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Command handler implementations 
      // ----------------------------------------------------------------------

      //! Implementation for Gps_ReportLockStatus command handler
      //! A command to force an EVR reporting lock status.
      void Gps_ReportLockStatus_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq /*!< The command sequence number*/
      );
      //!< Is the GPS UART setup
      bool m_setup;
      //!< Has the device acquired GPS lock?
      bool m_locked;
      //!< File handle of UART
      NATIVE_INT_TYPE m_fh;
    };

} // end namespace GpsApp

#endif
