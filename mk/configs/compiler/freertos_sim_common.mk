FREERTOS_SIM_FLAGS_COMMON := -D TGT_OS_TYPE_FREERTOS_SIM -pthread -D_POSIX_C_SOURCE

FREERTOS_SIM_INCLUDES_COMMON := -I$(BUILD_ROOT)/Fw/Types/Linux \
                                -I$(BUILD_ROOT)/Os/FreeRTOS/FreeRTOS-Sim/Source/include \
                                -I$(BUILD_ROOT)/Os/FreeRTOS/FreeRTOS-Sim/Source/portable/GCC/POSIX \
                                -I$(BUILD_ROOT)/Os/FreeRTOS \
                                -I$(BUILD_ROOT)/Os \
                                -I$(BUILD_ROOT) \
                                -I$(BUILD_ROOT)/Os/FreeRTOS/TraceRecorder/config \
                                -I$(BUILD_ROOT)/Os/FreeRTOS/TraceRecorder/include \
                                -I$(BUILD_ROOT)/Os/FreeRTOS/TraceRecorder/streamports/File/include
