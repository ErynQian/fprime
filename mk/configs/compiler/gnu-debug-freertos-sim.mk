include $(BUILD_ROOT)/mk/configs/compiler/freertos_sim_gnu_common.mk
include $(BUILD_ROOT)/mk/configs/compiler/include_common.mk
include $(BUILD_ROOT)/mk/configs/compiler/freertos_sim_common.mk

CFLAGS :=   $(DEBUG) \
$(FREERTOS_SIM_GNU_CFLAGS) \
$(FREERTOS_SIM_GNU_INCLUDES)

CXXFLAGS := $(DEBUG) \
$(FREERTOS_SIM_GNU_CXXFLAGS) \
$(FREERTOS_SIM_GNU_INCLUDES)

COMPILER := freertos-sim-debug-gnu
