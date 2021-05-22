/*
  ******************************************************************************
  * @file    main.c
  * @author  APT AE Team
  * @version V1.0
  * @date    2016/07/19
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
#include "apt32f101_tkey.h"
#include "apt32f101_led.h"
#include "apt32f101_gtc.h"
#include "apt32f101_ifc.h"
#include "apt32f101_adc.h"
#include "apt32f101_syscon.h"

/* defines -------------------------------------------------------------------*/
uint32_t TK_BK=0;
/* externs--------- ----------------------------------------------------------*/
extern void APT32F101_init(void);
extern volatile uint8_t I2CWrBuffer[BUFSIZE];
extern volatile uint8_t I2CRdBuffer[BUFSIZE];
/*************************************************************/
//ADC Function test
/*************************************************************/
void adc_test(void)
{
    U8_T adc_dr0;
	ADC12_Control(ADC12_START);                                                       // Start conversion
    ADC12_EOC_wait();                                                                   //End of conversion wait
    adc_dr0=ADC12_DATA_OUPUT();
    ADC12_Control(ADC12_STOP); 
}
/*************************************************************/
//ADC Function test
/*************************************************************/
void lvd_test(void)
{
        U8_T LVD_DAT;
		GPIO_Set_Value(GPIOA0,0,0);
		GPIO_Init(GPIOA0,0,0);
		GPIO_Init(GPIOA0,1,0);
        LVD_DAT=SYSCON_LVDFLAG();
        if (LVD_DAT==1)
        {
        GPIO_Set_Value(GPIOA0,0,1); 												//LVD 
        }
        else GPIO_Set_Value(GPIOA0,0,0);
        if (SYSCON->RSR&0x00000002)
        {
            GPIO_Set_Value(GPIOA0,1,1); 											//LVR
        }
}

