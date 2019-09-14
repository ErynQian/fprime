include $(BUILD_ROOT)/mk/configs/compiler/include_common.mk
include $(BUILD_ROOT)/mk/configs/compiler/defines_common.mk
include $(BUILD_ROOT)/mk/configs/compiler/ccs7.0-common.mk
include $(BUILD_ROOT)/mk/configs/compiler/freertos_common.mk

#TI_CCS_DIR := /cygdrive/c/ti/ccsv7/tools/compiler/ti-cgt-arm_16.9.7.LTS
TI_CCS_DIR := ${TI_CCSV8_TOOLS_COMPILER_TI_CGT_ARM_PATH}/bin

CCS_R4_COMMON_FLAGS :=  $(COMMON_DEFINES) \
                        $(FREERTOS_REAL_FLAGS_COMMON) \
                        $(DEFINE)BUILD_TIR4 \
                        $(DEFINE)_LIBCPP_HAS_NO_LONG_LONG 
                                



CCS_R4_COMMON_INCLUDES :=   $(COMMON_INCLUDES) \
                            $(CCS_INCLUDES_COMMON) \
                            $(FREERTOS_REAL_INCLUDES_COMMON) \
                            -i"$(BUILD_ROOT)/HAL" \
                            -i"${TI_CCSV8_TOOLS_COMPILER_TI_CGT_ARM_PATH}/include"

COVERAGE :=

# CC :=  $(TI_CCS_DIR)/armcl
CC := ${TI_CCSV8_TOOLS_COMPILER_TI_CGT_ARM_PATH}/bin/armcl
CXX := $(CC)

LINK_LIB := ${TI_CCSV8_TOOLS_COMPILER_TI_CGT_ARM_PATH}/bin/armar
LINK_LIB_FLAGS := r
POST_LINK_LIB := $(PYTHON_BIN) $(BUILD_ROOT)/mk/bin/empty.py

LINK_LIBS :=    $(BUILD_ROOT)/HAL/sys_link.cmd \
                -llibc.a
                # -l$(BUILD_ROOT)/R4/R4FlashApi/F021_API_CortexR4_LE.lib

LINK_BIN :=  $(CC)
# LINK_BIN_FLAGS :=   -mv7R4 \
                    # --code_state=32 \
                    # --float_support=VFPv3D16 \
                    # \
                    # -g --c99 \
                    # --display_error_number \
                    # --diag_warning=225 \
                    # --diag_wrap=off \
                    # --abi=eabi \
                    # --enum_type=packed \
                    # -z \
                    # -m"R4Bin.map" \
                    # --heap_size=0x800 \
                    # --stack_size=0x800 \
                    # --generate_dead_funcs_list="R4Bin_dead_funcs.xml" \
                    # --xml_link_info="R4Bin_linkInfo.xml" \
                    # --rom_model \
                    # --me \
                    # --reread_libs \
                    # --warn_sections \
                    # --retain=resetEntry # Needed to populate .intvecs 

LINK_BIN_FLAGS :=   -mv7R4 \
                    --code_state=32 \
                    --float_support=VFPv3D16 \
                    --enum_type=packed \
                    -me \
                    -O2 \
                    --diag_warning=225 \
                    --diag_wrap=off \
                    --abi=eabi \
                    --display_error_number \
                    -z \
                    -m"R4Bin.map" \
                    --heap_size=0x800 \
                    --stack_size=0x800 \
                    --generate_dead_funcs_list="R4Bin_dead_funcs.xml" \
                    --xml_link_info="R4Bin_linkInfo.xml" \
                    -i"${TI_CCSV8_TOOLS_COMPILER_TI_CGT_ARM_PATH}/lib" \
                    --reread_libs \
                    --diag_wrap=off \
                    --display_error_number \
                    --warn_sections \
                    --retain=resetEntry \
                    --rom_model \
                    -o "CubeRover.out" 

# LINK_BIN_FLAGS :=   -mv7R5 \
#                     --code_state=32 \
#                     --float_support=VFPv3D16 \
#                     -g --c99 \
#                     --display_error_number \
#                     --diag_warning=225 \
#                     --diag_wrap=off \
#                     --abi=eabi \
#                     --enum_type=packed \
#                     -z -m"R5Bin.map" \
#                     --heap_size=0x600 \
#                     --stack_size=0x800 \
#                     --generate_dead_funcs_list="R5Bin_dead_funcs.xml" \
#                     --xml_link_info="R5Bin_linkInfo.xml" \
#                     --rom_model \
#                     --be32 \
#                     --reread_libs \
#                     --warn_sections \
#                     --retain=resetEntry # Needed to populate .intvecs

POST_LINK_BIN := $(BUILD_ROOT)/Bootloader/out2bin.sh
POST_LINK_POST_ARGS = $(subst .out,.bin,$@)

FILE_SIZE := $(LS) $(LS_SIZE)
LOAD_SIZE := $(SIZE)


DUMP = $(PYTHON_BIN) $(BUILD_ROOT)/mk/bin/empty.py
SYMBOL_SIZES = $(PYTHON_BIN) $(BUILD_ROOT)/mk/bin/empty.py
MUNCH := $(PYTHON_BIN) $(BUILD_ROOT)/mk/bin/empty.py

