# ---------------------------------------------------------------------- 
# Makefile
# ---------------------------------------------------------------------- 

MODULE_DIR = GpsApp/Gps
MODULE = $(subst /,,$(MODULE_DIR))

default: TIR4 dict_install

BUILD_ROOT ?= $(subst /$(MODULE_DIR),,$(CURDIR))
export BUILD_ROOT

include $(BUILD_ROOT)/mk/makefiles/module_targets.mk
