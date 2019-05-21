COMP ?= DEFAULT

ifeq ($(COMP),DEFAULT)
 include $(BUILD_ROOT)/mk/configs/builds/cortex-r4-ccs-debug.mk
endif

ifeq ($(COMP),gcc-debug)
 include $(BUILD_ROOT)/mk/configs/builds/cortex-r4-ccs-debug.mk
endif

ifeq ($(COMP),comp-ut)
 include $(BUILD_ROOT)/mk/configs/builds/cortex-r4-ccs-ut.mk
endif
