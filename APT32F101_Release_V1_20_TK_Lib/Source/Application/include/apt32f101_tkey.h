/*
  ******************************************************************************
  * @file    apt32f101_tkey.h
  * @author  APT AE Team
  * @version V1.0
  * @date    2017/11/01
  ******************************************************************************
  *THIS SOFTWARE WHICH IS FOR ILLUSTRATIVE PURPOSES ONLY WHICH PROVIDES 
  *CUSTOMER WITH CODING INFORMATION REGARDING THEIR PRODUCTS.
  *APT CHIP SHALL NOT BE HELD RESPONSIBILITY ADN LIABILITY FOR ANY DIRECT, 
  *INDIRECT DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE CONTENT OF 
  *SUCH SOFTWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING INFORMATION 
  *CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.AND APT CHIP RESERVES 
  *THE RIGHT TO MAKE CHANGES IN THE SOFTWARE WITHOUT NOTIFICATION
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _apt32f101_tkey_H
#define _apt32f101_tkey_H

/* Includes ------------------------------------------------------------------*/
#include "apt32f101.h"

#define TK_High_Anti_DIS	0								
#define TK_High_Anti_EN		1	
#define TK_RC_Mode			0								//CH0~CH15
#define TK_EX_Mode			1								//CH0~CH14
#define TK_RC_Led_Mode		2								//without CH9~CH12		
#define TK_EX_Led_Mode		3								//without CH9~CH12,CH15	
/* -------Touch key parameter -----------------------------------------------*/
U16_T Key_Map;												//Touch key map  
S32_T Sampling_Data[16];									//sampling data
S32_T Baseline_Data[16];									//baseline data
S32_T Offset_Data[16];										//offset data 
U32_T TK_Trigglevel_data[16];							//Touch key triggerlevel 
U8_T  TK_mode;
U8_T TK_High_Anti;						
U32_T TK_IO_ENABLE;                                       
U32_T TK_GSR;                                                                             
U32_T Longpress_ctrl;                                       
U32_T Longpress_time;                                       
U32_T Key_mode;                                       
U32_T Key_Debounce;                                       
/*************************************************************/   
//Touch Key Special Control Parameters                            
/*************************************************************/   
U32_T TKPDIV;                                           
U32_T TKHYST;                                           
U32_T HW0_BLUPD_THR;                                         
U32_T HW0_BLUPD_WCO0;                                         
U32_T HW0_BLUPD_WCO1;                                         
U32_T HW0_BLUPD_DEB0;                                         
U32_T HW0_BLUPD_DEB1;                                         
U32_T HW0_ABNFLT;                                         
U32_T HW0_BLUPD_THVAL;                                         
U32_T HW1_BLUPD_THR;                                         
U32_T HW1_BLUPD_WCO0;                                         
U32_T HW1_BLUPD_WCO1;                                         
U32_T HW1_BLUPD_DEB0;                                         
U32_T HW1_BLUPD_DEB1;                                         
U32_T HW1_ABNFLT;                                         
U32_T HW1_BLUPD_THVAL;                                         
//-------------------------------------------------------         
U32_T OFFSET_MUL;                                         
U32_T TOSCFREQ;                                         
U32_T CMPFLT;                                         
U32_T BLUPDICNT;                                         
U32_T TOSCFDIV;                                         
U32_T ICNTSWEN_ctrl;                                         
U32_T BLUPDIS_ctrl;                                         
U32_T BLUPDIS_CYCLE_VAL	;                                         

	
//--------------------------------------------------------------------------------
//-----------------------------TK  value enum define------------------------------
//--------------------------------------------------------------------------------
/**
  * @brief  tkey clock
  */
typedef enum
{
    CLK_ENABLE = (0x01ul << 7),
    CLK_DISABLE = (0x00ul << 7)
}TK_CLKEN_TypeDef;
/**
  * @brief  tkey en/disable
  */
typedef enum
{
    TK_ENABLE = (0x01ul << 0),
    TK_DISABLE = (0x00ul << 0)
}TK_TKEN_TypeDef;
/**
  * @brief  tkey tscmode
  */
typedef enum
{
    SCMODE0 = (0x00ul << 1),
    SCMODE1 = (0x01ul << 1)
}TK_TSCMODE_TypeDef;
/**
  * @brief  tkey mode
  */
