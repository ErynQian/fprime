################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.3.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./HAL/source/adc.obj" \
"./HAL/source/can.obj" \
"./HAL/source/crc.obj" \
"./HAL/source/dabort.obj" \
"./HAL/source/dcc.obj" \
"./HAL/source/ecap.obj" \
"./HAL/source/emac.obj" \
"./HAL/source/eqep.obj" \
"./HAL/source/errata_SSWF021_45.obj" \
"./HAL/source/esm.obj" \
"./HAL/source/etpwm.obj" \
"./HAL/source/gio.obj" \
"./HAL/source/het.obj" \
"./HAL/source/i2c.obj" \
"./HAL/source/lin.obj" \
"./HAL/source/mdio.obj" \
"./HAL/source/mibspi.obj" \
"./HAL/source/notification.obj" \
"./HAL/source/os_croutine.obj" \
"./HAL/source/os_event_groups.obj" \
"./HAL/source/os_heap.obj" \
"./HAL/source/os_list.obj" \
"./HAL/source/os_mpu_wrappers.obj" \
"./HAL/source/os_port.obj" \
"./HAL/source/os_portasm.obj" \
"./HAL/source/os_queue.obj" \
"./HAL/source/os_tasks.obj" \
"./HAL/source/os_timer.obj" \
"./HAL/source/phy_dp83640.obj" \
"./HAL/source/pinmux.obj" \
"./HAL/source/pom.obj" \
"./HAL/source/sci.obj" \
"./HAL/source/spi.obj" \
"./HAL/source/sys_core.obj" \
"./HAL/source/sys_dma.obj" \
"./HAL/source/sys_intvecs.obj" \
"./HAL/source/sys_main.obj" \
"./HAL/source/sys_mpu.obj" \
"./HAL/source/sys_pcr.obj" \
"./HAL/source/sys_phantom.obj" \
"./HAL/source/sys_pmm.obj" \
"./HAL/source/sys_pmu.obj" \
"./HAL/source/sys_selftest.obj" \
"./HAL/source/sys_startup.obj" \
"./HAL/source/sys_vim.obj" \
"./HAL/source/system.obj" \
"./source/coralI2C.obj" \
"./source/coralWD.obj" \
"../HAL/source/sys_link.cmd" \
$(GEN_CMDS__FLAG) \
-lrtsv7R4_T_le_v3D16_eabi.lib \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include HAL/source/subdir_vars.mk
-include source/subdir_vars.mk
-include HAL/source/subdir_rules.mk
-include source/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
cuberover-firmware.out \

EXE_OUTPUTS__QUOTED += \
"cuberover-firmware.out" \

BIN_OUTPUTS += \
cuberover-firmware.hex \

BIN_OUTPUTS__QUOTED += \
"cuberover-firmware.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "cuberover-firmware.out"

# Tool invocations
cuberover-firmware.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: ARM Linker'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.3.LTS/bin/armcl" -mv7R4 --code_state=32 --float_support=VFPv3D16 -me -g --diag_warning=225 --diag_wrap=off --display_error_number --enum_type=packed --abi=eabi -z -m"cuberover-firmware.map" --heap_size=0x800 --stack_size=0x800 -i"C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.3.LTS/lib" -i"C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.3.LTS/include" --reread_libs --diag_wrap=off --display_error_number --warn_sections --xml_link_info="cuberover-firmware_linkInfo.xml" --rom_model -o "cuberover-firmware.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

cuberover-firmware.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: ARM Hex Utility'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.3.LTS/bin/armhex"  -o "cuberover-firmware.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "HAL\source\adc.obj" "HAL\source\can.obj" "HAL\source\crc.obj" "HAL\source\dabort.obj" "HAL\source\dcc.obj" "HAL\source\ecap.obj" "HAL\source\emac.obj" "HAL\source\eqep.obj" "HAL\source\errata_SSWF021_45.obj" "HAL\source\esm.obj" "HAL\source\etpwm.obj" "HAL\source\gio.obj" "HAL\source\het.obj" "HAL\source\i2c.obj" "HAL\source\lin.obj" "HAL\source\mdio.obj" "HAL\source\mibspi.obj" "HAL\source\notification.obj" "HAL\source\os_croutine.obj" "HAL\source\os_event_groups.obj" "HAL\source\os_heap.obj" "HAL\source\os_list.obj" "HAL\source\os_mpu_wrappers.obj" "HAL\source\os_port.obj" "HAL\source\os_portasm.obj" "HAL\source\os_queue.obj" "HAL\source\os_tasks.obj" "HAL\source\os_timer.obj" "HAL\source\phy_dp83640.obj" "HAL\source\pinmux.obj" "HAL\source\pom.obj" "HAL\source\sci.obj" "HAL\source\spi.obj" "HAL\source\sys_core.obj" "HAL\source\sys_dma.obj" "HAL\source\sys_intvecs.obj" "HAL\source\sys_main.obj" "HAL\source\sys_mpu.obj" "HAL\source\sys_pcr.obj" "HAL\source\sys_phantom.obj" "HAL\source\sys_pmm.obj" 
	-$(RM) "HAL\source\sys_pmu.obj" "HAL\source\sys_selftest.obj" "HAL\source\sys_startup.obj" "HAL\source\sys_vim.obj" "HAL\source\system.obj" "source\coralI2C.obj" "source\coralWD.obj" 
	-$(RM) "HAL\source\adc.d" "HAL\source\can.d" "HAL\source\crc.d" "HAL\source\dcc.d" "HAL\source\ecap.d" "HAL\source\emac.d" "HAL\source\eqep.d" "HAL\source\errata_SSWF021_45.d" "HAL\source\esm.d" "HAL\source\etpwm.d" "HAL\source\gio.d" "HAL\source\het.d" "HAL\source\i2c.d" "HAL\source\lin.d" "HAL\source\mdio.d" "HAL\source\mibspi.d" "HAL\source\notification.d" "HAL\source\os_croutine.d" "HAL\source\os_event_groups.d" "HAL\source\os_heap.d" "HAL\source\os_list.d" "HAL\source\os_mpu_wrappers.d" "HAL\source\os_port.d" "HAL\source\os_queue.d" "HAL\source\os_tasks.d" "HAL\source\os_timer.d" "HAL\source\phy_dp83640.d" "HAL\source\pinmux.d" "HAL\source\pom.d" "HAL\source\sci.d" "HAL\source\spi.d" "HAL\source\sys_dma.d" "HAL\source\sys_main.d" "HAL\source\sys_pcr.d" "HAL\source\sys_phantom.d" "HAL\source\sys_pmm.d" "HAL\source\sys_selftest.d" "HAL\source\sys_startup.d" "HAL\source\sys_vim.d" "HAL\source\system.d" "source\coralI2C.d" "source\coralWD.d" 
	-$(RM) "HAL\source\dabort.d" "HAL\source\os_portasm.d" "HAL\source\sys_core.d" "HAL\source\sys_intvecs.d" "HAL\source\sys_mpu.d" "HAL\source\sys_pmu.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

