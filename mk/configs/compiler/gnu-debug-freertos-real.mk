include $(BUILD_ROOT)/mk/configs/compiler/freertos_real_gnu_common.mk
include $(BUILD_ROOT)/mk/configs/compiler/include_common.mk
include $(BUILD_ROOT)/mk/configs/compiler/freertos_real_common.mk

CFLAGS :=   $(DEBUG) \
$(FREERTOS_REAL_GNU_CFLAGS) \
$(FREERTOS_REAL_GNU_INCLUDES)

CXXFLAGS := $(DEBUG) \
$(FREERTOS_REAL_GNU_CXXFLAGS) \
$(FREERTOS_REAL_GNU_INCLUDES)

COMPILER := freertos-real-debug-gnu
