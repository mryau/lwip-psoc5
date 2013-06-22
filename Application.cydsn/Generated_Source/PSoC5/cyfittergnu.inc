.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* ETH_IntClock */
.set ETH_IntClock__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set ETH_IntClock__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set ETH_IntClock__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set ETH_IntClock__CFG2_SRC_SEL_MASK, 0x07
.set ETH_IntClock__INDEX, 0x00
.set ETH_IntClock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set ETH_IntClock__PM_ACT_MSK, 0x01
.set ETH_IntClock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set ETH_IntClock__PM_STBY_MSK, 0x01

/* URT_IntClock */
.set URT_IntClock__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set URT_IntClock__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set URT_IntClock__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set URT_IntClock__CFG2_SRC_SEL_MASK, 0x07
.set URT_IntClock__INDEX, 0x01
.set URT_IntClock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set URT_IntClock__PM_ACT_MSK, 0x02
.set URT_IntClock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set URT_IntClock__PM_STBY_MSK, 0x02

/* LCD_LCDPort */
.set LCD_LCDPort__0__MASK, 0x01
.set LCD_LCDPort__0__PC, CYREG_PRT2_PC0
.set LCD_LCDPort__0__PORT, 2
.set LCD_LCDPort__0__SHIFT, 0
.set LCD_LCDPort__1__MASK, 0x02
.set LCD_LCDPort__1__PC, CYREG_PRT2_PC1
.set LCD_LCDPort__1__PORT, 2
.set LCD_LCDPort__1__SHIFT, 1
.set LCD_LCDPort__2__MASK, 0x04
.set LCD_LCDPort__2__PC, CYREG_PRT2_PC2
.set LCD_LCDPort__2__PORT, 2
.set LCD_LCDPort__2__SHIFT, 2
.set LCD_LCDPort__3__MASK, 0x08
.set LCD_LCDPort__3__PC, CYREG_PRT2_PC3
.set LCD_LCDPort__3__PORT, 2
.set LCD_LCDPort__3__SHIFT, 3
.set LCD_LCDPort__4__MASK, 0x10
.set LCD_LCDPort__4__PC, CYREG_PRT2_PC4
.set LCD_LCDPort__4__PORT, 2
.set LCD_LCDPort__4__SHIFT, 4
.set LCD_LCDPort__5__MASK, 0x20
.set LCD_LCDPort__5__PC, CYREG_PRT2_PC5
.set LCD_LCDPort__5__PORT, 2
.set LCD_LCDPort__5__SHIFT, 5
.set LCD_LCDPort__6__MASK, 0x40
.set LCD_LCDPort__6__PC, CYREG_PRT2_PC6
.set LCD_LCDPort__6__PORT, 2
.set LCD_LCDPort__6__SHIFT, 6
.set LCD_LCDPort__AG, CYREG_PRT2_AG
.set LCD_LCDPort__AMUX, CYREG_PRT2_AMUX
.set LCD_LCDPort__BIE, CYREG_PRT2_BIE
.set LCD_LCDPort__BIT_MASK, CYREG_PRT2_BIT_MASK
.set LCD_LCDPort__BYP, CYREG_PRT2_BYP
.set LCD_LCDPort__CTL, CYREG_PRT2_CTL
.set LCD_LCDPort__DM0, CYREG_PRT2_DM0
.set LCD_LCDPort__DM1, CYREG_PRT2_DM1
.set LCD_LCDPort__DM2, CYREG_PRT2_DM2
.set LCD_LCDPort__DR, CYREG_PRT2_DR
.set LCD_LCDPort__INP_DIS, CYREG_PRT2_INP_DIS
.set LCD_LCDPort__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set LCD_LCDPort__LCD_EN, CYREG_PRT2_LCD_EN
.set LCD_LCDPort__MASK, 0x7F
.set LCD_LCDPort__PORT, 2
.set LCD_LCDPort__PRT, CYREG_PRT2_PRT
.set LCD_LCDPort__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set LCD_LCDPort__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set LCD_LCDPort__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set LCD_LCDPort__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set LCD_LCDPort__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set LCD_LCDPort__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set LCD_LCDPort__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set LCD_LCDPort__PS, CYREG_PRT2_PS
.set LCD_LCDPort__SHIFT, 0
.set LCD_LCDPort__SLW, CYREG_PRT2_SLW