typedef enum
{
    TKMODE0 = (0x00ul << 2),
    TKMODE1 = (0x01ul << 2)
}TK_TKMODE_TypeDef;
/**
  * @brief  tkey swrst en/disable
  */
typedef enum
{
    TKDBGEN = (0x00ul << 8),
    TKDBGDIS = (0x01ul << 8)
}TK_DBGEN_TypeDef;
/**
  * @brief  tkey degen mode
  */
typedef enum
{
    SWRST0 = (0x01ul << 3),
    SWRST1 = (0x03ul << 3)
}TK_TKSWRST_TypeDef;
/**
  * @brief  tkey DIV
  */
typedef enum
{
    TKPDIV0 = (0x00ul << 12),
    TKPDIV1 = (0x01ul << 12),
    TKPDIV2 = (0x02ul << 12),
    TKPDIV3 = (0x03ul << 12),
    TKPDIV4 = (0x04ul << 12),
    TKPDIV5 = (0x05ul << 12)
}TK_TKPDVI_TypeDef;
/**
  * @brief  tkey TKHYST
  */
typedef enum
{
    TKHYST0 = (0x00ul << 15),
    TKHYST1 = (0x01ul << 15)
}TK_TKHYST_TypeDef;
/**
  * @brief  tkey STARTCFG
  */
typedef enum
{
    STARTCFG0 = (0x00ul << 16),
    STARTCFG1 = (0x01ul << 16),
    STARTCFG2 = (0x02ul << 16),
    STARTCFG3 = (0x03ul << 16)
}TK_STCFG_TypeDef;
/**
  * @brief  tkey HWPROC selection
  */
typedef enum
{
    HWPROC0 = (0x00ul <<18),
    HWPROC1 = (0x01ul << 18)
}TK_HWPROC_TypeDef;
/**
  * @brief  tkey stpe en/diasbale
  */
typedef enum
{
    STPENA = (0x01ul << 19),
    STPDIS = (0x00ul << 19)
}TK_STPENA_TypeDef;
/**
  * @brief  tkey offset
  */
typedef enum
{
    OFFSET0 = (0x00ul << 1),
    OFFSET1 = (0x01ul << 1),
    OFFSET2 = (0x02ul << 1),
    OFFSET3 = (0x03ul << 1)
}TK_OFFSETMUL_TypeDef;
/**
  * @brief  tkey req selection
  */
typedef enum
{
    TKFREQ0 = (0x00ul << 4),
    TKFREQ2 = (0x01ul << 4),
    TKFREQ25 = (0x02ul << 4)
}TK_TKFREQ_TypeDef;
/**
  * @brief  tkey CMPFLT selection
  */
typedef enum
{
    CMPFLT0 = (0x00ul << 6),
    CMPFLT1 = (0x01ul << 6),
    CMPFLT2 = (0x02ul << 6),
    CMPFLT3 = (0x03ul << 6)
}TK_CMPFLT_TypeDef;
/**
  * @brief  tkey base update duty
  */
typedef enum
{
    BLUPDICNT0 = (0x00ul << 8),
    BLUPDICNT1 = (0x01ul << 8),
    BLUPDICNT2 = (0x02ul << 8),
    BLUPDICNT3 = (0x03ul << 8)
}TK_BLUPDICNT_TypeDef;
/**
  * @brief  tkey Relaxation oscillation DIV
  */
typedef enum
{
    TOSCFDIV0 = (0x00ul << 12),
    TOSCFDIV1 = (0x01ul << 12),
    TOSCFDIV2 = (0x02ul << 12),
    TOSCFDIV3 = (0x03ul << 12),
    TOSCFDIV4 = (0x04ul << 12),
    TOSCFDIV5 = (0x05ul << 12),
    TOSCFDIV6 = (0x06ul << 12),
    TOSCFDIV7 = (0x07ul << 12),
    TOSCFDIV8 = (0x08ul << 12),
    TOSCFDIV9 = (0x09ul << 12),
    TOSCFDIV10 = (0x0Aul << 12),
    TOSCFDIV11 = (0x0Bul << 12),
    TOSCFDIV12 = (0x0Cul << 12),
    TOSCFDIV13 = (0x0Dul << 12),
    TOSCFDIV14 = (0x0Eul << 12),
    TOSCFDIV15 = (0x0Ful << 12)
}TK_TOSCFDIV_TypeDef;
/**
  * @brief  tkey longpress en/disable
  */
