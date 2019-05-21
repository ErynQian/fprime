COMP ?= DEFAULT

ifeq ($(COMP),DEFAULT)
 include $(BUILD_ROOT)/mk/configs/builds/freertos-real-gcc-debug.mk
endif

ifeq ($(COMP),gcc-debug)
 include $(BUILD_ROOT)/mk/configs/builds/freertos-real-gcc-debug.mk
endif

ifeq ($(COMP),comp-ut)
 include $(BUILD_ROOT)/mk/configs/builds/freertos-real-gcc-ut.mk
endif