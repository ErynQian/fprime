include $(BUILD_ROOT)/mk/configs/compiler/ccs7.0_r4_common.mk

CFLAGS := 	$(DEBUG) \
			$(OPT_SPEED) \
			\
			$(CCS_CFLAGS_COMMON) \
			$(CCS_R4_COMMON_FLAGS) \
			$(CCS_R4_COMMON_INCLUDES)

CXXFLAGS := $(DEBUG) \
			$(OPT_SPEED) \
			\
			$(CCS_CXXFLAGS_COMMON) \
			$(CCS_R4_COMMON_FLAGS) \
			$(CCS_R4_COMMON_INCLUDES)


COMPILER := hercules-debug-opt-ccs7.0