/*************************************************************/
//GPIO Function test
/*************************************************************/
void gpio_test(void)
{
    U8_T iodata;
    iodata=GPIO_Read_Status(GPIOB0,0);
    if (iodata==1)
    {
    GPIO_Set_Value(GPIOA0,0,1);
//	GPIO_Reverse(GPIOA,0);
    GPIO_Set_Value(GPIOB0,1,1);
    GPIO_Set_Value(GPIOC0,0,1);
    }
    else 
    {
	GPIO_Set_Value(GPIOA0,0,0);
//	GPIO_Reverse(GPIOA,1);
    GPIO_Set_Value(GPIOB0,1,0);
    GPIO_Set_Value(GPIOC0,0,0);
    }
}
/*************************************************************/
//Count A Function test
/*************************************************************/
void counta_test(void)
{
   
}
/*************************************************************/
//GTC Function test
/*************************************************************/
void gtc_test(void)
{

}
/*************************************************************/
//UART0/1 Function test
/*************************************************************/
void uart_test(void)
{
    U8_T u8_test0;
	GPIO_Init(GPIOA0,6,0);
    GPIO_Init(GPIOA0,3,0);
	
	UARTTxByte(UART1,0xAA);
	Delay(200);
	UARTTxByte(UART1,0x55);
	Delay(200);
/*	
	u8_test0=UART_ReturnRxByte(UART1);
        if (u8_test0=='1')
        {
            u8_test0=0;
            UARTTxByte(UART1,0x55);
        }
        if (u8_test0=='2')
        {
            u8_test0=0;
            UARTTxByte(UART1,0xAA);
        }*/
}
/*************************************************************/
//I2C master Function test
/*************************************************************/
void i2c_master_test(void)
{
	U8_T I2Cdata;
	I2C_WriteByte_Int(0x3a,0x5a);
    I2C_WriteByte_Int(0x20,0x05);
    I2Cdata=I2C_ReadByte_Int(0x20);
    I2Cdata=I2C_ReadByte_Int(0x20);
    delay_nms(100);
}
/*************************************************************/
//I2C Simulation Function test
/*************************************************************/
void i2c_Simulate_test(void)
{
    U8_T I2Cdata;
    writebyte(0x3a,0x5a);
    writebyte(0x20,0x05);
    I2Cdata=readbyte(0x20);
}
/*************************************************************/
//I2C slave Function test
/*************************************************************/
void i2c_slave_test(void)
{
    I2CWrBuffer[0]=0x55;
    I2CWrBuffer[1]=0x66;
    I2CWrBuffer[2]=0x77;
    I2CWrBuffer[3]=0x88;
    I2CWrBuffer[4]=0x99;
  if (I2CRdBuffer[1]!=0)
  {
      nop;
  }
}
/*************************************************************/
//LED Function test
/*************************************************************/
void led_test(void)
{
	LED_SEGDATX_data_write(SEGDAT_NUM0 , _CHAR_[1]);                        //show 1
	LED_SEGDATX_data_write(SEGDAT_NUM1 , _CHAR_[2]);                        //show 2
	LED_SEGDATX_data_write(SEGDAT_NUM2 , _CHAR_[3]);                        //show 3
	LED_SEGDATX_data_write(SEGDAT_NUM3 , _CHAR_[4]);                        //show 4
}
/*************************************************************
 IFC fuction test;
 If right return 0;otherwise return 1;
*************************************************************/  
void APTFlashTest(void)
{
	unsigned int Buffer;
	uint8_t FlashDataArry[24];
	uint8_t DataBuffer[24];
	for(Buffer=0;Buffer<24;Buffer++)
	{
		FlashDataArry[Buffer]=Buffer;
		DataBuffer[Buffer]=0;
	}
	EnIFCClk;
	PageErase(DROM_PageAdd1_Erase);					///
	ProgramData(0x10000400,24,&FlashDataArry[0]);
	ReadDataArry(0x10000400,24,&DataBuffer[0]);
	DisIFCClk;
}
/*************************************************************/
//TK Function test
/*************************************************************/
void TK_test(void)
{
      uint8_t TK_data;
      Read_Keymap();
	  Read_Sampling();
	  Read_Baseline();
	  Read_Offset();
      if (Key_Map)
      {
          if(TK_BK==Key_Map) return;
          TK_BK=Key_Map;
          switch (Key_Map) 
        {
            case 0x01:TK_data=1;break;
            case 0x02:TK_data=2;break;
            case 0x04:TK_data=3;break;
            case 0x08:TK_data=4;break;
            case 0x10:TK_data=5;break;
            case 0x20:TK_data=6;break;
            case 0x40:TK_data=7;break;
            case 0x80:TK_data=8;break;
            case 0x0100:TK_data=9;break;
            case 0x0200:TK_data=10;break;
            case 0x0400:TK_data=11;break;
            case 0x0800:TK_data=12;break;
            case 0x1000:TK_data=13;break;
            case 0x2000:TK_data=14;break;
            case 0x4000:TK_data=15;break;
            case 0x8000:TK_data=16;break;
            default:TK_data=0XAA;break;
        }
        if (TK_data<10)
        {
        LED_SEGDATX_data_write(SEGDAT_NUM0 , _CHAR_[TK_data]);                        //show 0
        LED_SEGDATX_data_write(SEGDAT_NUM1 , _CHAR_[0]);                        //show 0
        }
        else
        {
        LED_SEGDATX_data_write(SEGDAT_NUM0 , _CHAR_[TK_data-10]);                        //show 0
        LED_SEGDATX_data_write(SEGDAT_NUM1 , _CHAR_[1]);                        //show 0    
        }
        UARTTxByte(UART1,TK_data);
      }
      else 
      {
        if (TK_BK!=0)
        {
        TK_BK=0;
        UARTTxByte(UART1,0);
        LED_SEGDATX_data_write(SEGDAT_NUM0 , _CHAR_[0]);                        //show 0
        LED_SEGDATX_data_write(SEGDAT_NUM1 , _CHAR_[0]);                        //show 0
        }
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
        //adc_test();
        //lvd_test();
        //gpio_test();
        //counta_test();
        //gtc_test();
        //uart_test();
        //i2c_master_test();
        //i2c_slave_test();
        //i2c_Simulate_test();
        uart_test();
        //led_test();
        //TK_test();
        //PCLK_goto_idle_mode();
        //PCLK_goto_deepsleep_mode();
    }
}

/******************* (C) COPYRIGHT 2016 APT Chip *****END OF FILE****/


