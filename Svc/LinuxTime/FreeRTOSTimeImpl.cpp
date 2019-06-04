/*
 * TestCommand1Impl.cpp
 *
 *  Created on: Mar 28, 2014
 *      Author: tcanham
 */

#include <Svc/LinuxTime/LinuxTimeImpl.hpp>
#include <Fw/Time/Time.hpp>
#include <FreeRTOS.h>
#include <task.h>

namespace Svc {

    #if FW_OBJECT_NAMES == 1
    LinuxTimeImpl::LinuxTimeImpl(const char* name) : TimeComponentBase(name)
    #else
    LinuxTimeImpl::LinuxTimeImpl()
    #endif
    {
    }

    LinuxTimeImpl::~LinuxTimeImpl() {
    }

    void LinuxTimeImpl::timeGetPort_handler(
            NATIVE_INT_TYPE portNum, /*!< The port number*/
            Fw::Time &time /*!< The U32 cmd argument*/)
    {
        /* THIS IS NOT IDEAL!!! */
        U32 curr_overflow_sec = pdMS_TO_TICKS(xTaskGetTickCount()) / 10000;
        time.set(TB_WORKSTATION_TIME, 0, curr_overflow_sec, 0);
    }

    void LinuxTimeImpl::init(NATIVE_INT_TYPE instance) {
        TimeComponentBase::init(instance);
    }

}
