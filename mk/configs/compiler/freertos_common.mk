FREERTOS_REAL_FLAGS_COMMON := -DTGT_OS_TYPE_FREERTOS_REAL -D_POSIX_C_SOURCE=200112 #-pthread 


FREERTOS_REAL_INCLUDES_COMMON := -I$(BUILD_ROOT)/Fw/Types/Linux \
                                \
                                -I$(BUILD_ROOT)/HAL \
                                -I$(BUILD_ROOT)/Os/FreeRTOS/FreeRTOS-Real/targetConfigs \
                                \
                                -I$(BUILD_ROOT)/Os/FreeRTOS \
                                -I$(BUILD_ROOT)/Os \
                                -I$(BUILD_ROOT)/Os/FreeRTOS/TraceRecorder/config \
                                -I$(BUILD_ROOT)/Os/FreeRTOS/TraceRecorder/include \
                                -I$(BUILD_ROOT)/Os/FreeRTOS/TraceRecorder/streamports/File/include