typedef enum
{
    TK_longpress_Disable = (0x00ul << 16),
    TK_longpress_Enable = (0x01ul << 16)
}
TK_KEYSTICKCHK_TypeDef;
/**
  * @brief  tkey longpress time
  */
typedef enum
{
    _16s = (0x00ul << 17),
    _32s = (0x01ul << 17),
    _48s = (0x02ul << 17),
    _64s = (0x03ul << 17)
}TK_KEYSTICKDUR_TypeDef;
/**
  * @brief  tkey debounce
  */
typedef enum
{
    KEYDETDEB0 = (0x00ul << 20),
    KEYDETDEB1 = (0x01ul << 20),
    KEYDETDEB2 = (0x02ul << 20),
    KEYDETDEB3 = (0x03ul << 20)
}TK_KEYDETDEB_TypeDef;
/**
  * @brief  tkey scan gap ICNT
  */
typedef enum
{
    ICNTSWEN = (0x01ul << 22),
    ICNTSWDIS = (0x00ul << 22)
}TK_ICNTSWEN_TypeDef;
/**
  * @brief  tkey base update en/disable
  */
typedef enum
{
    BASE_EN = (0x00ul << 23),
    BASE_DIS = (0x01ul << 23)
}TK_BLUPDIS_TypeDef;
/**
  * @brief  tkey base update offset
  */
typedef enum
{
    BLUPD_THR0 = (0x00ul << 0),
    BLUPD_THR1 = (0x01ul << 0),
    BLUPD_THR2 = (0x02ul << 0),
    BLUPD_THR3 = (0x03ul << 0)
}TK_BLUPD_THR_TypeDef;
/**
  * @brief  tkey base update condition
  */
typedef enum
{
    BLUPD_WCO0_0 = (0x00ul << 2),
    BLUPD_WCO0_1 = (0x01ul << 2),
    BLUPD_WCO0_2 = (0x02ul << 2),
    BLUPD_WCO0_3 = (0x03ul << 2)
}TK_BLUPD_WCO0_TypeDef;
/**
  * @brief  tkey base update en/disable(small than BLUPD_THR)
  */
typedef enum
{
    BLUPD_WCO1_0 = (0x00ul << 4),
    BLUPD_WCO1_1 = (0x01ul << 4),
    BLUPD_WCO1_2 = (0x02ul << 4),
    BLUPD_WCO1_3 = (0x03ul << 4)
}TK_BLUPD_WCO1_TypeDef;
/**
  * @brief  sampling data limit
  */
typedef enum
{
    ABNFLT0 = (0x00ul << 20),
    ABNFLT1 = (0x01ul << 20),
    ABNFLT2 = (0x02ul << 20),
    ABNFLT3 = (0x03ul << 20)
}TK_ABNFLT_TypeDef;
/**
  * @brief  tkey key mode
  */
typedef enum
{
	FirstKey = 0,
    Multikey  = 1
}Key_mode_TypeDef;
/**
  * @brief  tkey reset mode
  */
typedef enum
{
	HM_Reset = (0x01ul<<3),
    AllTK_Reset  = (0x03ul<<3)
}TK_software_TypeDef;
/**
  * @brief  tkey share led
  */
typedef enum
{
	ENLedShare = 1,
    DISLedShare  = 0
}TK_IOmode_TypeDef;
/**
  * @brief  tkey int setting
  */
typedef enum
{
	CH0_DNE	=	0x01<<0,
	CH1_DNE	=	0x01<<1,
	CH2_DNE	=	0x01<<2,
	CH3_DNE	=	0x01<<3,
	CH4_DNE	=	0x01<<4,
	CH5_DNE	=	0x01<<5,
	CH6_DNE	=	0x01<<6,
	CH7_DNE	=	0x01<<7,
	CH8_DNE	=	0x01<<8,
	CH9_DNE	=	0x01<<9,
	CH10_DNE	=	0x01<<10,
	CH11_DNE	=	0x01<<11,
	CH12_DNE	=	0x01<<12,
	CH13_DNE	=	0x01<<13,
	CH14_DNE	=	0x01<<14,
	CH15_DNE	=	0x01<<15,
	KEYINT	=	0X01ul<<27,
	HWRST	=	0x01ul<<28,
	SCTOVF	=	0x01ul<<29,
	BLUPD	=	0x01ul<<30,
	PRCDNE	=	0x01ul<<31
}TK_INT_TypeDef;
/**
  * @brief  tkey RC/EX mode
  */