/* ETH_BSPIM */
.set ETH_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB12_13_ACTL
.set ETH_BSPIM_BitCounter_ST__16BIT_STATUS_REG, CYREG_B0_UDB12_13_ST
.set ETH_BSPIM_BitCounter_ST__MASK_REG, CYREG_B0_UDB12_MSK
.set ETH_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB12_MSK_ACTL
.set ETH_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG, CYREG_B0_UDB12_MSK_ACTL
.set ETH_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG, CYREG_B0_UDB12_ACTL
.set ETH_BSPIM_BitCounter_ST__STATUS_CNT_REG, CYREG_B0_UDB12_ST_CTL
.set ETH_BSPIM_BitCounter_ST__STATUS_CONTROL_REG, CYREG_B0_UDB12_ST_CTL
.set ETH_BSPIM_BitCounter_ST__STATUS_REG, CYREG_B0_UDB12_ST
.set ETH_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB12_13_ACTL
.set ETH_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB12_13_CTL
.set ETH_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB12_13_CTL
.set ETH_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB12_13_CTL
.set ETH_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB12_13_CTL
.set ETH_BSPIM_BitCounter__16BIT_MASK_MASK_REG, CYREG_B0_UDB12_13_MSK
.set ETH_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB12_13_MSK
.set ETH_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB12_13_MSK
.set ETH_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB12_13_MSK
.set ETH_BSPIM_BitCounter__CONTROL_AUX_CTL_REG, CYREG_B0_UDB12_ACTL
.set ETH_BSPIM_BitCounter__CONTROL_REG, CYREG_B0_UDB12_CTL
.set ETH_BSPIM_BitCounter__CONTROL_ST_REG, CYREG_B0_UDB12_ST_CTL
.set ETH_BSPIM_BitCounter__COUNT_REG, CYREG_B0_UDB12_CTL
.set ETH_BSPIM_BitCounter__COUNT_ST_REG, CYREG_B0_UDB12_ST_CTL
.set ETH_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB12_MSK_ACTL
.set ETH_BSPIM_BitCounter__PERIOD_REG, CYREG_B0_UDB12_MSK
.set ETH_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB12_MSK_ACTL
.set ETH_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB08_09_ACTL
.set ETH_BSPIM_RxStsReg__16BIT_STATUS_REG, CYREG_B1_UDB08_09_ST
.set ETH_BSPIM_RxStsReg__4__MASK, 0x10
.set ETH_BSPIM_RxStsReg__4__POS, 4
.set ETH_BSPIM_RxStsReg__5__MASK, 0x20
.set ETH_BSPIM_RxStsReg__5__POS, 5
.set ETH_BSPIM_RxStsReg__6__MASK, 0x40
.set ETH_BSPIM_RxStsReg__6__POS, 6
.set ETH_BSPIM_RxStsReg__MASK, 0x70
.set ETH_BSPIM_RxStsReg__MASK_REG, CYREG_B1_UDB08_MSK
.set ETH_BSPIM_RxStsReg__STATUS_AUX_CTL_REG, CYREG_B1_UDB08_ACTL
.set ETH_BSPIM_RxStsReg__STATUS_REG, CYREG_B1_UDB08_ST
.set ETH_BSPIM_TxStsReg__0__MASK, 0x01
.set ETH_BSPIM_TxStsReg__0__POS, 0
.set ETH_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB11_12_ACTL
.set ETH_BSPIM_TxStsReg__16BIT_STATUS_REG, CYREG_B0_UDB11_12_ST
.set ETH_BSPIM_TxStsReg__1__MASK, 0x02
.set ETH_BSPIM_TxStsReg__1__POS, 1
.set ETH_BSPIM_TxStsReg__2__MASK, 0x04
.set ETH_BSPIM_TxStsReg__2__POS, 2
.set ETH_BSPIM_TxStsReg__3__MASK, 0x08
.set ETH_BSPIM_TxStsReg__3__POS, 3
.set ETH_BSPIM_TxStsReg__4__MASK, 0x10
.set ETH_BSPIM_TxStsReg__4__POS, 4
.set ETH_BSPIM_TxStsReg__MASK, 0x1F
.set ETH_BSPIM_TxStsReg__MASK_REG, CYREG_B0_UDB11_MSK
.set ETH_BSPIM_TxStsReg__STATUS_AUX_CTL_REG, CYREG_B0_UDB11_ACTL
.set ETH_BSPIM_TxStsReg__STATUS_REG, CYREG_B0_UDB11_ST
.set ETH_BSPIM_sR8_Dp_u0__16BIT_A0_REG, CYREG_B0_UDB12_13_A0
.set ETH_BSPIM_sR8_Dp_u0__16BIT_A1_REG, CYREG_B0_UDB12_13_A1
.set ETH_BSPIM_sR8_Dp_u0__16BIT_D0_REG, CYREG_B0_UDB12_13_D0
.set ETH_BSPIM_sR8_Dp_u0__16BIT_D1_REG, CYREG_B0_UDB12_13_D1
.set ETH_BSPIM_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB12_13_ACTL
.set ETH_BSPIM_sR8_Dp_u0__16BIT_F0_REG, CYREG_B0_UDB12_13_F0
.set ETH_BSPIM_sR8_Dp_u0__16BIT_F1_REG, CYREG_B0_UDB12_13_F1
.set ETH_BSPIM_sR8_Dp_u0__A0_A1_REG, CYREG_B0_UDB12_A0_A1
.set ETH_BSPIM_sR8_Dp_u0__A0_REG, CYREG_B0_UDB12_A0
.set ETH_BSPIM_sR8_Dp_u0__A1_REG, CYREG_B0_UDB12_A1
.set ETH_BSPIM_sR8_Dp_u0__D0_D1_REG, CYREG_B0_UDB12_D0_D1
.set ETH_BSPIM_sR8_Dp_u0__D0_REG, CYREG_B0_UDB12_D0
.set ETH_BSPIM_sR8_Dp_u0__D1_REG, CYREG_B0_UDB12_D1
.set ETH_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG, CYREG_B0_UDB12_ACTL
.set ETH_BSPIM_sR8_Dp_u0__F0_F1_REG, CYREG_B0_UDB12_F0_F1
.set ETH_BSPIM_sR8_Dp_u0__F0_REG, CYREG_B0_UDB12_F0
.set ETH_BSPIM_sR8_Dp_u0__F1_REG, CYREG_B0_UDB12_F1
.set ETH_BSPIM_sR8_Dp_u0__MSK_DP_AUX_CTL_REG, CYREG_B0_UDB12_MSK_ACTL
.set ETH_BSPIM_sR8_Dp_u0__PER_DP_AUX_CTL_REG, CYREG_B0_UDB12_MSK_ACTL

