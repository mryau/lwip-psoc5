#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice.h>
#include <cydevice_trm.h>

/* BOOT_I2C_IRQ */
#define BOOT_I2C_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define BOOT_I2C_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define BOOT_I2C_IRQ__INTC_MASK 0x8000u
#define BOOT_I2C_IRQ__INTC_NUMBER 15u
#define BOOT_I2C_IRQ__INTC_PRIOR_NUM 7u
#define BOOT_I2C_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_15
#define BOOT_I2C_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define BOOT_I2C_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* BOOT_I2C_FF */
#define BOOT_I2C_FF__ADR CYREG_I2C_ADR
#define BOOT_I2C_FF__CFG CYREG_I2C_CFG
#define BOOT_I2C_FF__CLK_DIV1 CYREG_I2C_CLK_DIV1
#define BOOT_I2C_FF__CLK_DIV2 CYREG_I2C_CLK_DIV2
#define BOOT_I2C_FF__CSR CYREG_I2C_CSR
#define BOOT_I2C_FF__D CYREG_I2C_D
#define BOOT_I2C_FF__MCSR CYREG_I2C_MCSR
#define BOOT_I2C_FF__PM_ACT_CFG CYREG_PM_ACT_CFG5
#define BOOT_I2C_FF__PM_ACT_MSK 0x04u
#define BOOT_I2C_FF__PM_STBY_CFG CYREG_PM_STBY_CFG5
#define BOOT_I2C_FF__PM_STBY_MSK 0x04u
#define BOOT_I2C_FF__TMOUT_CFG0 CYREG_I2C_TMOUT_CFG0
#define BOOT_I2C_FF__TMOUT_CFG1 CYREG_I2C_TMOUT_CFG1
#define BOOT_I2C_FF__TMOUT_CSR CYREG_I2C_TMOUT_CSR
#define BOOT_I2C_FF__TMOUT_SR CYREG_I2C_TMOUT_SR
#define BOOT_I2C_FF__XCFG CYREG_I2C_XCFG

/* HB_CK */
#define HB_CK__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define HB_CK__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define HB_CK__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define HB_CK__CFG2_SRC_SEL_MASK 0x07u
#define HB_CK__INDEX 0x00u
#define HB_CK__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define HB_CK__PM_ACT_MSK 0x01u
#define HB_CK__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define HB_CK__PM_STBY_MSK 0x01u

/* EINT */
#define EINT__0__MASK 0x04u
#define EINT__0__PC CYREG_PRT6_PC2
#define EINT__0__PORT 6u
#define EINT__0__SHIFT 2
#define EINT__AG CYREG_PRT6_AG
#define EINT__AMUX CYREG_PRT6_AMUX
#define EINT__BIE CYREG_PRT6_BIE
#define EINT__BIT_MASK CYREG_PRT6_BIT_MASK
#define EINT__BYP CYREG_PRT6_BYP
#define EINT__CTL CYREG_PRT6_CTL
#define EINT__DM0 CYREG_PRT6_DM0
#define EINT__DM1 CYREG_PRT6_DM1
#define EINT__DM2 CYREG_PRT6_DM2
#define EINT__DR CYREG_PRT6_DR
#define EINT__INP_DIS CYREG_PRT6_INP_DIS
#define EINT__LCD_COM_SEG CYREG_PRT6_LCD_COM_SEG
#define EINT__LCD_EN CYREG_PRT6_LCD_EN
#define EINT__MASK 0x04u
#define EINT__PORT 6u
#define EINT__PRT CYREG_PRT6_PRT
#define EINT__PRTDSI__CAPS_SEL CYREG_PRT6_CAPS_SEL
#define EINT__PRTDSI__DBL_SYNC_IN CYREG_PRT6_DBL_SYNC_IN
#define EINT__PRTDSI__OE_SEL0 CYREG_PRT6_OE_SEL0
#define EINT__PRTDSI__OE_SEL1 CYREG_PRT6_OE_SEL1
#define EINT__PRTDSI__OUT_SEL0 CYREG_PRT6_OUT_SEL0
#define EINT__PRTDSI__OUT_SEL1 CYREG_PRT6_OUT_SEL1
#define EINT__PRTDSI__SYNC_OUT CYREG_PRT6_SYNC_OUT
#define EINT__PS CYREG_PRT6_PS
#define EINT__SHIFT 2
#define EINT__SLW CYREG_PRT6_SLW

/* SCL */
#define SCL__0__MASK 0x20u
#define SCL__0__PC CYREG_PRT5_PC5
#define SCL__0__PORT 5u
#define SCL__0__SHIFT 5
#define SCL__AG CYREG_PRT5_AG
#define SCL__AMUX CYREG_PRT5_AMUX
#define SCL__BIE CYREG_PRT5_BIE
#define SCL__BIT_MASK CYREG_PRT5_BIT_MASK
#define SCL__BYP CYREG_PRT5_BYP
#define SCL__CTL CYREG_PRT5_CTL
#define SCL__DM0 CYREG_PRT5_DM0
#define SCL__DM1 CYREG_PRT5_DM1
#define SCL__DM2 CYREG_PRT5_DM2
#define SCL__DR CYREG_PRT5_DR
#define SCL__INP_DIS CYREG_PRT5_INP_DIS
#define SCL__LCD_COM_SEG CYREG_PRT5_LCD_COM_SEG
#define SCL__LCD_EN CYREG_PRT5_LCD_EN
#define SCL__MASK 0x20u
#define SCL__PORT 5u
#define SCL__PRT CYREG_PRT5_PRT
#define SCL__PRTDSI__CAPS_SEL CYREG_PRT5_CAPS_SEL
#define SCL__PRTDSI__DBL_SYNC_IN CYREG_PRT5_DBL_SYNC_IN
#define SCL__PRTDSI__OE_SEL0 CYREG_PRT5_OE_SEL0
#define SCL__PRTDSI__OE_SEL1 CYREG_PRT5_OE_SEL1
#define SCL__PRTDSI__OUT_SEL0 CYREG_PRT5_OUT_SEL0
#define SCL__PRTDSI__OUT_SEL1 CYREG_PRT5_OUT_SEL1
#define SCL__PRTDSI__SYNC_OUT CYREG_PRT5_SYNC_OUT
#define SCL__PS CYREG_PRT5_PS
#define SCL__SHIFT 5
#define SCL__SLW CYREG_PRT5_SLW

