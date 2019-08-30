/*
 * Copyright (c) 2007 - 2010 NVIDIA Corporation.  All rights reserved.
 *
 * NVIDIA Corporation and its licensors retain all intellectual property
 * and proprietary rights in and to this software and related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA Corporation is strictly prohibited.
 */

/**
 * Defines the SDRAM parameter structure.
 *
 * Note that PLLM is used by EMC.
 */

#ifndef INCLUDED_NVBOOT_SDRAM_PARAM_H
#define INCLUDED_NVBOOT_SDRAM_PARAM_H

#ifdef HW_TREE_CONVENTION_NO_PROJECT_NAME_IN_POUND_INCLUDE

// Don't integrate these to SW folder
#include "nvboot_config.h"

#else

#include "nvboot_config.h"

#endif

#if defined(__cplusplus)
extern "C"
{
#endif

typedef enum
{
    /// Specifies the memory type to be undefined
    NvBootMemoryType_None = 0,

    #ifdef DONT_INTEGRATE_LEGACY_DRAM_TYPES
    /// Specifies the memory type to be DDR SDRAM
    NvBootMemoryType_Ddr,

    /// Specifies the memory type to be LPDDR SDRAM
    NvBootMemoryType_LpDdr,

    /// Specifies the memory type to be DDR2 SDRAM
    NvBootMemoryType_Ddr2,
    #endif

    /// Specifies the memory type to be LPDDR2 SDRAM
    NvBootMemoryType_LpDdr2,

    /// Specifies the memory type to be DDR3 SDRAM
    NvBootMemoryType_Ddr3,

    NvBootMemoryType_Num,
    NvBootMemoryType_Force32 = 0x7FFFFFF
} NvBootMemoryType;


/**
 * Defines the SDRAM parameter structure
 */
typedef struct NvBootSdramParamsRec
{
    // sdram data structure generated by tool warmboot_code_gen

    /// Specifies the type of memory device
    NvBootMemoryType MemoryType;
    /// Specifies the M value for PllM
    NvU32 PllMInputDivider;
    /// Specifies the N value for PllM
    NvU32 PllMFeedbackDivider;
    /// Specifies the time to wait for PLLM to lock (in microseconds)
    NvU32 PllMStableTime;
    /// Specifies misc. control bits
    NvU32 PllMSetupControl;
    /// Specifies the P value for PllM
    NvU32 PllMPostDivider;
    /// Powers down VCO output Level shifter
    NvU32 PllMPDLshiftPh45;
    /// Powers down VCO output Level shifter
    NvU32 PllMPDLshiftPh90;
    /// Powers down VCO output Level shifter
    NvU32 PllMPDLshiftPh135;
    /// Specifies value for Charge Pump Gain Control
    NvU32 PllMKCP;
    /// Specirfic VCO gain
    NvU32 PllMKVCO;
    /// Spare BCT param
    NvU32 EmcBctSpare0;
    /// Spare BCT param
    NvU32 EmcBctSpare1;
    /// Spare BCT param
    NvU32 EmcBctSpare2;
    /// Spare BCT param
    NvU32 EmcBctSpare3;
    /// Spare BCT param
    NvU32 EmcBctSpare4;
    /// Spare BCT param
    NvU32 EmcBctSpare5;
    /// Spare BCT param
    NvU32 EmcBctSpare6;
    /// Spare BCT param
    NvU32 EmcBctSpare7;
    /// Spare BCT param
    NvU32 EmcBctSpare8;
    /// Spare BCT param
    NvU32 EmcBctSpare9;
    /// Spare BCT param
    NvU32 EmcBctSpare10;
    /// Spare BCT param
    NvU32 EmcBctSpare11;
    /// Defines EMC_2X_CLK_SRC, EMC_2X_CLK_DIVISOR, EMC_INVERT_DCD
    NvU32 EmcClockSource;

    /// Auto-calibration of EMC pads
    ///
    /// Specifies the value for EMC_AUTO_CAL_INTERVAL
    NvU32 EmcAutoCalInterval;
    /// Specifies the value for EMC_AUTO_CAL_CONFIG
    /// Note: Trigger bits are set by the SDRAM code.
    NvU32 EmcAutoCalConfig;
    /// Specifies the value for EMC_AUTO_CAL_CONFIG2
    NvU32 EmcAutoCalConfig2;
    /// Specifies the value for EMC_AUTO_CAL_CONFIG3
    NvU32 EmcAutoCalConfig3;
    /// Specifies the time for the calibration to stabilize (in microseconds)
    NvU32 EmcAutoCalWait;

    /// DRAM size information
    /// Specifies the value for EMC_ADR_CFG
    NvU32 EmcAdrCfg;

    /// Specifies the time to wait after asserting pin CKE (in microseconds)
    NvU32 EmcPinProgramWait;
    /// Specifies the extra delay before/after pin RESET/CKE command
    NvU32 EmcPinExtraWait;
    /// Specifies the extra delay after the first writing of EMC_TIMING_CONTROL
    NvU32 EmcTimingControlWait;

    /// Timing parameters required for the SDRAM
    ///
    /// Specifies the value for EMC_RC
    NvU32 EmcRc;
    /// Specifies the value for EMC_RFC
    NvU32 EmcRfc;
    /// Specifies the value for EMC_RFC_SLR
    NvU32 EmcRfcSlr;
    /// Specifies the value for EMC_RAS
    NvU32 EmcRas;
    /// Specifies the value for EMC_RP
    NvU32 EmcRp;
    /// Specifies the value for EMC_R2R
    NvU32 EmcR2r;
    /// Specifies the value for EMC_W2W
    NvU32 EmcW2w;
    /// Specifies the value for EMC_R2W
    NvU32 EmcR2w;
    /// Specifies the value for EMC_W2R
    NvU32 EmcW2r;
    /// Specifies the value for EMC_R2P
    NvU32 EmcR2p;
    /// Specifies the value for EMC_W2P
    NvU32 EmcW2p;
    /// Specifies the value for EMC_RD_RCD
    NvU32 EmcRdRcd;
    /// Specifies the value for EMC_WR_RCD
    NvU32 EmcWrRcd;
    /// Specifies the value for EMC_RRD
    NvU32 EmcRrd;
    /// Specifies the value for EMC_REXT
    NvU32 EmcRext;
    /// Specifies the value for EMC_WEXT
    NvU32 EmcWext;
    /// Specifies the value for EMC_WDV
    NvU32 EmcWdv;
    /// Specifies the value for EMC_WDV_MASK
    NvU32 EmcWdvMask;
    /// Specifies the value for EMC_QUSE
    NvU32 EmcQUse;
    /// Specifies the value for EMC_QUSE_WIDTH
    NvU32 EmcQuseWidth;
    /// Specifies the value for EMC_IBDLY
    NvU32 EmcIbdly;
    /// Specifies the value for EMC_EINPUT
    NvU32 EmcEInput;
    /// Specifies the value for EMC_EINPUT_DURATION
    NvU32 EmcEInputDuration;
    /// Specifies the value for EMC_PUTERM
    NvU32 EmcPuterm;
    /// Specifies the value for EMC_PUTERM_WIDTH
    NvU32 EmcPutermWidth;
    /// Specifies the value for EMC_CDB_CNTL_2
    NvU32 EmcCdbCntl2;
    /// Specifies the value for EMC_QRST
    NvU32 EmcQRst;
    /// Specifies the value for EMC_QSAFE
    NvU32 EmcQSafe;
    /// Specifies the value for EMC_RDV
    NvU32 EmcRdv;
    /// Specifies the value for EMC_RDV_MASK
    NvU32 EmcRdvMask;
    /// Specifies the value for EMC_QPOP
    NvU32 EmcQpop;
    /// Specifies the value for EMC_CTT
    NvU32 EmcCtt;
    /// Specifies the value for EMC_CTT_DURATION
    NvU32 EmcCttDuration;
    /// Specifies the value for EMC_REFRESH
    NvU32 EmcRefresh;
    /// Specifies the value for EMC_BURST_REFRESH_NUM
    NvU32 EmcBurstRefreshNum;
    /// Specifies the value for EMC_PRE_REFRESH_REQ_CNT
    NvU32 EmcPreRefreshReqCnt;
    /// Specifies the value for EMC_PDEX2WR
    NvU32 EmcPdEx2Wr;
    /// Specifies the value for EMC_PDEX2RD
    NvU32 EmcPdEx2Rd;
    /// Specifies the value for EMC_PCHG2PDEN
    NvU32 EmcPChg2Pden;
    /// Specifies the value for EMC_ACT2PDEN
    NvU32 EmcAct2Pden;
    /// Specifies the value for EMC_AR2PDEN
    NvU32 EmcAr2Pden;
    /// Specifies the value for EMC_RW2PDEN
    NvU32 EmcRw2Pden;
    /// Specifies the value for EMC_TXSR
    NvU32 EmcTxsr;
    /// Specifies the value for EMC_TXSRDLL
    NvU32 EmcTxsrDll;
    /// Specifies the value for EMC_TCKE
    NvU32 EmcTcke;
    /// Specifies the value for EMC_TCKESR
    NvU32 EmcTckesr;
    /// Specifies the value for EMC_TPD
    NvU32 EmcTpd;
    /// Specifies the value for EMC_TFAW
    NvU32 EmcTfaw;
    /// Specifies the value for EMC_TRPAB
    NvU32 EmcTrpab;
    /// Specifies the value for EMC_TCLKSTABLE
    NvU32 EmcTClkStable;
    /// Specifies the value for EMC_TCLKSTOP
    NvU32 EmcTClkStop;
    /// Specifies the value for EMC_TREFBW
    NvU32 EmcTRefBw;

    /// FBIO configuration values
    ///
    /// Specifies the value for EMC_FBIO_CFG5
    NvU32 EmcFbioCfg5;
    /// Specifies the value for EMC_FBIO_CFG6
    NvU32 EmcFbioCfg6;

    /// FBIO configuration values
    ///
    /// Specifies the value for EMC_FBIO_CFG7
    NvU32 EmcFbioCfg7;
    /// Specifies the value for EMC_FBIO_SPARE
    NvU32 EmcFbioSpare;

    /// Specifies the value for EMC_CFG_RSV
    NvU32 EmcCfgRsv;

    /// MRS command values
    ///
    /// Specifies the value for EMC_MRS
    NvU32 EmcMrs;
    /// Specifies the MP0 command to initialize mode registers
    NvU32 EmcEmrs;
    /// Specifies the MR2 command to initialize mode registers
    NvU32 EmcEmrs2;
    /// Specifies the MR3 command to initialize mode registers
    NvU32 EmcEmrs3;
    /// Specifies the programming to LPDDR2 Mode Register 1 at cold boot
    NvU32 EmcMrw1;
    /// Specifies the programming to LPDDR2 Mode Register 2 at cold boot
    NvU32 EmcMrw2;
    /// Specifies the programming to LPDDR2 Mode Register 3 at cold boot
    NvU32 EmcMrw3;
    /// Specifies the programming to LPDDR2 Mode Register 11 at cold boot
    NvU32 EmcMrw4;
    /// Specifies the programming to extra LPDDR2 Mode Register at cold boot
    NvU32 EmcMrwExtra;
    /// Specifies the programming to extra LPDDR2 Mode Register at warm boot
    NvU32 EmcWarmBootMrwExtra;
    /// Specify the enable of extra Mode Register programming at warm boot
    NvU32 EmcWarmBootExtraModeRegWriteEnable;
    /// Specify the enable of extra Mode Register programming at cold boot
    NvU32 EmcExtraModeRegWriteEnable;

    /// Specifies the EMC_MRW reset command value
    NvU32 EmcMrwResetCommand;
    /// Specifies the EMC Reset wait time (in microseconds)
    NvU32 EmcMrwResetNInitWait;
    /// Specifies the value for EMC_MRS_WAIT_CNT
    NvU32 EmcMrsWaitCnt;
    /// Specifies the value for EMC_MRS_WAIT_CNT2
    NvU32 EmcMrsWaitCnt2;

    /// EMC miscellaneous configurations
    ///
    /// Specifies the value for EMC_CFG
    NvU32 EmcCfg;
    /// Specifies the value for EMC_CFG_2
    NvU32 EmcCfg2;
    /// Specifies the value for EMC_DBG
    NvU32 EmcDbg;
    /// Specifies the value for EMC_CMDQ
    NvU32 EmcCmdQ;
    /// Specifies the value for EMC_MC2EMCQ
    NvU32 EmcMc2EmcQ;
    /// Specifies the value for EMC_DYN_SELF_REF_CONTROL
    NvU32 EmcDynSelfRefControl;

    /// Specifies the value for MEM_INIT_DONE
    NvU32 AhbArbitrationXbarCtrlMemInitDone;

    /// Specifies the value for EMC_CFG_DIG_DLL
    NvU32 EmcCfgDigDll;
    /// Specifies the value for EMC_CFG_DIG_DLL_PERIOD
    NvU32 EmcCfgDigDllPeriod;
    /// Specifies the vlaue of *DEV_SELECTN of various EMC registers
    NvU32 EmcDevSelect;

    /// Specifies the value for EMC_SEL_DPD_CTRL
    NvU32 EmcSelDpdCtrl;

    /// Pads trimmer delays
    ///
    /// Specifies the value for EMC_DLL_XFORM_DQS0
    NvU32 EmcDllXformDqs0;
    /// Specifies the value for EMC_DLL_XFORM_DQS1
    NvU32 EmcDllXformDqs1;
    /// Specifies the value for EMC_DLL_XFORM_DQS2
    NvU32 EmcDllXformDqs2;
    /// Specifies the value for EMC_DLL_XFORM_DQS3
    NvU32 EmcDllXformDqs3;
    /// Specifies the value for EMC_DLL_XFORM_DQS4
    NvU32 EmcDllXformDqs4;
    /// Specifies the value for EMC_DLL_XFORM_DQS5
    NvU32 EmcDllXformDqs5;
    /// Specifies the value for EMC_DLL_XFORM_DQS6
    NvU32 EmcDllXformDqs6;
    /// Specifies the value for EMC_DLL_XFORM_DQS7
    NvU32 EmcDllXformDqs7;
    /// Specifies the value for EMC_DLL_XFORM_QUSE0
    NvU32 EmcDllXformQUse0;
    /// Specifies the value for EMC_DLL_XFORM_QUSE1
    NvU32 EmcDllXformQUse1;
    /// Specifies the value for EMC_DLL_XFORM_QUSE2
    NvU32 EmcDllXformQUse2;
    /// Specifies the value for EMC_DLL_XFORM_QUSE3
    NvU32 EmcDllXformQUse3;
    /// Specifies the value for EMC_DLL_XFORM_QUSE4
    NvU32 EmcDllXformQUse4;
    /// Specifies the value for EMC_DLL_XFORM_QUSE5
    NvU32 EmcDllXformQUse5;
    /// Specifies the value for EMC_DLL_XFORM_QUSE6
    NvU32 EmcDllXformQUse6;
    /// Specifies the value for EMC_DLL_XFORM_QUSE7
    NvU32 EmcDllXformQUse7;
    /// Specifies the value for EMC_DLL_XFORM_ADDR0
    NvU32 EmcDllXformAddr0;
    /// Specifies the value for EMC_DLL_XFORM_ADDR1
    NvU32 EmcDllXformAddr1;
    /// Specifies the value for EMC_DLL_XFORM_ADDR2
    NvU32 EmcDllXformAddr2;
    /// Specifies the value for EMC_DLI_TRIM_TXDQS0
    NvU32 EmcDliTrimTxDqs0;
    /// Specifies the value for EMC_DLI_TRIM_TXDQS1
    NvU32 EmcDliTrimTxDqs1;
    /// Specifies the value for EMC_DLI_TRIM_TXDQS2
    NvU32 EmcDliTrimTxDqs2;
    /// Specifies the value for EMC_DLI_TRIM_TXDQS3
    NvU32 EmcDliTrimTxDqs3;
    /// Specifies the value for EMC_DLI_TRIM_TXDQS4
    NvU32 EmcDliTrimTxDqs4;
    /// Specifies the value for EMC_DLI_TRIM_TXDQS5
    NvU32 EmcDliTrimTxDqs5;
    /// Specifies the value for EMC_DLI_TRIM_TXDQS6
    NvU32 EmcDliTrimTxDqs6;
    /// Specifies the value for EMC_DLI_TRIM_TXDQS7
    NvU32 EmcDliTrimTxDqs7;
    /// Specifies the value for EMC_DLL_XFORM_DQ0
    NvU32 EmcDllXformDq0;
    /// Specifies the value for EMC_DLL_XFORM_DQ1
    NvU32 EmcDllXformDq1;
    /// Specifies the value for EMC_DLL_XFORM_DQ2
    NvU32 EmcDllXformDq2;
    /// Specifies the value for EMC_DLL_XFORM_DQ3
    NvU32 EmcDllXformDq3;

    /// Specifies the delay after asserting CKE pin during a WarmBoot0
    /// sequence (in microseconds)
    NvU32 WarmBootWait;

    /// Specifies the value for EMC_CTT_TERM_CTRL
    NvU32 EmcCttTermCtrl;

    /// Specifies the value for EMC_ODT_WRITE
    NvU32 EmcOdtWrite;
    /// Specifies the value for EMC_ODT_WRITE
    NvU32 EmcOdtRead;

    /// Periodic ZQ calibration
    ///
    /// Specifies the value for EMC_ZCAL_INTERVAL
    /// Value 0 disables ZQ calibration
    NvU32 EmcZcalInterval;
    /// Specifies the value for EMC_ZCAL_WAIT_CNT
    NvU32 EmcZcalWaitCnt;
    /// Specifies the value for EMC_ZCAL_MRW_CMD
    NvU32 EmcZcalMrwCmd;

    /// DRAM initialization sequence flow control
    ///
    /// Specifies the MRS command value for resetting DLL
    NvU32 EmcMrsResetDll;
    /// Specifies the command for ZQ initialization of device 0
    NvU32 EmcZcalInitDev0;
    /// Specifies the command for ZQ initialization of device 1
    NvU32 EmcZcalInitDev1;
    /// Specifies the wait time after programming a ZQ initialization command
    /// (in microseconds)
    NvU32 EmcZcalInitWait;
    /// Specifies the enable for ZQ calibration at cold boot [bit 0] and warm boot [bit 1]
    NvU32 EmcZcalWarmColdBootEnables;
    /// Specifies the enable for DQS_PULLD
    NvU32 EmcDqsPulldEnable;
    /// Specifies the enable for E_STRPULL_DQS
    NvU32 EmcStrPullDqsEnable;
    /// Specifies the MRW command to LPDDR2 for ZQ calibration on warmboot
    /// Is issued to both devices separately
    NvU32 EmcMrwLpddr2ZcalWarmBoot;
    /// Specifies the ZQ command to DDR3 for ZQ calibration on warmboot
    /// Is issued to both devices separately
    NvU32 EmcZqCalDdr3WarmBoot;
    /// Specifies the wait time for ZQ calibration on warmboot
    /// (in microseconds)
    NvU32 EmcZcalWarmBootWait;
    /// Specifies the enable for DRAM Mode Register programming at warm boot
    NvU32 EmcMrsWarmBootEnable;
    /// Specifies the wait time after sending an MRS DLL reset command
    /// in microseconds)
    NvU32 EmcMrsResetDllWait;
    /// Specifies the extra MRS command to initialize mode registers
    NvU32 EmcMrsExtra;
    /// Specifies the extra MRS command at warm boot
    NvU32 EmcWarmBootMrsExtra;
    /// Specifies the EMRS command to enable the DDR2 DLL
    NvU32 EmcEmrsDdr2DllEnable;
    /// Specifies the MRS command to reset the DDR2 DLL
    NvU32 EmcMrsDdr2DllReset;
    /// Specifies the EMRS command to set OCD calibration
    NvU32 EmcEmrsDdr2OcdCalib;
    /// Specifies the wait between initializing DDR and setting OCD
    /// calibration (in microseconds)
    NvU32 EmcDdr2Wait;
    /// Specifies the value for EMC_CLKEN_OVERRIDE
    NvU32 EmcClkenOverride;
    /// Specifies LOG2 of the extra refresh numbers after booting
    /// Program 0 to disable
    NvU32 EmcExtraRefreshNum;
    /// Specifies the master override for all EMC clocks
    NvU32 EmcClkenOverrideAllWarmBoot;
    /// Specifies the master override for all MC clocks
    NvU32 McClkenOverrideAllWarmBoot;
    /// Specifies digital dll period, choosing between 4 to 64 ms
    NvU32 EmcCfgDigDllPeriodWarmBoot;

    /// Pad controls
    ///
    /// Specifies the value for PMC_VDDP_SEL
    NvU32 PmcVddpSel;
    /// Specifies the wait time after programming PMC_VDDP_SEL
    NvU32 PmcVddpSelWait;
    /// Specifies the value for PMC_DDR_PWR
    NvU32 PmcDdrPwr;
    /// Specifies the value for PMC_DDR_CFG
    NvU32 PmcDdrCfg;
    /// Specifies the value for PMC_IO_DPD_REQ
    NvU32 PmcIoDpdReq;
    /// Specifies the wait time after programming PMC_IO_DPD_REQ
    NvU32 PmcIoDpdReqWait;
    /// Specifies the value for PMC_IO_DPD2_REQ
    NvU32 PmcIoDpd2Req;
    /// Specifies the value for PMC_REG_SHORT
    NvU32 PmcRegShort;
    /// Specifies the value for PMC_E_NO_VTTGEN
    NvU32 PmcENoVttGen;
    /// Specifies the value for PMC_NO_IOPOWER
    NvU32 PmcNoIoPower;
    /// Specifies the wait time after programing PMC_POR_DPD_CTRL
    NvU32 PmcPorDpdCtrlWait;
    /// Specifies the value for EMC_XM2CMDPADCTRL
    NvU32 EmcXm2CmdPadCtrl;
    /// Specifies the value for EMC_XM2CMDPADCTRL2
    NvU32 EmcXm2CmdPadCtrl2;
    /// Specifies the value for EMC_XM2CMDPADCTRL3
    NvU32 EmcXm2CmdPadCtrl3;
    /// Specifies the value for EMC_XM2CMDPADCTRL4
    NvU32 EmcXm2CmdPadCtrl4;
    /// Specifies the value for EMC_XM2DQSPADCTRL
    NvU32 EmcXm2DqsPadCtrl;
    /// Specifies the value for EMC_XM2DQSPADCTRL2
    NvU32 EmcXm2DqsPadCtrl2;
    /// Specifies the value for EMC_XM2DQSPADCTRL3
    NvU32 EmcXm2DqsPadCtrl3;
    /// Specifies the value for EMC_XM2DQSPADCTRL4
    NvU32 EmcXm2DqsPadCtrl4;
    /// Specifies the value for EMC_XM2DQPADCTRL
    NvU32 EmcXm2DqPadCtrl;
    /// Specifies the value for EMC_XM2DQPADCTRL2
    NvU32 EmcXm2DqPadCtrl2;
    /// Specifies the value for EMC_XM2CLKPADCTRL
    NvU32 EmcXm2ClkPadCtrl;
    /// Specifies the value for EMC_XM2CLKPADCTRL2
    NvU32 EmcXm2ClkPadCtrl2;
    /// Specifies the value for EMC_XM2COMPPADCTRL
    NvU32 EmcXm2CompPadCtrl;
    /// Specifies the value for EMC_XM2COMPPADCTRL2
    NvU32 EmcXm2CompPadCtrl2;
    /// Specifies the value for EMC_XM2VTTGENPADCTRL
    NvU32 EmcXm2VttGenPadCtrl;
    /// Specifies the value for EMC_ACPD_CONTROL
    NvU32 EmcAcpdControl;

    /// Specifies the value for EMC_SWIZZLE_RANK0_BYTE_CFG
    NvU32 EmcSwizzleRank0ByteCfg;
    /// Specifies the value for EMC_SWIZZLE_RANK0_BYTE0
    NvU32 EmcSwizzleRank0Byte0;
    /// Specifies the value for EMC_SWIZZLE_RANK0_BYTE1
    NvU32 EmcSwizzleRank0Byte1;
    /// Specifies the value for EMC_SWIZZLE_RANK0_BYTE2
    NvU32 EmcSwizzleRank0Byte2;
    /// Specifies the value for EMC_SWIZZLE_RANK0_BYTE3
    NvU32 EmcSwizzleRank0Byte3;
    /// Specifies the value for EMC_SWIZZLE_RANK1_BYTE_CFG
    NvU32 EmcSwizzleRank1ByteCfg;
    /// Specifies the value for EMC_SWIZZLE_RANK1_BYTE0
    NvU32 EmcSwizzleRank1Byte0;
    /// Specifies the value for EMC_SWIZZLE_RANK1_BYTE1
    NvU32 EmcSwizzleRank1Byte1;
    /// Specifies the value for EMC_SWIZZLE_RANK1_BYTE2
    NvU32 EmcSwizzleRank1Byte2;
    /// Specifies the value for EMC_SWIZZLE_RANK1_BYTE3
    NvU32 EmcSwizzleRank1Byte3;
    /// Specifies the bypass settings for the various POP command pipe stages
    NvU32 EmcPipeMacroCtl;

    /// Specifies the value for EMC_DSR_VTTGEN_DRV
    NvU32 EmcDsrVttgenDrv;

    /// Specifies the value for EMC_TXDSRVTTGEN
    NvU32 EmcTxdsrvttgen;
    /// Specifies the value for EMC_BGBIAS_CTL
    NvU32 EmcBgbiasCtl0;

    /// DRAM size information
    ///
    /// Specifies the value for MC_EMEM_ADR_CFG
    NvU32 McEmemAdrCfg;
    /// Specifies the value for MC_EMEM_ADR_CFG_DEV0
    NvU32 McEmemAdrCfgDev0;
    /// Specifies the value for MC_EMEM_ADR_CFG_DEV1
    NvU32 McEmemAdrCfgDev1;
    /// Specifies the value for MC_EMEM_ADR_CFG_BANK_MASK_0
    NvU32 McEmemAdrCfgBankMask0;
    /// Specifies the value for MC_EMEM_ADR_CFG_BANK_MASK_1
    NvU32 McEmemAdrCfgBankMask1;
    /// Specifies the value for MC_EMEM_ADR_CFG_BANK_MASK_2
    NvU32 McEmemAdrCfgBankMask2;

    /// Specifies the value for MC_EMEM_CFG which holds the external memory
    /// size (in KBytes)
    NvU32 McEmemCfg;

    /// MC arbitration configuration
    ///
    /// Specifies the value for MC_EMEM_ARB_CFG
    NvU32 McEmemArbCfg;
    /// Specifies the value for MC_EMEM_ARB_OUTSTANDING_REQ
    NvU32 McEmemArbOutstandingReq;
    /// Specifies the value for MC_EMEM_ARB_OUTSTANDING_REQ_RING3
    NvU32 McEmemArbOutstandingReqRing3;
    /// Specifies the value for MC_EMEM_ARB_TIMING_RCD
    NvU32 McEmemArbTimingRcd;
    /// Specifies the value for MC_EMEM_ARB_TIMING_RP
    NvU32 McEmemArbTimingRp;
    /// Specifies the value for MC_EMEM_ARB_TIMING_RC
    NvU32 McEmemArbTimingRc;
    /// Specifies the value for MC_EMEM_ARB_TIMING_RAS
    NvU32 McEmemArbTimingRas;
    /// Specifies the value for MC_EMEM_ARB_TIMING_FAW
    NvU32 McEmemArbTimingFaw;
    /// Specifies the value for MC_EMEM_ARB_TIMING_RRD
    NvU32 McEmemArbTimingRrd;
    /// Specifies the value for MC_EMEM_ARB_TIMING_RAP2PRE
    NvU32 McEmemArbTimingRap2Pre;
    /// Specifies the value for MC_EMEM_ARB_TIMING_WAP2PRE
    NvU32 McEmemArbTimingWap2Pre;
    /// Specifies the value for MC_EMEM_ARB_TIMING_R2R
    NvU32 McEmemArbTimingR2R;
    /// Specifies the value for MC_EMEM_ARB_TIMING_W2W
    NvU32 McEmemArbTimingW2W;
    /// Specifies the value for MC_EMEM_ARB_TIMING_R2W
    NvU32 McEmemArbTimingR2W;
    /// Specifies the value for MC_EMEM_ARB_TIMING_W2R
    NvU32 McEmemArbTimingW2R;
    /// Specifies the value for MC_EMEM_ARB_DA_TURNS
    NvU32 McEmemArbDaTurns;
    /// Specifies the value for MC_EMEM_ARB_DA_COVERS
    NvU32 McEmemArbDaCovers;
    /// Specifies the value for MC_EMEM_ARB_MISC0
    NvU32 McEmemArbMisc0;
    /// Specifies the value for MC_EMEM_ARB_MISC1
    NvU32 McEmemArbMisc1;
    /// Specifies the value for MC_EMEM_ARB_RING1_THROTTLE
    NvU32 McEmemArbRing1Throttle;
    /// Specifies the value for MC_EMEM_ARB_RING3_THROTTLE
    NvU32 McEmemArbRing3Throttle;
    /// Specifies the value for MC_EMEM_ARB_OVERRIDE
    NvU32 McEmemArbOverride;
    /// Specifies the value for MC_EMEM_ARB_OVERRIDE_1
    NvU32 McEmemArbOverride1;
    /// Specifies the value for disabling the optional precharge on LPDDR2, LPDDR3
    NvU32 McEmemDisPreall;
    /// Specifies the value for MC_EMEM_ARB_RSV
    NvU32 McEmemArbRsv;
    /// Specifies the value for MC_RESERVED_RSV_1
    NvU32 McReservedRsv1;

    /// Specifies the value for MC_CLKEN_OVERRIDE
    NvU32 McClkenOverride;
    /// Specifies the value for MC_EMEM_ARB_ISOCHRONOUS_2
    NvU32 McEmemArbIsochronous2;
    /// Specifies the value for MC_LATENCY_ALLOWANCE_BBMCI_0
    NvU32 McLatencyAllowanceBbmci0;
    /// Specifies the value for MC_TIMING_CONTROL_DBG
    NvU32 McTimingControlDbg;
    /// Specifies the value for MC_DIS_EXTRA_SNAP_LEVELS
    NvU32 McDisExtraSnapLevels;
    /// Specifies the location of Private and IPC Regions for BBC
    NvU32 McBbcMemRegions;
    /// Specifies the overrides for BBC client in various MC arbiters
    NvU32 McEmemArbBbcllOverride;
    /// Specifies the PTSA & TS usage limit for BBCLL
    NvU32 McBbcllEarbCfg;
    /// Specifies the value for            MC_VIDEO_PROTECT_BOM
    NvU32 McVideoProtectBom;
    /// Specifies the value for        MC_VIDEO_PROTECT_SIZE_MB
    NvU32 McVideoProtectSizeMb;
    /// Specifies the value for        MC_VIDEO_PROTECT_VPR_OVERRIDE
    NvU32 McVideoProtectVprOverride;
    /// Specifies the value for        MC_SEC_CARVEOUT_BOM
    NvU32 McSecCarveoutBom;
    /// Specifies the value for        MC_SEC_CARVEOUT_SIZE_MB
    NvU32 McSecCarveoutSizeMb;
    /// Specifies the value for       MC_VIDEO_PROTECT_REG_CTRL.VIDEO_PROTECT_WRITE_ACCESS
    NvU32 McVideoProtectWriteAccess;
    /// Specifies the value for MC_SEC_CARVEOUT_REG_CTRL.SEC_CARVEOUT_WRITE_ACCESS
    NvU32 McSecCarveoutProtectWriteAccess;

    /// Specifies enable for CA training
    NvU32 EmcCaTrainingEnable;
    /// Specifies the value for EMC_CA_TRAINING_TIMING_CNTRL1
    NvU32 EmcCaTrainingTimingCntl1;
    /// Specifies the value for EMC_CA_TRAINING_TIMING_CNTRL2
    NvU32 EmcCaTrainingTimingCntl2;
    /// Set if bit 6 select is greater than bit 7 select; uses aremc.spec packet SWIZZLE_BIT6_GT_BIT7
    NvU32 SwizzleRankByteEncode;
    /// Specifies enable and offset for patched boot rom write
    NvU32 BootRomPatchControl;
    /// Specifies data for patched boot rom write
    NvU32 BootRomPatchData;

    // End of generated code by warmboot_code_gen
} NvBootSdramParams;

#if defined(__cplusplus)
}
#endif

#endif /* #ifndef INCLUDED_NVBOOT_SDRAM_PARAM_H */