/* URT_BUART */
.set URT_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set URT_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG, CYREG_B1_UDB09_10_ST
.set URT_BUART_sRX_RxBitCounter_ST__MASK_REG, CYREG_B1_UDB09_MSK
.set URT_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set URT_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set URT_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set URT_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG, CYREG_B1_UDB09_ST_CTL
.set URT_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG, CYREG_B1_UDB09_ST_CTL
.set URT_BUART_sRX_RxBitCounter_ST__STATUS_REG, CYREG_B1_UDB09_ST
.set URT_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set URT_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set URT_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set URT_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set URT_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set URT_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG, CYREG_B1_UDB09_10_MSK
.set URT_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set URT_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB09_10_MSK
.set URT_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set URT_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set URT_BUART_sRX_RxBitCounter__CONTROL_REG, CYREG_B1_UDB09_CTL
.set URT_BUART_sRX_RxBitCounter__CONTROL_ST_REG, CYREG_B1_UDB09_ST_CTL
.set URT_BUART_sRX_RxBitCounter__COUNT_REG, CYREG_B1_UDB09_CTL
.set URT_BUART_sRX_RxBitCounter__COUNT_ST_REG, CYREG_B1_UDB09_ST_CTL
.set URT_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set URT_BUART_sRX_RxBitCounter__PERIOD_REG, CYREG_B1_UDB09_MSK
.set URT_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set URT_BUART_sRX_RxShifter_u0__16BIT_A0_REG, CYREG_B0_UDB10_11_A0
.set URT_BUART_sRX_RxShifter_u0__16BIT_A1_REG, CYREG_B0_UDB10_11_A1
.set URT_BUART_sRX_RxShifter_u0__16BIT_D0_REG, CYREG_B0_UDB10_11_D0
.set URT_BUART_sRX_RxShifter_u0__16BIT_D1_REG, CYREG_B0_UDB10_11_D1
.set URT_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB10_11_ACTL
.set URT_BUART_sRX_RxShifter_u0__16BIT_F0_REG, CYREG_B0_UDB10_11_F0
.set URT_BUART_sRX_RxShifter_u0__16BIT_F1_REG, CYREG_B0_UDB10_11_F1
.set URT_BUART_sRX_RxShifter_u0__A0_A1_REG, CYREG_B0_UDB10_A0_A1
.set URT_BUART_sRX_RxShifter_u0__A0_REG, CYREG_B0_UDB10_A0
.set URT_BUART_sRX_RxShifter_u0__A1_REG, CYREG_B0_UDB10_A1
.set URT_BUART_sRX_RxShifter_u0__D0_D1_REG, CYREG_B0_UDB10_D0_D1
.set URT_BUART_sRX_RxShifter_u0__D0_REG, CYREG_B0_UDB10_D0
.set URT_BUART_sRX_RxShifter_u0__D1_REG, CYREG_B0_UDB10_D1
.set URT_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG, CYREG_B0_UDB10_ACTL
.set URT_BUART_sRX_RxShifter_u0__F0_F1_REG, CYREG_B0_UDB10_F0_F1
.set URT_BUART_sRX_RxShifter_u0__F0_REG, CYREG_B0_UDB10_F0
.set URT_BUART_sRX_RxShifter_u0__F1_REG, CYREG_B0_UDB10_F1
.set URT_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB10_11_ACTL
.set URT_BUART_sRX_RxSts__16BIT_STATUS_REG, CYREG_B1_UDB10_11_ST
.set URT_BUART_sRX_RxSts__3__MASK, 0x08
.set URT_BUART_sRX_RxSts__3__POS, 3
.set URT_BUART_sRX_RxSts__4__MASK, 0x10
.set URT_BUART_sRX_RxSts__4__POS, 4
.set URT_BUART_sRX_RxSts__5__MASK, 0x20
.set URT_BUART_sRX_RxSts__5__POS, 5
.set URT_BUART_sRX_RxSts__MASK, 0x38
.set URT_BUART_sRX_RxSts__MASK_REG, CYREG_B1_UDB10_MSK
.set URT_BUART_sRX_RxSts__MASK_ST_AUX_CTL_REG, CYREG_B1_UDB10_MSK_ACTL
.set URT_BUART_sRX_RxSts__PER_ST_AUX_CTL_REG, CYREG_B1_UDB10_MSK_ACTL
.set URT_BUART_sRX_RxSts__STATUS_AUX_CTL_REG, CYREG_B1_UDB10_ACTL
.set URT_BUART_sRX_RxSts__STATUS_CNT_REG, CYREG_B1_UDB10_ST_CTL
.set URT_BUART_sRX_RxSts__STATUS_CONTROL_REG, CYREG_B1_UDB10_ST_CTL
.set URT_BUART_sRX_RxSts__STATUS_REG, CYREG_B1_UDB10_ST
.set URT_BUART_sTX_TxShifter_u0__16BIT_A0_REG, CYREG_B0_UDB08_09_A0
.set URT_BUART_sTX_TxShifter_u0__16BIT_A1_REG, CYREG_B0_UDB08_09_A1
.set URT_BUART_sTX_TxShifter_u0__16BIT_D0_REG, CYREG_B0_UDB08_09_D0
.set URT_BUART_sTX_TxShifter_u0__16BIT_D1_REG, CYREG_B0_UDB08_09_D1
.set URT_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB08_09_ACTL
.set URT_BUART_sTX_TxShifter_u0__16BIT_F0_REG, CYREG_B0_UDB08_09_F0
.set URT_BUART_sTX_TxShifter_u0__16BIT_F1_REG, CYREG_B0_UDB08_09_F1
.set URT_BUART_sTX_TxShifter_u0__A0_A1_REG, CYREG_B0_UDB08_A0_A1
.set URT_BUART_sTX_TxShifter_u0__A0_REG, CYREG_B0_UDB08_A0
.set URT_BUART_sTX_TxShifter_u0__A1_REG, CYREG_B0_UDB08_A1
.set URT_BUART_sTX_TxShifter_u0__D0_D1_REG, CYREG_B0_UDB08_D0_D1
.set URT_BUART_sTX_TxShifter_u0__D0_REG, CYREG_B0_UDB08_D0
.set URT_BUART_sTX_TxShifter_u0__D1_REG, CYREG_B0_UDB08_D1
.set URT_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG, CYREG_B0_UDB08_ACTL
.set URT_BUART_sTX_TxShifter_u0__F0_F1_REG, CYREG_B0_UDB08_F0_F1
.set URT_BUART_sTX_TxShifter_u0__F0_REG, CYREG_B0_UDB08_F0
.set URT_BUART_sTX_TxShifter_u0__F1_REG, CYREG_B0_UDB08_F1
.set URT_BUART_sTX_TxSts__0__MASK, 0x01
.set URT_BUART_sTX_TxSts__0__POS, 0
.set URT_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB10_11_ACTL
.set URT_BUART_sTX_TxSts__16BIT_STATUS_REG, CYREG_B0_UDB10_11_ST
.set URT_BUART_sTX_TxSts__1__MASK, 0x02
.set URT_BUART_sTX_TxSts__1__POS, 1
.set URT_BUART_sTX_TxSts__2__MASK, 0x04
.set URT_BUART_sTX_TxSts__2__POS, 2
.set URT_BUART_sTX_TxSts__3__MASK, 0x08
.set URT_BUART_sTX_TxSts__3__POS, 3
.set URT_BUART_sTX_TxSts__MASK, 0x0F
.set URT_BUART_sTX_TxSts__MASK_REG, CYREG_B0_UDB10_MSK
.set URT_BUART_sTX_TxSts__STATUS_AUX_CTL_REG, CYREG_B0_UDB10_ACTL
.set URT_BUART_sTX_TxSts__STATUS_REG, CYREG_B0_UDB10_ST
.set URT_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG, CYREG_B1_UDB08_09_A0
.set URT_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG, CYREG_B1_UDB08_09_A1
.set URT_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG, CYREG_B1_UDB08_09_D0
.set URT_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG, CYREG_B1_UDB08_09_D1
.set URT_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB08_09_ACTL
.set URT_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG, CYREG_B1_UDB08_09_F0
.set URT_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG, CYREG_B1_UDB08_09_F1
.set URT_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG, CYREG_B1_UDB08_A0_A1
.set URT_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG, CYREG_B1_UDB08_A0
.set URT_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG, CYREG_B1_UDB08_A1
.set URT_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG, CYREG_B1_UDB08_D0_D1
.set URT_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG, CYREG_B1_UDB08_D0
.set URT_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG, CYREG_B1_UDB08_D1
.set URT_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG, CYREG_B1_UDB08_ACTL
.set URT_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG, CYREG_B1_UDB08_F0_F1
.set URT_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG, CYREG_B1_UDB08_F0
.set URT_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG, CYREG_B1_UDB08_F1

