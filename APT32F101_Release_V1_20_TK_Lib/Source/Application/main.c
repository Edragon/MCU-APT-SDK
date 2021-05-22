/*
  ******************************************************************************
  * @file    main.c
  * @author  APT AE Team
  * @version V1.20
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

/* Includes ------------------------------------------------------------------*/
#include "apt32f101.h"
#include "apt32f101_gpio.h"
#include "apt32f101_uart.h"
#include "apt32f101_counta.h"
#include "apt32f101_i2c.h"
#include "apt32f101_led.h"
#include "apt32f101_gtc.h"
#include "apt32f101_ifc.h"
#include "apt32f101_adc.h"
#include "apt32f101_syscon.h"
#include "apt32f101_tkey.h"
/* defines -------------------------------------------------------------------*/
U16_T Key_Map_bk=0;
/* externs--------- ----------------------------------------------------------*/
extern void APT32F101_init(void);
extern S32_T Sampling_Data[16];									//sampling data
extern S32_T Baseline_Data[16];									//baseline data
extern S32_T Offset_Data[16];									//offset data 
extern U16_T Key_Map;											//touch key map
extern volatile uint8_t I2CWrBuffer[BUFSIZE];
extern volatile uint8_t I2CRdBuffer[BUFSIZE];
/* Functions--------- ----------------------------------------------------------*/
void TK_PRGM(void)
{
	  //Read_Sampling();				//read sampling data for testing
	  //Read_Baseline();				//read daseline data for testing
	  //Read_Offset();					//read offset for testing,offset=daseline-sampling	
	  Read_Keymap();					//read key data,if Key_Map!=0, touch key triggered
	  if (Key_Map!=0)
	  {
		  if (Key_Map==Key_Map_bk)return;
		  Key_Map_bk=Key_Map;
		  switch (Key_Map)
		  {
			  case 0x01:break;
			  case 0x02:break;
			  case 0x04:break;
			  case 0x08:break;
		  }
	  }
	  else 
	  {
		 Key_Map_bk=0; 
	  }
}
/*************************************************************/
//main
/*************************************************************/
int main(void)
{
	APT32F101_init();
    while(1)
	{
	  TK_PRGM();
    }
}

/******************* (C) COPYRIGHT 2016 APT Chip *****END OF FILE****/


