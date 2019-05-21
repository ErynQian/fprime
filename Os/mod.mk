#
#   Copyright 2004-2008, by the California Institute of Technology.
#   ALL RIGHTS RESERVED. United States Government Sponsorship
#   acknowledged. Any commercial use must be negotiated with the Office
#   of Technology Transfer at the California Institute of Technology.
#
#   Information included herein is controlled under the International
#   Traffic in Arms Regulations ("ITAR") by the U.S. Department of State.
#   Export or transfer of this information to a Foreign Person or foreign
#   entity requires an export license issued by the U.S. State Department
#   or an ITAR exemption prior to the export or transfer.
#

SRC =           TaskCommon.cpp \
                TaskString.cpp \
                QueueCommon.cpp \
                QueueString.cpp \
                SimpleQueueRegistry.cpp \
                MemCommon.cpp \
                ValidateFileCommon.cpp

HDR =           Queue.hpp \
                QueueString.hpp \
                SimpleQueueRegistry.hpp \
                Task.hpp \
                TaskString.hpp \
                InterruptLock.hpp \
                IntervalTimer.hpp \
                WatchdogTimer.hpp \
                Mutex.hpp \
                File.hpp \
                ValidateFile.hpp \
                FileSystem.hpp


SRC_FREERTOS_SIM =  FreeRTOS/assert.c \
                    FreeRTOS/FreeRTOS-Sim/Source/portable/GCC/POSIX/port.c \
                    FreeRTOS/FreeRTOS-Sim/Source/event_groups.c \
                    FreeRTOS/FreeRTOS-Sim/Source/list.c \
                    FreeRTOS/FreeRTOS-Sim/Source/queue.c \
                    FreeRTOS/FreeRTOS-Sim/Source/tasks.c \
                    FreeRTOS/FreeRTOS-Sim/Source/timers.c \
                    FreeRTOS/FreeRTOS-Sim/Source/portable/MemMang/heap_2.c \
                    FreeRTOS/FreeRTOS-Sim/Source/croutine.c \
                    FreeRTOS/FreeRTOS-Sim/Source/stream_buffer.c \
                    FreeRTOS/Queue.cpp \
                    FreeRTOS/Mutex.cpp \
                    FreeRTOS/Task.cpp \
                    FreeRTOS/IntervalTimer.cpp \
                    FreeRTOS/InterruptLock.cpp \
                    FreeRTOS/WatchdogTimer.cpp \
                    LogPrintf.cpp \
                    Linux/FileSystem.cpp \
                    Linux/File.cpp
                    # FreeRTOS/TraceRecorder/trcKernelPort.c \
                    # FreeRTOS/TraceRecorder/streamports/File/trcStreamingPort.c \
                    # FreeRTOS/TraceRecorder/trcStreamingRecorder.c \
                    # FreeRTOS/TraceRecorder/trcSnapshotRecorder.c \

SRC_CORTEX_R4 :=    $(shell find ../R4/HAL/source -name '*.c') \
					$(shell find ../R4/HAL/source -name '*.asm') \
                    FreeRTOS/Queue.cpp \
                    FreeRTOS/Mutex.cpp \
                    FreeRTOS/Task.cpp \
                    FreeRTOS/IntervalTimer.cpp \
                    FreeRTOS/InterruptLock.cpp \
                    FreeRTOS/WatchdogTimer.cpp \
                    LogPrintf.cpp \
                    Linux/FileSystem.cpp \
                    Linux/File.cpp
                    # FreeRTOS/TraceRecorder/trcKernelPort.c \
                    # FreeRTOS/TraceRecorder/streamports/File/trcStreamingPort.c \
                    # FreeRTOS/TraceRecorder/trcStreamingRecorder.c \
                    # FreeRTOS/TraceRecorder/trcSnapshotRecorder.c \

SRC_LINUX=      Pthreads/Queue.cpp \
                Pthreads/BufferQueueCommon.cpp \
                Pthreads/PriorityBufferQueue.cpp \
                Pthreads/MaxHeap/MaxHeap.cpp \
                Linux/File.cpp \
                Posix/Task.cpp \
                LogPrintf.cpp \
                Linux/InterruptLock.cpp \
                Linux/WatchdogTimer.cpp \
                X86/IntervalTimer.cpp \
                Linux/IntervalTimer.cpp \
                Posix/Mutex.cpp \
                Linux/FileSystem.cpp


SRC_DARWIN =    Pthreads/Queue.cpp \
                Pthreads/BufferQueueCommon.cpp \
                Pthreads/PriorityBufferQueue.cpp \
                Pthreads/MaxHeap/MaxHeap.cpp \
                Linux/File.cpp \
                Posix/Task.cpp \
                LogPrintf.cpp \
                Linux/WatchdogTimer.cpp \
                Linux/InterruptLock.cpp \
                X86/IntervalTimer.cpp \
                MacOs/IntervalTimer.cpp \
                Posix/Mutex.cpp \
                Linux/FileSystem.cpp

SRC_CYGWIN =    Pthreads/Queue.cpp \
                Pthreads/BufferQueueCommon.cpp \
                Pthreads/PriorityBufferQueue.cpp \
                Pthreads/MaxHeap/MaxHeap.cpp \
                Linux/File.cpp \
                Posix/Task.cpp \
                LogPrintf.cpp \
                Linux/InterruptLock.cpp \
                Linux/WatchdogTimer.cpp \
                X86/IntervalTimer.cpp \
                Linux/IntervalTimer.cpp \
                Posix/Mutex.cpp \
                Linux/FileSystem.cpp

SRC_RASPIAN =   Pthreads/Queue.cpp \
                Pthreads/BufferQueueCommon.cpp \
                Pthreads/PriorityBufferQueue.cpp \
                Pthreads/MaxHeap/MaxHeap.cpp \
                Linux/File.cpp \
                Posix/Task.cpp \
                LogPrintf.cpp \
                Linux/InterruptLock.cpp \
                Linux/WatchdogTimer.cpp \
                X86/IntervalTimer.cpp \
                Linux/IntervalTimer.cpp \
                Posix/Mutex.cpp \
                Linux/FileSystem.cpp




SUBDIRS = test

# to use Pthread priority queue include:
#        Pthreads/Queue.cpp \
#        Pthreads/BufferQueueCommon.cpp \
#        Pthreads/PriorityBufferQueue.cpp \
#        Pthreads/MaxHeap/MaxHeap.cpp \


# to use Pthread fifo queue include:
#        Pthreads/Queue.cpp \
#        Pthreads/BufferQueueCommon.cpp \
#        Pthreads/FIFOBufferQueue.cpp \