/* LDON_CK */
.set LDON_CK__CFG0, CYREG_CLKDIST_DCFG3_CFG0
.set LDON_CK__CFG1, CYREG_CLKDIST_DCFG3_CFG1
.set LDON_CK__CFG2, CYREG_CLKDIST_DCFG3_CFG2
.set LDON_CK__CFG2_SRC_SEL_MASK, 0x07
.set LDON_CK__INDEX, 0x03
.set LDON_CK__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set LDON_CK__PM_ACT_MSK, 0x08
.set LDON_CK__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set LDON_CK__PM_STBY_MSK, 0x08

/* LDON_CR */
.set LDON_CR_Sync_ctrl_reg__0__MASK, 0x01
.set LDON_CR_Sync_ctrl_reg__0__POS, 0
.set LDON_CR_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB10_11_ACTL
.set LDON_CR_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB10_11_CTL
.set LDON_CR_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB10_11_CTL
.set LDON_CR_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB10_11_CTL
.set LDON_CR_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB10_11_CTL
.set LDON_CR_Sync_ctrl_reg__16BIT_MASK_MASK_REG, CYREG_B1_UDB10_11_MSK
.set LDON_CR_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB10_11_MSK
.set LDON_CR_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB10_11_MSK
.set LDON_CR_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB10_11_MSK
.set LDON_CR_Sync_ctrl_reg__1__MASK, 0x02
.set LDON_CR_Sync_ctrl_reg__1__POS, 1
.set LDON_CR_Sync_ctrl_reg__CONTROL_AUX_CTL_REG, CYREG_B1_UDB10_ACTL
.set LDON_CR_Sync_ctrl_reg__CONTROL_REG, CYREG_B1_UDB10_CTL
.set LDON_CR_Sync_ctrl_reg__CONTROL_ST_REG, CYREG_B1_UDB10_ST_CTL
.set LDON_CR_Sync_ctrl_reg__COUNT_REG, CYREG_B1_UDB10_CTL
.set LDON_CR_Sync_ctrl_reg__COUNT_ST_REG, CYREG_B1_UDB10_ST_CTL
.set LDON_CR_Sync_ctrl_reg__MASK, 0x03
.set LDON_CR_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB10_MSK_ACTL
.set LDON_CR_Sync_ctrl_reg__PERIOD_REG, CYREG_B1_UDB10_MSK
.set LDON_CR_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB10_MSK_ACTL

