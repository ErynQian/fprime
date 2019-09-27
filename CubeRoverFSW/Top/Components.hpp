#ifndef __LITS_COMPONENTS_HEADER__
#define __LITS_COMPONENTS_HEADER__
void constructRefArchitecture(void);
void exitTasks(void);

#include <Svc/ActiveRateGroup/ActiveRateGroupImpl.hpp>
#include <Svc/RateGroupDriver/RateGroupDriverImpl.hpp>

#include <Svc/CmdDispatcher/CommandDispatcherImpl.hpp>
#include <Svc/CmdSequencer/CmdSequencerImpl.hpp>
#include <Svc/PassiveConsoleTextLogger/ConsoleTextLoggerImpl.hpp>
#include <Svc/ActiveLogger/ActiveLoggerImpl.hpp>
#include <Svc/LinuxTime/LinuxTimeImpl.hpp>
#include <Svc/TlmChan/TlmChanImpl.hpp>
#include <Svc/PrmDb/PrmDbImpl.hpp>
#include <Fw/Obj/SimpleObjRegistry.hpp>
#include <Svc/FileUplink/FileUplink.hpp>
#include <Svc/FileDownlink/FileDownlink.hpp>
#include <Svc/BufferManager/BufferManager.hpp>
#include <Svc/Health/HealthComponentImpl.hpp>

#include <Svc/SocketGndIf/SvcSocketGndIfImpl.hpp>

#include <Ref/RecvBuffApp/RecvBuffComponentImpl.hpp>
#include <Ref/SendBuffApp/SendBuffComponentImpl.hpp>
#include <Ref/PingReceiver/PingReceiverComponentImpl.hpp>
#include <Ref/SignalGen/SignalGen.hpp>
#include <Svc/AssertFatalAdapter/AssertFatalAdapterComponentImpl.hpp>
#include <Svc/FatalHandler/FatalHandlerComponentImpl.hpp>

#include <Drv/BlockDriver/BlockDriverImpl.hpp>

//-----------CubeRover Hardware Driver Components----------------
#include <Drv/LinuxI2CDriver/LinuxI2CDriverComponentImpl.hpp>
#include <Drv/LinuxSerialDriver/LinuxSerialDriverComponentImpl.hpp>
#include <Drv/LinuxSpiDriver/LinuxSpiDriverComponentImpl.hpp>

//---------------CubeRover FSW Main Components-------------------
#include <CubeRoverFSW/CameraDriver/CameraDriverComponentImpl.hpp>
#include <CubeRoverFSW/MotorDriver/MotorDriverComponentImpl.hpp>
#include <CubeRoverFSW/RadioDriver/RadioDriverComponentImpl.hpp>
#include <CubeRoverFSW/SensorDriver/SensorDriverComponentImpl.hpp>
#include <CubeRoverFSW/SystemDriver/SystemDriverComponentImpl.hpp>

extern Svc::RateGroupDriverImpl rateGroupDriverComp;
extern Svc::ActiveRateGroupImpl rateGroup1Comp, rateGroup2Comp, rateGroup3Comp;
extern Svc::CmdSequencerComponentImpl cmdSeq;
extern Svc::SocketGndIfImpl sockGndIf;
extern Svc::ConsoleTextLoggerImpl textLogger;
extern Svc::ActiveLoggerImpl eventLogger;
extern Svc::LinuxTimeImpl linuxTime;
extern Svc::TlmChanImpl chanTlm;
extern Svc::CommandDispatcherImpl cmdDisp;
extern Svc::PrmDbImpl prmDb;
extern Svc::FileUplink fileUplink;
extern Svc::FileDownlink fileDownlink;
extern Svc::BufferManager fileDownlinkBufferManager;
extern Svc::BufferManager fileUplinkBufferManager;
extern Svc::AssertFatalAdapterComponentImpl fatalAdapter;
extern Svc::FatalHandlerComponentImpl fatalHandler;
extern Svc::HealthImpl health;

extern Drv::BlockDriverImpl blockDrv;

//---------------CubeRover HW Driver Components-------------------
extern Drv::LinuxI2CDriverComponentImpl I2CDriver;
extern Drv::LinuxSerialDriverComponentImpl WiFiDriver;
extern Drv::LinuxSpiDriverComponentImpl CameraSpiDriver;
extern Drv::LinuxSpiDriverComponentImpl SensorSpiDriver;

//---------------CubeRover FSW Main Components-------------------
extern Drv::CameraDriverComponentImpl Camera;
extern Drv::RadioDriverComponentImpl Radio;
extern Drv::SensorDriverComponentImpl Sensor;
extern Drv::MotorDriverComponentImpl Motor;
extern Drv::SystemDriverComponentImpl System;

//---------------Ref Application Main Components-----------------
extern Ref::RecvBuffImpl recvBuffComp;
extern Ref::SendBuffImpl sendBuffComp;
extern Ref::SignalGen SG1 , SG2, SG3, SG4, SG5;
extern Ref::PingReceiverComponentImpl pingRcvr;

#endif
