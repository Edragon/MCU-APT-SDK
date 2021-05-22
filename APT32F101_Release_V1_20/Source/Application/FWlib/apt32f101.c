/*
  ******************************************************************************
  * @file    apt32f101.c
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

/**
  * @addtogroup APT32F101_StdPeriph_Driver
  * @{
  */
/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Public variables ----------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/

/**
  * @addtogroup Struct pointer assignment Functions
  * @{
  */

CSP_CK802_T *CK802 = (CSP_CK802_T   *)CK802_BASEADDR ;

CSP_IFC_T   *IFC     = (CSP_IFC_T    *)APB_IFCBase ;
CSP_SYSCON_T *SYSCON = (CSP_SYSCON_T *)APB_SYSCONBase ;

CSP_TKEY_T  *TKEY    = (CSP_TKEY_T  *)APB_TKEYBase ;
CSP_ADC12_T *ADC    = (CSP_ADC12_T  *)APB_ADC0Base ;

CSP_GPIO_T  *GPIOA0   = (CSP_GPIO_T  *)APB_GPIOA0Base ; // A0
CSP_GPIO_T  *GPIOB0   = (CSP_GPIO_T  *)APB_GPIOB0Base ; // B0
CSP_GPIO_T  *GPIOC0   = (CSP_GPIO_T  *)APB_GPIOC0Base ; // C0

CSP_GPIOGRP_T  *GPIOGRP   = (CSP_GPIOGRP_T  *)APB_GPIOGRPBase ;

CSP_GTC_T   *GTC0     = (CSP_GTC_T *)APB_GTC0Base ;
CSP_GTC_T   *GTC1     = (CSP_GTC_T *)APB_GTC1Base ;
CSP_GTC_T   *GTC2     = (CSP_GTC_T *)APB_GTC2Base ;
CSP_GTC_T   *GTC3     = (CSP_GTC_T *)APB_GTC3Base ;

CSP_CA_T    *CA0      = (CSP_CA_T    *)APB_CNTABase ;
CSP_LED_T   *LED0     = (CSP_LED_T   *)APB_LED0Base ;

CSP_UART_T  *UART0    = (CSP_UART_T  *)APB_UART0Base ;
CSP_UART_T  *UART1    = (CSP_UART_T  *)APB_UART1Base ;
CSP_I2C_T   *I2C0     = (CSP_I2C_T   *)APB_I2C0Base ;

/******************* (C) COPYRIGHT 2016 APT Chip *****END OF FILE****/
