#ifndef UNICORN_PPC_H
#define UNICORN_PPC_H

/* Unicorn Engine */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2015 */

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _MSC_VER
#pragma warning(disable:4201)
#endif

//> PPC registers
typedef enum uc_ppc_reg {
	UC_PPC_REG_INVALID = 0,
	
    UC_PPC_REG_NIP,  

	//General purpose registers
	UC_PPC_REG_GPR_0,
	UC_PPC_REG_GPR_1,
	UC_PPC_REG_GPR_2,
	UC_PPC_REG_GPR_3,
	UC_PPC_REG_GPR_4,
	UC_PPC_REG_GPR_5,
	UC_PPC_REG_GPR_6,
	UC_PPC_REG_GPR_7,
	UC_PPC_REG_GPR_8,
	UC_PPC_REG_GPR_9,
	UC_PPC_REG_GPR_10,
	UC_PPC_REG_GPR_11,
	UC_PPC_REG_GPR_12,
	UC_PPC_REG_GPR_13,
	UC_PPC_REG_GPR_14,
	UC_PPC_REG_GPR_15,
	UC_PPC_REG_GPR_16,
	UC_PPC_REG_GPR_17,
	UC_PPC_REG_GPR_18,
	UC_PPC_REG_GPR_19,
	UC_PPC_REG_GPR_20,
	UC_PPC_REG_GPR_21,
	UC_PPC_REG_GPR_22,
	UC_PPC_REG_GPR_23,
	UC_PPC_REG_GPR_24,
	UC_PPC_REG_GPR_25,
	UC_PPC_REG_GPR_26,
	UC_PPC_REG_GPR_27,
	UC_PPC_REG_GPR_28,
	UC_PPC_REG_GPR_29,
	UC_PPC_REG_GPR_30,
	UC_PPC_REG_GPR_31,

	//SPE extension registers
	UC_PPC_REG_GPRH_0,
	UC_PPC_REG_GPRH_1,
	UC_PPC_REG_GPRH_2,
	UC_PPC_REG_GPRH_3,
	UC_PPC_REG_GPRH_4,
	UC_PPC_REG_GPRH_5,
	UC_PPC_REG_GPRH_6,
	UC_PPC_REG_GPRH_7,
	UC_PPC_REG_GPRH_8,
	UC_PPC_REG_GPRH_9,
	UC_PPC_REG_GPRH_10,
	UC_PPC_REG_GPRH_11,
	UC_PPC_REG_GPRH_12,
	UC_PPC_REG_GPRH_13,
	UC_PPC_REG_GPRH_14,
	UC_PPC_REG_GPRH_15,
	UC_PPC_REG_GPRH_16,
	UC_PPC_REG_GPRH_17,
	UC_PPC_REG_GPRH_18,
	UC_PPC_REG_GPRH_19,
	UC_PPC_REG_GPRH_20,
	UC_PPC_REG_GPRH_21,
	UC_PPC_REG_GPRH_22,
	UC_PPC_REG_GPRH_23,
	UC_PPC_REG_GPRH_24,
	UC_PPC_REG_GPRH_25,
	UC_PPC_REG_GPRH_26,
	UC_PPC_REG_GPRH_27,
	UC_PPC_REG_GPRH_28,
	UC_PPC_REG_GPRH_29,
	UC_PPC_REG_GPRH_30,
	UC_PPC_REG_GPRH_31,

	//Floating-point registers
	UC_PPC_REG_FPR_0,
	UC_PPC_REG_FPR_1,
	UC_PPC_REG_FPR_2,
	UC_PPC_REG_FPR_3,
	UC_PPC_REG_FPR_4,
	UC_PPC_REG_FPR_5,
	UC_PPC_REG_FPR_6,
	UC_PPC_REG_FPR_7,
	UC_PPC_REG_FPR_8,
	UC_PPC_REG_FPR_9,
	UC_PPC_REG_FPR_10,
	UC_PPC_REG_FPR_11,
	UC_PPC_REG_FPR_12,
	UC_PPC_REG_FPR_13,
	UC_PPC_REG_FPR_14,
	UC_PPC_REG_FPR_15,
	UC_PPC_REG_FPR_16,
	UC_PPC_REG_FPR_17,
	UC_PPC_REG_FPR_18,
	UC_PPC_REG_FPR_19,
	UC_PPC_REG_FPR_20,
	UC_PPC_REG_FPR_21,
	UC_PPC_REG_FPR_22,
	UC_PPC_REG_FPR_23,
	UC_PPC_REG_FPR_24,
	UC_PPC_REG_FPR_25,
	UC_PPC_REG_FPR_26,
	UC_PPC_REG_FPR_27,
	UC_PPC_REG_FPR_28,
	UC_PPC_REG_FPR_29,
	UC_PPC_REG_FPR_30,
	UC_PPC_REG_FPR_31,

	//Condition register
	UC_PPC_REG_CR_0,
	UC_PPC_REG_CR_1,
	UC_PPC_REG_CR_2,
	UC_PPC_REG_CR_3,
	UC_PPC_REG_CR_4,
	UC_PPC_REG_CR_5,
	UC_PPC_REG_CR_6,
	UC_PPC_REG_CR_7,
	//Floating point status and Control register
	UC_PPC_REG_FPSCR,
	//XER Register
	UC_PPC_REG_XER,
	UC_PPC_REG_SO,
	UC_PPC_REG_OV,
	UC_PPC_REG_CA,
	//Link register
	UC_PPC_REG_LR,
	//Count register
	UC_PPC_REG_CTR,
	
	//Machine State Register
	UC_PPC_REG_MSR,

	// Instruction BAT registers
	// Data BAT registers
	
	//SDR1
	UC_PPC_REG_SDR1,
	//Address Space Register
	UC_PPC_REG_ASR,
	//Segment registers
	UC_PPC_REG_SR0,
	UC_PPC_REG_SR1,
	UC_PPC_REG_SR2,
	UC_PPC_REG_SR3,
	UC_PPC_REG_SR4,
	UC_PPC_REG_SR5,
	UC_PPC_REG_SR6,
	UC_PPC_REG_SR7,
	UC_PPC_REG_SR8,
	UC_PPC_REG_SR9,
	UC_PPC_REG_SR10,
	UC_PPC_REG_SR11,
	UC_PPC_REG_SR12,
	UC_PPC_REG_SR13,
	UC_PPC_REG_SR14,
	UC_PPC_REG_SR15,

	//Data Address Register
	UC_PPC_REG_DAR,

	//SPRG
	UC_PPC_REG_SPRG0,
	UC_PPC_REG_SPRG1,
	UC_PPC_REG_SPRG2,
	UC_PPC_REG_SPRG3,

	//DSISR
	UC_PPC_REG_DSISR,

	//Save and Restore registers
	UC_PPC_REG_SRR0,
	UC_PPC_REG_SRR1,

	//Misc
	UC_PPC_REG_DEC,

	UC_PPC_REG_VR_0,
	UC_PPC_REG_VR_1,
	UC_PPC_REG_VR_2,
	UC_PPC_REG_VR_3,
	UC_PPC_REG_VR_4,
	UC_PPC_REG_VR_5,
	UC_PPC_REG_VR_6,
	UC_PPC_REG_VR_7,
	UC_PPC_REG_VR_8,
	UC_PPC_REG_VR_9,
	UC_PPC_REG_VR_10,
	UC_PPC_REG_VR_11,
	UC_PPC_REG_VR_12,
	UC_PPC_REG_VR_13,
	UC_PPC_REG_VR_14,
	UC_PPC_REG_VR_15,
	UC_PPC_REG_VR_16,
	UC_PPC_REG_VR_17,
	UC_PPC_REG_VR_18,
	UC_PPC_REG_VR_19,
	UC_PPC_REG_VR_20,
	UC_PPC_REG_VR_21,
	UC_PPC_REG_VR_22,
	UC_PPC_REG_VR_23,
	UC_PPC_REG_VR_24,
	UC_PPC_REG_VR_25,
	UC_PPC_REG_VR_26,
	UC_PPC_REG_VR_27,
	UC_PPC_REG_VR_28,
	UC_PPC_REG_VR_29,
	UC_PPC_REG_VR_30,
	UC_PPC_REG_VR_31,

	UC_PPC_REG_ENDING,		// <-- mark the end of the list or registers

	//alias registers

} uc_ppc_reg;

#ifdef __cplusplus
}
#endif

#endif