/* DMA_RX */
.set DMA_RX__DRQ_CTL, CYREG_IDMUX_DRQ_CTL0
.set DMA_RX__DRQ_NUMBER, 0
.set DMA_RX__NUMBEROF_TDS, 0
.set DMA_RX__PRIORITY, 2
.set DMA_RX__TERMIN_EN, 0
.set DMA_RX__TERMIN_SEL, 0
.set DMA_RX__TERMOUT0_EN, 0
.set DMA_RX__TERMOUT0_SEL, 0
.set DMA_RX__TERMOUT1_EN, 0
.set DMA_RX__TERMOUT1_SEL, 0

/* DMA_TX */
.set DMA_TX__DRQ_CTL, CYREG_IDMUX_DRQ_CTL0
.set DMA_TX__DRQ_NUMBER, 1
.set DMA_TX__NUMBEROF_TDS, 0
.set DMA_TX__PRIORITY, 2
.set DMA_TX__TERMIN_EN, 0
.set DMA_TX__TERMIN_SEL, 0
.set DMA_TX__TERMOUT0_EN, 0
.set DMA_TX__TERMOUT0_SEL, 0
.set DMA_TX__TERMOUT1_EN, 0
.set DMA_TX__TERMOUT1_SEL, 0

/* EINT */
.set EINT__0__MASK, 0x04
.set EINT__0__PC, CYREG_PRT6_PC2
.set EINT__0__PORT, 6
.set EINT__0__SHIFT, 2
.set EINT__AG, CYREG_PRT6_AG
.set EINT__AMUX, CYREG_PRT6_AMUX
.set EINT__BIE, CYREG_PRT6_BIE
.set EINT__BIT_MASK, CYREG_PRT6_BIT_MASK
.set EINT__BYP, CYREG_PRT6_BYP
.set EINT__CTL, CYREG_PRT6_CTL
.set EINT__DM0, CYREG_PRT6_DM0
.set EINT__DM1, CYREG_PRT6_DM1
.set EINT__DM2, CYREG_PRT6_DM2
.set EINT__DR, CYREG_PRT6_DR
.set EINT__INP_DIS, CYREG_PRT6_INP_DIS
.set EINT__INTSTAT, CYREG_PICU6_INTSTAT
.set EINT__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set EINT__LCD_EN, CYREG_PRT6_LCD_EN
.set EINT__MASK, 0x04
.set EINT__PORT, 6
.set EINT__PRT, CYREG_PRT6_PRT
.set EINT__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set EINT__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set EINT__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set EINT__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set EINT__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set EINT__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set EINT__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set EINT__PS, CYREG_PRT6_PS
.set EINT__SHIFT, 2
.set EINT__SLW, CYREG_PRT6_SLW
.set EINT__SNAP, CYREG_PICU6_SNAP

