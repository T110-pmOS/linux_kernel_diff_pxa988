#ifndef __D2199_DBG_H__
#define __D2199_DBG_H__

#define MAX_D2199_REGS	256

struct reg_blk_info {
	char *blk_name;		/* register block name */
	u8 start_addr;		/* block start address in D2199 */
	int num_regs;		/* number of registers */
};

struct reg_details {
	char *reg_name;	/* Register name */
	int valid;	/* is this a valid register */
};

struct reg_blk_info status_blk = {
	.blk_name	= "Status",
	.start_addr	= D2199_STATUS_A_REG,
	.num_regs	= 17,
};

struct reg_blk_info gpio_blk = {
	.blk_name	= "GPIO",
	.start_addr	= D2199_GPIO_0_1_RESERVED_REG,
	.num_regs	= 3,
};

struct reg_blk_info sequencer_blk = {
	.blk_name	= "Sequencer",
	.start_addr	= D2199_ID_0_1_REG,
	.num_regs	= 15,
};

struct reg_blk_info supplies_blk = {
	.blk_name	= "Supplies",
	.start_addr	= D2199_BUCK_A_REG,
	.num_regs	= 38,
};

struct reg_blk_info mode_control_blk = {
	.blk_name	= "Mode Control",
	.start_addr	= D2199_LDO1_MCTL_REG,
	.num_regs	= 32,
};

struct reg_blk_info control_blk = {
	.blk_name	= "Control",
	.start_addr	= D2199_WAIT_CONT_REG,
	.num_regs	= 6,
};

struct reg_blk_info adc_blk = {
	.blk_name	= "ADC",
	.start_addr	= D2199_ADC_MAN_REG,
	.num_regs	= 26,
};

struct reg_blk_info rtc_blk = {
	.blk_name	= "RTC",
	.start_addr	= D2199_COUNT_S_REG,
	.num_regs	= 12,
};

struct reg_blk_info otp_config_blk = {
	.blk_name	= "OTP Config",
	.start_addr	= D2199_CHIP_ID_REG,
	.num_regs	= 10,
};

struct reg_blk_info audio_blk = {
	.blk_name	= "Audio",
	.start_addr	= D2199_AUDIO_REG_DFLT_0_REG,
	.num_regs	= 8,
};

struct reg_blk_info others_blk = {
	.blk_name	= "Others",
	.start_addr	= D2199_BUCK2_5_CONF1_REG,
	.num_regs	= 1,
};

struct reg_blk_info all_blk = {
	.blk_name	= "All",
	.start_addr	= D2199_STATUS_A_REG,
	.num_regs	= 225,
};

#define D2199_REG_INIT(_reg_addr, _name)	\
	[_reg_addr] = {				\
		.reg_name = _name,		\
		.valid = 1,			\
	}

