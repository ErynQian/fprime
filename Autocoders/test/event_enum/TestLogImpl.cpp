/*
 * TestCommand1Impl.cpp
 *
 *  Created on: Mar 28, 2014
 *      Author: tcanham
 */

#include <Autocoders/test/event_enum/TestLogImpl.hpp>
#include <stdio.h>

#if FW_OBJECT_NAMES == 1
TestLogImpl::TestLogImpl(const char* name) : Somewhere::TestLogComponentBase(name)
#else
TestLogImpl::TestLogImpl() : Somewhere::TestLogComponentBase()
#endif
{
}

TestLogImpl::~TestLogImpl() {
}

void TestLogImpl::init(void) {
    Somewhere::TestLogComponentBase::init();
}


void TestLogImpl::aport_handler(NATIVE_INT_TYPE portNum, I32 arg4, F32 arg5, U8 arg6) {

}

void TestLogImpl::sendEvent(I32 arg1, I32 arg2, U8 arg3) {
    printf("Sending event args %d, %d, %d\n",arg1, arg2, arg3);
    this->log_ACTIVITY_LO_SomeEvent(arg1,(SomeEnum)arg2,arg3);
}