/* LDON */
.set LDON__0__MASK, 0x80
.set LDON__0__PC, CYREG_PRT12_PC7
.set LDON__0__PORT, 12
.set LDON__0__SHIFT, 7
.set LDON__AG, CYREG_PRT12_AG
.set LDON__BIE, CYREG_PRT12_BIE
.set LDON__BIT_MASK, CYREG_PRT12_BIT_MASK
.set LDON__BYP, CYREG_PRT12_BYP
.set LDON__DM0, CYREG_PRT12_DM0
.set LDON__DM1, CYREG_PRT12_DM1
.set LDON__DM2, CYREG_PRT12_DM2
.set LDON__DR, CYREG_PRT12_DR
.set LDON__INP_DIS, CYREG_PRT12_INP_DIS
.set LDON__MASK, 0x80
.set LDON__PORT, 12
.set LDON__PRT, CYREG_PRT12_PRT
.set LDON__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set LDON__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set LDON__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set LDON__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set LDON__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set LDON__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set LDON__PS, CYREG_PRT12_PS
.set LDON__SHIFT, 7
.set LDON__SIO_CFG, CYREG_PRT12_SIO_CFG
.set LDON__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set LDON__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set LDON__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set LDON__SLW, CYREG_PRT12_SLW

/* MISO */
.set MISO__0__MASK, 0x01
.set MISO__0__PC, CYREG_PRT6_PC0
.set MISO__0__PORT, 6
.set MISO__0__SHIFT, 0
.set MISO__AG, CYREG_PRT6_AG
.set MISO__AMUX, CYREG_PRT6_AMUX
.set MISO__BIE, CYREG_PRT6_BIE
.set MISO__BIT_MASK, CYREG_PRT6_BIT_MASK
.set MISO__BYP, CYREG_PRT6_BYP
.set MISO__CTL, CYREG_PRT6_CTL
.set MISO__DM0, CYREG_PRT6_DM0
.set MISO__DM1, CYREG_PRT6_DM1
.set MISO__DM2, CYREG_PRT6_DM2
.set MISO__DR, CYREG_PRT6_DR
.set MISO__INP_DIS, CYREG_PRT6_INP_DIS
.set MISO__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set MISO__LCD_EN, CYREG_PRT6_LCD_EN
.set MISO__MASK, 0x01
.set MISO__PORT, 6
.set MISO__PRT, CYREG_PRT6_PRT
.set MISO__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set MISO__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set MISO__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set MISO__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set MISO__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set MISO__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set MISO__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set MISO__PS, CYREG_PRT6_PS
.set MISO__SHIFT, 0
.set MISO__SLW, CYREG_PRT6_SLW

/* MOSI */
.set MOSI__0__MASK, 0x40
.set MOSI__0__PC, CYREG_PRT6_PC6
.set MOSI__0__PORT, 6
.set MOSI__0__SHIFT, 6
.set MOSI__AG, CYREG_PRT6_AG
.set MOSI__AMUX, CYREG_PRT6_AMUX
.set MOSI__BIE, CYREG_PRT6_BIE
.set MOSI__BIT_MASK, CYREG_PRT6_BIT_MASK
.set MOSI__BYP, CYREG_PRT6_BYP
.set MOSI__CTL, CYREG_PRT6_CTL
.set MOSI__DM0, CYREG_PRT6_DM0
.set MOSI__DM1, CYREG_PRT6_DM1
.set MOSI__DM2, CYREG_PRT6_DM2
.set MOSI__DR, CYREG_PRT6_DR
.set MOSI__INP_DIS, CYREG_PRT6_INP_DIS
.set MOSI__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set MOSI__LCD_EN, CYREG_PRT6_LCD_EN
.set MOSI__MASK, 0x40
.set MOSI__PORT, 6
.set MOSI__PRT, CYREG_PRT6_PRT
.set MOSI__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set MOSI__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set MOSI__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set MOSI__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set MOSI__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set MOSI__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set MOSI__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set MOSI__PS, CYREG_PRT6_PS
.set MOSI__SHIFT, 6
.set MOSI__SLW, CYREG_PRT6_SLW