typedef enum
{
	TK_RC_MODE		=	1,
	TK_EX_MODE		=	2,
}TK_function1_TypeDef;
/**
  * @brief  tkey share led en/disable
  */
typedef enum
{
	TK_share_EN		=	1,
	TK_share_DIS	=	2
}TK_function2_TypeDef;
/******************************************************************************
************************ Touch key Registers Definition *************************
******************************************************************************/


#define CSP_TK_GET_CHDATA(cm, index)    ((cm)->TCH_CHxCNT[index])
#define CSP_TK_GET_CHBL(cm, index)      ((cm)->TCH_CHxBL[index])

#define CSP_TK_SET_CR0(cm,val)          ((cm)->TCH_CR0 = val)
#define CSP_TK_GET_CR0(cm)              ((cm)->TCH_CR0)
#define CSP_TK_SET_CR1(cm,val)          ((cm)->TCH_CR1 = val)
#define CSP_TK_GET_CR1(cm)              ((cm)->TCH_CR1)

#define CSP_TK_SET_HWPCR0(cm,val)       ((cm)->TCH_HWPCR0 = val)
#define CSP_TK_GET_HWPCR0(cm)           ((cm)->TCH_HWPCR0)
#define CSP_TK_SET_HWPCR1(cm,val)       ((cm)->TCH_HWPCR1 = val)
#define CSP_TK_GET_HWPCR1(cm)           ((cm)->TCH_HWPCR1)

#define CSP_TK_SET_BLFUCR(cm,val)       ((cm)->TCH_BLFUCR = val)
#define CSP_TK_GET_BLFUCR(cm)           ((cm)->TCH_BLFUCR)

#define CSP_TK_SET_START(cm, val)       ((cm)->TCH_START = val)
#define CSP_TK_GET_START(cm)            ((cm)->TCH_START)

#define CSP_TK_SET_CHCFG(cm,val)        ((cm)->TCH_CHCFG = val)
#define CSP_TK_GET_CHCFG(cm)            ((cm)->TCH_CHCFG)

#define CSP_TK_SET_SCTCR(cm,val)        ((cm)->TCH_SCTCR = val)
#define CSP_TK_SET_CHDST(cm,val)        ((cm)->TCH_CHDST = val)

#define CSP_TK_SET_TSCCR(cm,val)        ((cm)->TCH_TSCCR = val)
#define CSP_TK_SET_TSCDR(cm,val)        ((cm)->TCH_TSCDR = val)

#define CSP_TK_SET_CHCFG(cm,val)        ((cm)->TCH_CHCFG = val)

#define CSP_TK_SET_TSR(cm,val)          ((cm)->TCH_TSR = val)
#define CSP_TK_SET_GSR(cm,val)          ((cm)->TCH_GSR = val)

#define CSP_TK_SET_EBLSR(cm,val)        ((cm)->TCH_EBLSR = val)
#define CSP_TK_SET_EBLR0(cm,val)        ((cm)->TCH_EBLR0 = val)
#define CSP_TK_SET_EBLR1(cm,val)        ((cm)->TCH_EBLR1 = val)

#define CSP_TK_SET_OSCR0(cm,val)        ((cm)->TCH_OSCR0 = val)
#define CSP_TK_SET_OSCR1(cm,val)        ((cm)->TCH_OSCR1 = val)
#define CSP_TK_SET_OSCR2(cm,val)        ((cm)->TCH_OSCR2 = val)
#define CSP_TK_SET_OSCR3(cm,val)        ((cm)->TCH_OSCR3 = val)

#define CSP_TK_SET_TKCR(cm,val)         ((cm)->TCH_TKCR = val)

#define CSP_TK_SET_IMCR(cm,val)        ((cm)->TCH_IMCR = val)
#define CSP_TK_SET_ICR(cm,val)         ((cm)->TCH_ICR = val)
#define CSP_TK_GET_RISR(cm)            ((cm)->TCH_RISR)
#define CSP_TK_GET_MISR(cm)            ((cm)->TCH_MISR)

