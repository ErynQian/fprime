           
SRC =     adc.c                gio.c              os_portasm.asm   \
can.c                het.c              os_port.c        sys_main.c \
coralI2C.c           i2c.c              os_queue.c       sys_mpu.asm \
coralWD.c            lin.c              os_tasks.c       sys_pcr.c \
crc.c                mdio.c             os_timer.c       sys_phantom.c \
dabort.asm           mibspi.c           phy_dp83640.c    sys_pmm.c \
dcc.c                pinmux.c         sys_pmu.asm \
ecap.c               notification.c     pom.c            sys_selftest.c \
emac.c               os_croutine.c      sci.c            sys_startup.c \
eqep.c               os_event_groups.c  spi.c            system.c \
errata_SSWF021_45.c  os_heap.c          sys_core.asm     sys_vim.c \
esm.c                os_list.c          sys_dma.c \
etpwm.c              os_mpu_wrappers.c  sys_intvecs.asm

HDR = adc.h                     hw_reg_access.h    reg_dcc.h     rti.h \
can.h                     hw_usb.h           reg_dma.h     sci.h \
coralI2C.h                i2c.h              reg_ecap.h    spi.h \
coralWD.h                 lin.h              reg_efc.h     std_nhet.h \
crc.h                     mdio.h             reg_eqep.h    sys_common.h \
dcc.h                     MemMap.h           reg_esm.h     sys_core.h \
Device_header.h           mibspi.h           reg_etpwm.h   sys_dma.h \
Device_RM46.h             reg_flash.h   sys_mpu.h \
Device_types.h            os_croutine.h      reg_gio.h     sys_pcr.h \
ecap.h                    os_event_groups.h  reg_het.h     sys_pmm.h \
emac.h                    os_list.h          reg_htu.h     sys_pmu.h \
eqep.h                    os_mpu_wrappers.h  reg_i2c.h     sys_selftest.h \
errata_SSWF021_45_defs.h  os_portable.h      reg_lin.h     system.h \
errata_SSWF021_45.h       os_portmacro.h     reg_mibspi.h  sys_vim.h \
esm.h                     os_projdefs.h      reg_pbist.h   ti_fee_cfg.h \
etpwm.h                   os_queue.h         reg_pcr.h     ti_fee.h \
fee_interface.h           os_semphr.h        reg_pinmux.h  ti_fee_types.h \
FreeRTOSConfig.h          os_StackMacros.h   reg_pmm.h     usbcdc.h \
FreeRTOS.h                os_task.h          reg_pom.h     usbdcdc.h \
gio.h                     os_timer.h         reg_rti.h     usbdevice.h \
hal_stdtypes.h            phy_dp83640.h      reg_sci.h     usbdevicepriv.h \
het.h                     pinmux.h           reg_spi.h     usb.h \
htu.h                     pom.h              reg_stc.h     usb-ids.h \
hw_emac_ctrl.h            reg_adc.h          reg_system.h  usblib.h \
hw_emac.h                 reg_can.h          reg_tcram.h   usb_serial_structs.h \
hw_mdio.h                 reg_crc.h          reg_vim.h