/* SDA */
#define SDA__0__MASK 0x08u
#define SDA__0__PC CYREG_PRT5_PC3
#define SDA__0__PORT 5u
#define SDA__0__SHIFT 3
#define SDA__AG CYREG_PRT5_AG
#define SDA__AMUX CYREG_PRT5_AMUX
#define SDA__BIE CYREG_PRT5_BIE
#define SDA__BIT_MASK CYREG_PRT5_BIT_MASK
#define SDA__BYP CYREG_PRT5_BYP
#define SDA__CTL CYREG_PRT5_CTL
#define SDA__DM0 CYREG_PRT5_DM0
#define SDA__DM1 CYREG_PRT5_DM1
#define SDA__DM2 CYREG_PRT5_DM2
#define SDA__DR CYREG_PRT5_DR
#define SDA__INP_DIS CYREG_PRT5_INP_DIS
#define SDA__LCD_COM_SEG CYREG_PRT5_LCD_COM_SEG
#define SDA__LCD_EN CYREG_PRT5_LCD_EN
#define SDA__MASK 0x08u
#define SDA__PORT 5u
#define SDA__PRT CYREG_PRT5_PRT
#define SDA__PRTDSI__CAPS_SEL CYREG_PRT5_CAPS_SEL
#define SDA__PRTDSI__DBL_SYNC_IN CYREG_PRT5_DBL_SYNC_IN
#define SDA__PRTDSI__OE_SEL0 CYREG_PRT5_OE_SEL0
#define SDA__PRTDSI__OE_SEL1 CYREG_PRT5_OE_SEL1
#define SDA__PRTDSI__OUT_SEL0 CYREG_PRT5_OUT_SEL0
#define SDA__PRTDSI__OUT_SEL1 CYREG_PRT5_OUT_SEL1
#define SDA__PRTDSI__SYNC_OUT CYREG_PRT5_SYNC_OUT
#define SDA__PS CYREG_PRT5_PS
#define SDA__SHIFT 3
#define SDA__SLW CYREG_PRT5_SLW

/* HB */
#define HB__0__MASK 0x80u
#define HB__0__PC CYREG_PRT2_PC7
#define HB__0__PORT 2u
#define HB__0__SHIFT 7
#define HB__AG CYREG_PRT2_AG
#define HB__AMUX CYREG_PRT2_AMUX
#define HB__BIE CYREG_PRT2_BIE
#define HB__BIT_MASK CYREG_PRT2_BIT_MASK
#define HB__BYP CYREG_PRT2_BYP
#define HB__CTL CYREG_PRT2_CTL
#define HB__DM0 CYREG_PRT2_DM0
#define HB__DM1 CYREG_PRT2_DM1
#define HB__DM2 CYREG_PRT2_DM2
#define HB__DR CYREG_PRT2_DR
#define HB__INP_DIS CYREG_PRT2_INP_DIS
#define HB__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define HB__LCD_EN CYREG_PRT2_LCD_EN
#define HB__MASK 0x80u
#define HB__PORT 2u
#define HB__PRT CYREG_PRT2_PRT
#define HB__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define HB__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define HB__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define HB__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define HB__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define HB__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define HB__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define HB__PS CYREG_PRT2_PS
#define HB__SHIFT 7
#define HB__SLW CYREG_PRT2_SLW

/* Miscellaneous */
/* -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release */
#define CYDEV_BOOTLOADER_IO_COMP_CUSTOM_IO 0
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_MEMBER_5B 4u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_DIE_PSOC5LP 4u
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_DIE_PSOC5LP
#define CYDEV_BOOTLOADER_IO_COMP_BOOT 1
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CYDEV_BOOTLOADER_APPLICATIONS 1u
#define CYDEV_BOOTLOADER_CHECKSUM_BASIC 0
#define CYDEV_BOOTLOADER_CHECKSUM_CRC 1
#define CYDEV_BOOTLOADER_IO_COMP CYDEV_BOOTLOADER_IO_COMP_BOOT
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 3u
#define CYDEV_CHIP_DIE_PSOC4A 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E123069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 2u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REV_PSOC5LP_PRODUCTION
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 0
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_REQXRES 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x1000
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00008000u
#define CYDEV_PROJ_TYPE 1
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x4000
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 3.3
#define CYDEV_VDDIO2_MV 3300
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 3.3
#define CYDEV_VIO2_MV 3300
#define CYDEV_VIO3 5
#define CYDEV_VIO3_MV 5000
#define CyBtldr_BOOT CYDEV_BOOTLOADER_IO_COMP_BOOT
#define CyBtldr_Custom_Interface CYDEV_BOOTLOADER_IO_COMP_CUSTOM_IO
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 1

#endif /* INCLUDED_CYFITTER_H */