struct reg_details d2199_reg_map[MAX_D2199_REGS] = {
	/* Status registers */
	D2199_REG_INIT(D2199_STATUS_A_REG,	"STATUS_A"),
	D2199_REG_INIT(D2199_STATUS_B_REG,	"STATUS_B"),
	D2199_REG_INIT(D2199_STATUS_C_REG,	"STATUS_C"),
	D2199_REG_INIT(D2199_EVENT_A_REG,	"EVENT_A"),
	D2199_REG_INIT(D2199_EVENT_B_REG,	"EVENT_B"),
	D2199_REG_INIT(D2199_EVENT_C_REG,	"EVENT_C"),
	D2199_REG_INIT(D2199_FAULT_LOG_REG,	"FAULT_LOG"),
	D2199_REG_INIT(D2199_IRQ_MASK_A_REG,	"IRQ_MASK_A"),
	D2199_REG_INIT(D2199_IRQ_MASK_B_REG,	"IRQ_MASK_B"),
	D2199_REG_INIT(D2199_IRQ_MASK_C_REG,	"IRQ_MASK_C"),
	D2199_REG_INIT(D2199_CONTROL_A_REG,	"CONTROL_A"),
	D2199_REG_INIT(D2199_CONTROL_B_REG,	"CONTROL_B"),
	D2199_REG_INIT(D2199_CONTROL_C_REG,	"CONTROL_C"),
	D2199_REG_INIT(D2199_CONTROL_D_REG,	"CONTROL_D"),
	D2199_REG_INIT(D2199_PD_DIS_REG,	"PD_DIS"),
	D2199_REG_INIT(D2199_INTERFACE_REG,	"INTERFACE"),
	D2199_REG_INIT(D2199_RESET_REG,		"RESET"),
	/* GPIO registers */
	D2199_REG_INIT(D2199_GPIO_0_1_RESERVED_REG,	"Reserved"),
	D2199_REG_INIT(D2199_GPIO_2_3_GPIO_TA_REG,	"GPIO_TA"),
	D2199_REG_INIT(D2199_GPIO_NJIG_ON_REG,		"GPIO_nJIG_ON"),
	/* Sequencer */
	D2199_REG_INIT(D2199_ID_0_1_REG,	"ID_0_1"),
	D2199_REG_INIT(D2199_ID_2_3_REG,	"ID_2_3"),
	D2199_REG_INIT(D2199_ID_4_5_REG,	"ID_4_5"),
	D2199_REG_INIT(D2199_ID_6_7_REG,	"ID_6_7"),
	D2199_REG_INIT(D2199_ID_8_9_REG,	"ID_8_9"),
	D2199_REG_INIT(D2199_ID_10_11_REG,	"ID_10_11"),
	D2199_REG_INIT(D2199_ID_12_13_REG,	"ID_12_13"),
	D2199_REG_INIT(D2199_ID_14_15_REG,	"ID_14_15"),
	D2199_REG_INIT(D2199_ID_16_17_REG,	"ID_16_17"),
	D2199_REG_INIT(D2199_ID_18_19_REG,	"ID_18_19"),
	D2199_REG_INIT(D2199_ID_20_21_RESERVED_REG,	"Reserved"),
	D2199_REG_INIT(D2199_SEQ_STATUS_REG,	"SEQ_STATUS"),
	D2199_REG_INIT(D2199_SEQ_A_REG,		"SEQ_A"),
	D2199_REG_INIT(D2199_SEQ_B_REG,		"SEQ_B"),
	D2199_REG_INIT(D2199_SEQ_TIMER_REG,	"SEQ_TIMER"),
	/* Supplies */
	D2199_REG_INIT(D2199_BUCK_A_REG,	"BUCK_A"),
	D2199_REG_INIT(D2199_BUCK_B_REG,	"BUCK_B"),
	D2199_REG_INIT(D2199_BUCK_C_REG,	"BUCK_C"),
	D2199_REG_INIT(D2199_BUCK_D_REG,	"BUCK_D"),
	D2199_REG_INIT(D2199_BUCK2PH_BUCK1_REG,	"BUCK1"),
	D2199_REG_INIT(D2199_BUCKCORE_BUCK2_REG,	"BUCK2"),
	D2199_REG_INIT(D2199_BUCKPRO_BUCK3_REG,	"BUCK3"),
	D2199_REG_INIT(D2199_BUCKMEM_BUCK4_REG,	"BUCK4"),
	D2199_REG_INIT(D2199_BUCKPERI_BUCK5_REG,	"BUCK5"),
	D2199_REG_INIT(D2199_BUCKRF_THR_REG,	"BUCKRF_THR"),
	D2199_REG_INIT(D2199_BUCKRF_CONF_REG,	"BUCKRF_CONF"),
	D2199_REG_INIT(D2199_LDO1_REG,		"LDO1"),
	D2199_REG_INIT(D2199_LDO2_REG,		"LDO2"),
	D2199_REG_INIT(D2199_LDO3_REG,		"LDO3"),
	D2199_REG_INIT(D2199_LDO4_REG,		"LDO4"),
	D2199_REG_INIT(D2199_LDO5_REG,		"LDO5"),
	D2199_REG_INIT(D2199_LDO6_REG,		"LDO6"),
	D2199_REG_INIT(D2199_LDO7_REG,		"LDO7"),
	D2199_REG_INIT(D2199_LDO8_REG,		"LDO8"),
	D2199_REG_INIT(D2199_LDO9_REG,		"LDO9"),
	D2199_REG_INIT(D2199_LDO10_REG,		"LDO10"),
	D2199_REG_INIT(D2199_LDO11_REG,		"LDO11"),
	D2199_REG_INIT(D2199_LDO12_REG,		"LDO12"),
	D2199_REG_INIT(D2199_PULLDOWN_A_REG,	"PULLDOWN_A"),
	D2199_REG_INIT(D2199_PULLDOWN_B_REG,	"PULLDOWN_B"),
	D2199_REG_INIT(D2199_PULLDOWN_C_REG,	"PULLDOWN_C"),
	D2199_REG_INIT(D2199_PULLDOWN_D_REG,	"PULLDOWN_D"),
	D2199_REG_INIT(D2199_LDO13_REG,		"LDO13"),
	D2199_REG_INIT(D2199_LDO14_REG,		"LDO14"),
	D2199_REG_INIT(D2199_LDO15_REG,		"LDO15"),
	D2199_REG_INIT(D2199_LDO16_REG,		"LDO16"),
	D2199_REG_INIT(D2199_LDO17_REG,		"LDO17"),
	D2199_REG_INIT(D2199_LDO18_LDO_VRFANA_REG,	"LDO18_LDO_VRFANA"),
	D2199_REG_INIT(D2199_LDO19_LDO_19_REG,		"LDO19_LDO_19"),
	D2199_REG_INIT(D2199_LDO20_LDO_20_REG,		"LDO20_LDO_20"),
	D2199_REG_INIT(D2199_LDO21_LDO_AUD1_REG,	"LDO21_LDO_AUD1"),
	D2199_REG_INIT(D2199_LDO22_LDO_AUD2_REG,	"LDO22_LDO_AUD2"),
	D2199_REG_INIT(D2199_SUPPLY_REG,		"SUPPLY"),
	/* Mode Control */
	D2199_REG_INIT(D2199_LDO1_MCTL_REG,	"LDO1_MCTL"),
	D2199_REG_INIT(D2199_LDO2_MCTL_REG,	"LDO2_MCTL"),
	D2199_REG_INIT(D2199_LDO3_MCTL_REG,	"LDO3_MCTL"),
	D2199_REG_INIT(D2199_LDO4_MCTL_REG,	"LDO4_MCTL"),
	D2199_REG_INIT(D2199_LDO5_MCTL_REG,	"LDO5_MCTL"),
	D2199_REG_INIT(D2199_LDO6_MCTL_REG,	"LDO6_MCTL"),
	D2199_REG_INIT(D2199_LDO7_MCTL_REG,	"LDO7_MCTL"),
	D2199_REG_INIT(D2199_LDO8_MCTL_REG,	"LDO8_MCTL"),
	D2199_REG_INIT(D2199_LDO9_MCTL_REG,	"LDO9_MCTL"),
	D2199_REG_INIT(D2199_LDO10_MCTL_REG,	"LDO10_MCTL"),
	D2199_REG_INIT(D2199_LDO11_MCTL_REG,	"LDO11_MCTL"),
	D2199_REG_INIT(D2199_LDO12_MCTL_REG,	"LDO12_MCTL"),
	D2199_REG_INIT(D2199_LDO13_MCTL_REG,	"LDO13_MCTL"),
	D2199_REG_INIT(D2199_LDO14_MCTL_REG,	"LDO14_MCTL"),
	D2199_REG_INIT(D2199_LDO15_MCTL_REG,	"LDO15_MCTL"),
	D2199_REG_INIT(D2199_LDO16_MCTL_REG,	"LDO16_MCTL"),
	D2199_REG_INIT(D2199_LDO17_MCTL_REG,	"LDO17_MCTL"),
	D2199_REG_INIT(D2199_LDO18_MCTL_REG,	"LDO_VRFANA_MCTL"),
	D2199_REG_INIT(D2199_LDO19_MCTL_REG,	"LDO_19_MCTL"),
	D2199_REG_INIT(D2199_LDO20_MCTL_REG,	"LDO_20_MCTL"),
	D2199_REG_INIT(D2199_LDO_AUD1_MCTL_REG,	"LDO_AUD1_MCTL"),
	D2199_REG_INIT(D2199_LDO_AUD2_MCTL_REG,	"LDO_AUD2_MCTL"),
	D2199_REG_INIT(D2199_BUCK1_MCTL_REG,	"BUCK1_MCTL"),
	D2199_REG_INIT(D2199_BUCK2_MCTL_REG,	"BUCK2_MCTL"),
	D2199_REG_INIT(D2199_BUCK3_MCTL_REG,	"BUCK3_MCTL"),
	D2199_REG_INIT(D2199_BUCK4_MCTL_REG,	"BUCK4_MCTL"),
	D2199_REG_INIT(D2199_BUCK5_MCTL_REG,	"BUCK5_MCTL"),
	D2199_REG_INIT(D2199_BUCK_RF_MCTL_REG,	"BUCK_RF_MCTL"),
	D2199_REG_INIT(D2199_GPADC_MCTL_REG,	"GPADC_MCTL"),
	D2199_REG_INIT(D2199_MISC_MCTL_REG,	"MISC_MCTL"),
	D2199_REG_INIT(D2199_VBUCK1_MCTL_RET_REG,	"VBUCK1_MCTL_RET"),
	D2199_REG_INIT(D2199_VBUCK4_MCTL_RET_REG,	"VBUCK4_MCTL_RET"),
	/* Control */
	D2199_REG_INIT(D2199_WAIT_CONT_REG,		"WAIT_CONT"),
	D2199_REG_INIT(D2199_ONKEY_CONT1_REG,		"ONKEY_CONT1"),
	D2199_REG_INIT(D2199_OUT2_32K_ONKEY_CONT_REG,	"OUT2_32K_ONKEY_CONT"),
	D2199_REG_INIT(D2199_POWER_CONT_REG,		"POWER_CONT"),
	D2199_REG_INIT(D2199_VDDFAULT_REG,		"VDDFAULT"),
	D2199_REG_INIT(D2199_BBAT_CONT_REG,		"BBAT_CONT"),
	/* ADC */
	D2199_REG_INIT(D2199_ADC_MAN_REG,		"ADC_MAN"),
	D2199_REG_INIT(D2199_ADC_CONT_REG,		"ADC_CONT"),
	D2199_REG_INIT(D2199_ADC_CONT2_REG,		"ADC_CONT2"),
	D2199_REG_INIT(D2199_ADC_RES_L_REG,		"ADC_RES_L"),
	D2199_REG_INIT(D2199_ADC_RES_H_REG,		"ADC_RES_H"),
	D2199_REG_INIT(D2199_VDD_RES_VBAT_RES_REG,	"VBAT_RES"),
	D2199_REG_INIT(D2199_VDD_MON_VDDOUT_MON_REG,	"VDDOUT_MON"),
	D2199_REG_INIT(D2199_TBAT1_RES_TEMP1_RES_REG,	"TEMP1_RES"),
	D2199_REG_INIT(D2199_TEMP1_HIGHP_REG,		"TEMP1_HIGHP"),
	D2199_REG_INIT(D2199_TEMP1_HIGHN_REG,		"TEMP1_HIGHN"),
	D2199_REG_INIT(D2199_TBAT1_LOW_TEMP1_LOW_REG,	"TEMP1_LOW"),
	D2199_REG_INIT(D2199_T_OFFSET_REG,		"T_OFFSET"),
	D2199_REG_INIT(D2199_ADCIN4_RES_VF_RES_REG,	"VF_RES"),
	D2199_REG_INIT(D2199_AUTO4_HIGH_VF_HIGH_REG,	"VF_HIGH"),
	D2199_REG_INIT(D2199_AUTO4_LOW_VF_LOW_REG,	"VF_LOW"),
	D2199_REG_INIT(D2199_ADCIN5_RES_AIN_RES_REG,	"AIN_RES"),
	D2199_REG_INIT(0x80,	"Reserved"),
	D2199_REG_INIT(0x81,	"Reserved"),
	D2199_REG_INIT(D2199_TBAT2_RES_TEMP2_RES_REG,	"TEMP2_RES"),
	D2199_REG_INIT(D2199_TEMP2_HIGHP_REG,		"TEMP2_HIGHP"),
	D2199_REG_INIT(D2199_TEMP2_HIGHN_REG,		"TEMP2_HIGHN"),
	D2199_REG_INIT(D2199_TBAT2_LOW_TEMP2_LOW_REG,	"TEMP2_LOW"),
	D2199_REG_INIT(D2199_TJUNC_RES_REG,		"TJUNC_RES"),
	D2199_REG_INIT(D2199_ADC_RES_AUTO1_REG,		"ADC_RES_AUTO1"),
	D2199_REG_INIT(D2199_ADC_RES_AUTO2_REG,		"ADC_RES_AUTO2"),
	D2199_REG_INIT(D2199_ADC_RES_AUTO3_REG,		"ADC_RES_AUTO3"),
	/* RTC */
	D2199_REG_INIT(D2199_COUNT_S_REG,	"COUNT_S"),
	D2199_REG_INIT(D2199_COUNT_MI_REG,	"COUNT_MI"),
	D2199_REG_INIT(D2199_COUNT_H_REG,	"COUNT_H"),
	D2199_REG_INIT(D2199_COUNT_D_REG,	"COUNT_D"),
	D2199_REG_INIT(D2199_COUNT_MO_REG,	"COUNT_MO"),
	D2199_REG_INIT(D2199_COUNT_Y_REG,	"COUNT_Y"),
	D2199_REG_INIT(D2199_ALARM_S_REG,	"ALARM_S"),
	D2199_REG_INIT(D2199_ALARM_MI_REG,	"ALARM_MI"),
	D2199_REG_INIT(D2199_ALARM_H_REG,	"ALARM_H"),
	D2199_REG_INIT(D2199_ALARM_D_REG,	"ALARM_D"),
	D2199_REG_INIT(D2199_ALARM_MO_REG,	"ALARM_MO"),
	D2199_REG_INIT(D2199_ALARM_Y_REG,	"ALARM_Y"),
	/* OTP Config */
	D2199_REG_INIT(D2199_CHIP_ID_REG,	"CHIP_ID"),
	D2199_REG_INIT(D2199_CONFIG_ID_REG,	"CONFIG_ID"),
	D2199_REG_INIT(D2199_OTP_CONT_REG,	"OTP_CONT"),
	D2199_REG_INIT(D2199_OSC_TRIM_REG,	"OSC_TRIM"),
	D2199_REG_INIT(D2199_GP_ID_0_REG,	"GP_ID_0"),
	D2199_REG_INIT(D2199_GP_ID_1_REG,	"GP_ID_1"),
	D2199_REG_INIT(D2199_GP_ID_2_REG,	"GP_ID_2"),
	D2199_REG_INIT(D2199_GP_ID_3_REG,	"GP_ID_3"),
	D2199_REG_INIT(D2199_GP_ID_4_REG,	"GP_ID_4"),
	D2199_REG_INIT(D2199_GP_ID_5_REG,	"GP_ID_5"),
	/* Audio */
	D2199_REG_INIT(D2199_AUDIO_REG_DFLT_0_REG,	"AUDIO_REG_DFLT_0"),
	D2199_REG_INIT(D2199_AUDIO_REG_DFLT_1_REG,	"AUDIO_REG_DFLT_1"),
	D2199_REG_INIT(D2199_AUDIO_REG_DFLT_2_REG,	"AUDIO_REG_DFLT_2"),
	D2199_REG_INIT(D2199_AUDIO_REG_DFLT_3_REG,	"AUDIO_REG_DFLT_3"),
	D2199_REG_INIT(D2199_AUDIO_REG_DFLT_4_REG,	"AUDIO_REG_DFLT_4"),
	D2199_REG_INIT(D2199_AUDIO_REG_DFLT_5_REG,	"AUDIO_REG_DFLT_5"),
	D2199_REG_INIT(D2199_AUDIO_REG_DFLT_6_REG,	"AUDIO_REG_DFLT_6"),
	D2199_REG_INIT(D2199_AUDIO_REG_DFLT_7_REG,	"AUDIO_REG_DFLT_7"),
	/* others */
	D2199_REG_INIT(D2199_BUCK2_5_CONF1_REG,		"BUCK2_5_CONF1"),
};


#endif /* __D2199_DBG_H__ */