/* SCLK */
.set SCLK__0__MASK, 0x02
.set SCLK__0__PC, CYREG_PRT6_PC1
.set SCLK__0__PORT, 6
.set SCLK__0__SHIFT, 1
.set SCLK__AG, CYREG_PRT6_AG
.set SCLK__AMUX, CYREG_PRT6_AMUX
.set SCLK__BIE, CYREG_PRT6_BIE
.set SCLK__BIT_MASK, CYREG_PRT6_BIT_MASK
.set SCLK__BYP, CYREG_PRT6_BYP
.set SCLK__CTL, CYREG_PRT6_CTL
.set SCLK__DM0, CYREG_PRT6_DM0
.set SCLK__DM1, CYREG_PRT6_DM1
.set SCLK__DM2, CYREG_PRT6_DM2
.set SCLK__DR, CYREG_PRT6_DR
.set SCLK__INP_DIS, CYREG_PRT6_INP_DIS
.set SCLK__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set SCLK__LCD_EN, CYREG_PRT6_LCD_EN
.set SCLK__MASK, 0x02
.set SCLK__PORT, 6
.set SCLK__PRT, CYREG_PRT6_PRT
.set SCLK__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set SCLK__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set SCLK__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set SCLK__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set SCLK__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set SCLK__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set SCLK__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set SCLK__PS, CYREG_PRT6_PS
.set SCLK__SHIFT, 1
.set SCLK__SLW, CYREG_PRT6_SLW

/* TEST */
.set TEST__0__MASK, 0x08
.set TEST__0__PC, CYREG_PRT6_PC3
.set TEST__0__PORT, 6
.set TEST__0__SHIFT, 3
.set TEST__AG, CYREG_PRT6_AG
.set TEST__AMUX, CYREG_PRT6_AMUX
.set TEST__BIE, CYREG_PRT6_BIE
.set TEST__BIT_MASK, CYREG_PRT6_BIT_MASK
.set TEST__BYP, CYREG_PRT6_BYP
.set TEST__CTL, CYREG_PRT6_CTL
.set TEST__DM0, CYREG_PRT6_DM0
.set TEST__DM1, CYREG_PRT6_DM1
.set TEST__DM2, CYREG_PRT6_DM2
.set TEST__DR, CYREG_PRT6_DR
.set TEST__INP_DIS, CYREG_PRT6_INP_DIS
.set TEST__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set TEST__LCD_EN, CYREG_PRT6_LCD_EN
.set TEST__MASK, 0x08
.set TEST__PORT, 6
.set TEST__PRT, CYREG_PRT6_PRT
.set TEST__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set TEST__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set TEST__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set TEST__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set TEST__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set TEST__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set TEST__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set TEST__PS, CYREG_PRT6_PS
.set TEST__SHIFT, 3
.set TEST__SLW, CYREG_PRT6_SLW

/* ECS */
.set ECS__0__MASK, 0x80
.set ECS__0__PC, CYREG_PRT6_PC7
.set ECS__0__PORT, 6
.set ECS__0__SHIFT, 7
.set ECS__AG, CYREG_PRT6_AG
.set ECS__AMUX, CYREG_PRT6_AMUX
.set ECS__BIE, CYREG_PRT6_BIE
.set ECS__BIT_MASK, CYREG_PRT6_BIT_MASK
.set ECS__BYP, CYREG_PRT6_BYP
.set ECS__CTL, CYREG_PRT6_CTL
.set ECS__DM0, CYREG_PRT6_DM0
.set ECS__DM1, CYREG_PRT6_DM1
.set ECS__DM2, CYREG_PRT6_DM2
.set ECS__DR, CYREG_PRT6_DR
.set ECS__INP_DIS, CYREG_PRT6_INP_DIS
.set ECS__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set ECS__LCD_EN, CYREG_PRT6_LCD_EN
.set ECS__MASK, 0x80
.set ECS__PORT, 6
.set ECS__PRT, CYREG_PRT6_PRT
.set ECS__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set ECS__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set ECS__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set ECS__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set ECS__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set ECS__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set ECS__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set ECS__PS, CYREG_PRT6_PS
.set ECS__SHIFT, 7
.set ECS__SLW, CYREG_PRT6_SLW

/* ETC */
.set ETC__CFG0, CYREG_CLKDIST_DCFG2_CFG0
.set ETC__CFG1, CYREG_CLKDIST_DCFG2_CFG1
.set ETC__CFG2, CYREG_CLKDIST_DCFG2_CFG2
.set ETC__CFG2_SRC_SEL_MASK, 0x07
.set ETC__INDEX, 0x02
.set ETC__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set ETC__PM_ACT_MSK, 0x04
.set ETC__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set ETC__PM_STBY_MSK, 0x04

