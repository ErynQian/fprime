#Makefile to run global make.
DEPLOYMENT := GpsApp
BUILD_ROOT ?= $(subst /$(DEPLOYMENT),,$(CURDIR))

export BUILD_ROOT

default: TIR4 dict_install

include $(BUILD_ROOT)/mk/makefiles/deployment_makefile.mk