extern void TK_DeInit(void);
extern void TK_IO_Enable(TK_IOmode_TypeDef TK_IOmode_x);
extern void TK_CH_Enable(void);
extern void TK_CLK_Ctrl(TK_CLKEN_TypeDef TKEN);
extern void TK_Rebuild(void);
extern void TK_HardMacro_Ctrl(TK_TKEN_TypeDef TKEN);
extern void TK_Force_Rebuid(void);
extern void TK_key_mode(Key_mode_TypeDef KeyMode);
extern void TK_Start_Scan(FunctionalStatus NewState);
extern U8_T TK_Read_ScanStatus(void);
extern void TK_software_reset(TK_software_TypeDef TK_Reset);
void TK_Ctrl0_Init(TK_TSCMODE_TypeDef SCMODE,TK_TKMODE_TypeDef TKMODE,TK_DBGEN_TypeDef TKDBG ,U8_T SICNT,
                   TK_TKPDVI_TypeDef TKDIV,TK_TKHYST_TypeDef HYST,TK_STCFG_TypeDef STCFG,
                   TK_HWPROC_TypeDef HWPROC,TK_STPENA_TypeDef STPENA,U16_T ICNT );
extern void TK_Ctrl1_Init(TK_OFFSETMUL_TypeDef OFFSET,TK_TKFREQ_TypeDef TKFREQ,TK_CMPFLT_TypeDef CMPFLT,
                   TK_BLUPDICNT_TypeDef BLUPDICNT,TK_TOSCFDIV_TypeDef TOSCFDIV,TK_KEYSTICKCHK_TypeDef KEYSTICKCHK,
                   TK_KEYSTICKDUR_TypeDef _Time,TK_KEYDETDEB_TypeDef KEYDETDEB,TK_ICNTSWEN_TypeDef ICNTSWEN,
                   TK_BLUPDIS_TypeDef BLUPDIS,U8_T BLUPDIS_CYCLE);
extern void  TK_Hardware0_Init(TK_BLUPD_THR_TypeDef BLUPD_THR,TK_BLUPD_WCO0_TypeDef WCO0,TK_BLUPD_WCO1_TypeDef WCO1,
                       U8_T DEB0, U8_T DEB1,TK_ABNFLT_TypeDef ABNFLT,U8_T BLUPD_THVAL);
extern void  TK_Hardware1_Init(TK_BLUPD_THR_TypeDef BLUPD_THR,TK_BLUPD_WCO0_TypeDef WCO0,TK_BLUPD_WCO1_TypeDef WCO1,
                       U8_T DEB0, U8_T DEB1,TK_ABNFLT_TypeDef ABNFLT,U8_T BLUPD_THVAL);
extern void TK_Baseline_Config(U16_T base_bit,U16_T base_val);
extern void TK_SCTCR_Config(U16_T SCTDATA);
extern void TK_Default_IOStatus(U32_T DSR_val );
extern void TK_TSCCR_Config(U32_T TSCCR_val,U32_T TSCDR_val );
extern void TK_Sens_Config(U32_T TSRx,U32_T GSR );
extern void Read_OFFSET(U32_T *TK_Trigglevel);
extern void TK_TKCR_Config(U32_T TKCRx);
extern void TK_IMCR_Config(U32_T IMCR);
extern U32_T TK_Read_RISR(void);
extern U32_T TK_Read_MISR(void);
extern void TK_Clear_ICR(U32_T ICR);
extern void TK_Negative_rebuild(void);
extern void TK_Positive_rebuild(void);
extern void Read_Sampling(void);
extern void Read_Baseline(void);
extern void Read_Offset(void);
extern void Read_Keymap(void);
extern void TK_Init(void);
extern void TK0_Int_Enable(void);
extern void TK1_Int_Enable(void);
extern void TK0_Int_Disable(void);
extern void TK1_Int_Disable(void);
extern void TK0_WakeUp_Enable(void);
extern void TK1_WakeUp_Enable(void);
extern void TK0_WakeUp_Disable(void);
extern void TK1_WakeUp_Disable(void);
extern void TK_CLKDIV_Change(TK_TKPDVI_TypeDef TKDIV);
extern S32_T Sampling_Data[16];
extern S32_T Baseline_Data[16];
extern S32_T Offset_Data[16];
extern U16_T Key_Map;
#endif   /**< apt32f101_tkey_H */

/******************* (C) COPYRIGHT 2016 APT Chip *****END OF FILE****/