/* ETE */
.set ETE__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ETE__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ETE__INTC_MASK, 0x400
.set ETE__INTC_NUMBER, 10
.set ETE__INTC_PRIOR_NUM, 7
.set ETE__INTC_PRIOR_REG, CYREG_NVIC_PRI_10
.set ETE__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ETE__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* ETW */
.set ETW__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ETW__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ETW__INTC_MASK, 0x01
.set ETW__INTC_NUMBER, 0
.set ETW__INTC_PRIOR_NUM, 6
.set ETW__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set ETW__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ETW__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* URX */
.set URX__0__MASK, 0x10
.set URX__0__PC, CYREG_PRT1_PC4
.set URX__0__PORT, 1
.set URX__0__SHIFT, 4
.set URX__AG, CYREG_PRT1_AG
.set URX__AMUX, CYREG_PRT1_AMUX
.set URX__BIE, CYREG_PRT1_BIE
.set URX__BIT_MASK, CYREG_PRT1_BIT_MASK
.set URX__BYP, CYREG_PRT1_BYP
.set URX__CTL, CYREG_PRT1_CTL
.set URX__DM0, CYREG_PRT1_DM0
.set URX__DM1, CYREG_PRT1_DM1
.set URX__DM2, CYREG_PRT1_DM2
.set URX__DR, CYREG_PRT1_DR
.set URX__INP_DIS, CYREG_PRT1_INP_DIS
.set URX__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set URX__LCD_EN, CYREG_PRT1_LCD_EN
.set URX__MASK, 0x10
.set URX__PORT, 1
.set URX__PRT, CYREG_PRT1_PRT
.set URX__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set URX__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set URX__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set URX__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set URX__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set URX__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set URX__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set URX__PS, CYREG_PRT1_PS
.set URX__SHIFT, 4
.set URX__SLW, CYREG_PRT1_SLW

/* UTX */
.set UTX__0__MASK, 0x20
.set UTX__0__PC, CYREG_PRT1_PC5
.set UTX__0__PORT, 1
.set UTX__0__SHIFT, 5
.set UTX__AG, CYREG_PRT1_AG
.set UTX__AMUX, CYREG_PRT1_AMUX
.set UTX__BIE, CYREG_PRT1_BIE
.set UTX__BIT_MASK, CYREG_PRT1_BIT_MASK
.set UTX__BYP, CYREG_PRT1_BYP
.set UTX__CTL, CYREG_PRT1_CTL
.set UTX__DM0, CYREG_PRT1_DM0
.set UTX__DM1, CYREG_PRT1_DM1
.set UTX__DM2, CYREG_PRT1_DM2
.set UTX__DR, CYREG_PRT1_DR
.set UTX__INP_DIS, CYREG_PRT1_INP_DIS
.set UTX__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set UTX__LCD_EN, CYREG_PRT1_LCD_EN
.set UTX__MASK, 0x20
.set UTX__PORT, 1
.set UTX__PRT, CYREG_PRT1_PRT
.set UTX__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set UTX__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set UTX__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set UTX__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set UTX__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set UTX__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set UTX__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set UTX__PS, CYREG_PRT1_PS
.set UTX__SHIFT, 5
.set UTX__SLW, CYREG_PRT1_SLW

/* HB */
.set HB__0__MASK, 0x80
.set HB__0__PC, CYREG_PRT2_PC7
.set HB__0__PORT, 2
.set HB__0__SHIFT, 7
.set HB__AG, CYREG_PRT2_AG
.set HB__AMUX, CYREG_PRT2_AMUX
.set HB__BIE, CYREG_PRT2_BIE
.set HB__BIT_MASK, CYREG_PRT2_BIT_MASK
.set HB__BYP, CYREG_PRT2_BYP
.set HB__CTL, CYREG_PRT2_CTL
.set HB__DM0, CYREG_PRT2_DM0
.set HB__DM1, CYREG_PRT2_DM1
.set HB__DM2, CYREG_PRT2_DM2
.set HB__DR, CYREG_PRT2_DR
.set HB__INP_DIS, CYREG_PRT2_INP_DIS
.set HB__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set HB__LCD_EN, CYREG_PRT2_LCD_EN
.set HB__MASK, 0x80
.set HB__PORT, 2
.set HB__PRT, CYREG_PRT2_PRT
.set HB__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set HB__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set HB__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set HB__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set HB__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set HB__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set HB__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set HB__PS, CYREG_PRT2_PS
.set HB__SHIFT, 7
.set HB__SLW, CYREG_PRT2_SLW

/* Miscellaneous */
/* -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release */
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_MEMBER_5B, 4
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_DIE_PSOC5LP, 4
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_DIE_PSOC5LP
.set BCLK__BUS_CLK__HZ, 44000000
.set BCLK__BUS_CLK__KHZ, 44000
.set BCLK__BUS_CLK__MHZ, 44
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 3
.set CYDEV_CHIP_DIE_PSOC4A, 2
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E123069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 2
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REV_PSOC5LP_PRODUCTION
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_REQXRES, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x1000
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000001
.set CYDEV_PROJ_TYPE, 2
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x4000
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 3300
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0, 5
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1, 5
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 3300
.set CYDEV_VIO3, 5
.set CYDEV_VIO3_MV, 5000
.set DMA_CHANNELS_USED__MASK0, 0x00000003
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif