/**
 * ddr_training_custom.h
 *
 * Copyright (c) 2009-2014, HiSilicon Technologies Co., Ltd.
 * All rights reserved.
 *
 * DDR training custom define.
 */

/* config DDRC, PHY, DDRT typte */
#define DDR_DDRC_V500_CONFIG
#define DDR_PHY_S40_CONFIG
#define DDR_DDRT_S40_CONFIG

/* config special item */
#define DDR_MPR_TRAINING_CONFIG
#define DDR_TRAINING_STAT_DISABLE
#define DDR_TRAINING_CUT_CODE_CONFIG
#define DDR_TRAINING_MINI_LOG_CONFIG
#define DDR_TRAINING_LOG_DISABLE

/* config DDRC, PHY, DDRT base address */
/* [CUSTOM] DDR DMC base register */
#define DDR_REG_BASE_DMC0              0xf8a31000
/* [CUSTOM] DDR PHY base register */
#define DDR_REG_BASE_PHY0              0xf8a38000
/* [CUSTOM] DDR DDRT base register */
#define DDR_REG_BASE_DDRT              0xf8a50000
/* [CUSTOM] DDR training item system control */
#define DDR_REG_BASE_SYSCTRL           0xf8000000

/* config offset address */

/* config other special */
/* [CUSTOM] The system DDR spacing start address. DDR_MEM_BASE */
#define DDRT_CFG_BASE_ADDR             0x0
/* [CUSTOM] SRAM start address. NOTE: Makefile will parse it. */
#define DDR_TRAINING_RUN_STACK         0xFFFF0C00

/* custom for MPR training */
#define DDR_DMC_SFC_RDATA0		0x4B8   /* SFC read data[127:96] */
#define DDR_DMC_SFC_RDATA1		0x4BC   /* SFC read data[95:64] */
#define DDR_DMC_SFC_RDATA2		0x4C0   /* SFC read data[63:32] */
#define DDR_DMC_SFC_RDATA3		0x4C4   /* SFC read data[31:0] */