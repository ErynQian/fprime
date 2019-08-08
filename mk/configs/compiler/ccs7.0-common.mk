CCS_COMMON := -mv7R4 --float_support=VFPv3D16 --code_state=32 -me \
			--display_error_number --diag_warning=225 --diag_wrap=off -DNAME_MAX=31 -DPATH_MAX=127

DEPEND_FILE := -ppa -ppd=
               
CCS_CFLAGS_COMMON := $(CCS_COMMON) --c99 

CCS_CXXFLAGS_COMMON := $(CCS_COMMON) --c++14 
						# --include_path=/usr/arm-linux-gnueabihf/include


# Special compiler flags to get around known AC warnings

AC_CC_FLAGS := 
AC_CXX_FLAGS :=
AC_HSM_FLAGS := 
AC_PARAMS_FLAGS := 

COMPILE_ONLY := -c
DEFINE := -D
COMPILE_TO := --output_file
LIBRARY_TO := 
LINK_BIN_TO := -o
INCLUDE_PATH := -I

CCS_INCLUDES_COMMON := -i"$(BUILD_ROOT)/Fw/Types/StdIntInc"


# Some warning override variables. These will go in individual modules where the warning-as-error needs to be overridden

NO_STRICT_ALIASING := -fno-strict-aliasing
NO_WARNINGS := -w

DEBUG := -g

OPT_SPEED := -O2 --opt_for_speed=5

OPT_SIZE := -O4 --opt_for_speed=0

OPT_NONE := -On

SYMBOL_CHECK := $(PYTHON_BIN) $(BUILD_ROOT)/mk/bin/empty.py
