/**
  ******************************************************************************
  * @file    Pstl/Include/stm32f401re_upmc_led_sample.h 
  * @author  Master1 Team
  * @version V1.0.0
  * @date    ??-April-2015
  * @brief   Custom config for ???.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2015 UPMC</center></h2>
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F401RE_UPMC_LED_SAMPLE_H
#define __STM32F401RE_UPMC_LED_SAMPLE_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f401re_upmc_digitalIn.h"

/* Exported functions ------------------------------------------------------- */
void configureLed2Pin();
void createLed2Struct();
void initialiseLed2Struct();
void turnOnLed2();
void turnOffLed2();

#ifdef __cplusplus
}
#endif

#endif /* STM32F401RE_UPMC_LED_SAMPLE */

/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/
