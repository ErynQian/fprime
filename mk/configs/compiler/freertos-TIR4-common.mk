include $(BUILD_ROOT)/mk/configs/compiler/include_common.mk
include $(BUILD_ROOT)/mk/configs/compiler/defines_common.mk
include $(BUILD_ROOT)/mk/configs/compiler/freertos_real_common.mk
#include $(BUILD_ROOT)/mk/configs/compiler/gnu-common.mk

CC :=  /usr/bin/armcl
CFLAGS := -mv7R4 --code_state=32 --float_support=VFPv3D16 -me -g \
--diag_warning=225 --diag_wrap=off --display_error_number --enum_type=packed --abi=eabi --preproc_with_compile

CXX := /usr/bin/armcl
CXXFLAGS :=  -mv7R4 --code_state=32 --float_support=VFPv3D16 -me -g \
--diag_warning=225 --diag_wrap=off --display_error_number --enum_type=packed --abi=eabi --preproc_with_compile
GCOV := /usr/bin/gcov
AR := /usr/bin/ar

BUILD_32BIT := -m32

CC_MUNCH := $(BUILD_ROOT)/mk/bin/empty.sh

LINK_LIB := $(AR)
LINK_LIB_FLAGS := rcs
LIBRARY_TO :=
POST_LINK_LIB := ranlib

LINK_BIN := $(CXX)
LINK_BIN_FLAGS := -z muldefs $(LIBS) #$(BUILD_32BIT)

FILE_SIZE := $(LS) $(LS_SIZE)
LOAD_SIZE := $(SIZE)



LINK_LIBS := -ldl -lpthread -lm -lrt -lutil

OPT_SPEED := -O3
DEBUG := -g3

FREERTOS_REAL_GNU_CFLAGS :=  $(FREERTOS_REAL_FLAGS_COMMON) \
							$(COMMON_DEFINES) \
							$(GNU_CFLAGS_COMMON) \
							#$(BUILD_32BIT) # Quantum framework won't build 32-bit

FREERTOS_REAL_GNU_CXXFLAGS := $(FREERTOS_REAL_FLAGS_COMMON) \
							 $(COMMON_DEFINES) \
							 $(GNU_CXXFLAGS_COMMON) \
							 #$(BUILD_32BIT)

COVERAGE := -fprofile-arcs -ftest-coverage

FREERTOS_REAL_GNU_INCLUDES := $(FREERTOS_REAL_INCLUDES_COMMON) $(COMMON_INCLUDES)

DUMP = $(BUILD_ROOT)/mk/bin/empty.sh

MUNCH := $(BUILD_ROOT)/mk/bin/empty.sh
