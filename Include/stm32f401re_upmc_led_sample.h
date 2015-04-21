/**
  ******************************************************************************
  * @file    Pstl/Include/stm32f401re_upmc_led_sample.h 
  * @author  Adel LARBI (adel.larbi@etu.upmc.fr)
  * @version V1.0.0
  * @date    ??-April-2015
  * @brief   Custom config for stm32f401re_upmc_led_sample.c module
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
#include "stm32f4xx_hal_gpio.h"
#include "stm32f4xx_hal_rcc.h"

/* Exported types ------------------------------------------------------------*/
GPIO_InitTypeDef LED2_InitStruct;

/* Exported macro ------------------------------------------------------------*/
#define LED2_PIN  GPIO_PIN_5
#define LED2_PORT GPIOA

/* Exported functions ------------------------------------------------------- */
void configureLed2Pin(void);
void enableLed2Clock(void);
void createLed2Struct(void);
void initialiseLed2Struct(void);

void turnOnLed2(void);
void turnOffLed2(void);

#ifdef __cplusplus
}
#endif

#endif /* STM32F401RE_UPMC_LED_SAMPLE */

/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/
