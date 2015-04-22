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

/* Define to prevent recursive inclusion ------------------------------------ */
#ifndef __STM32F401RE_UPMC_LED_SAMPLE_H
#define __STM32F401RE_UPMC_LED_SAMPLE_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ----------------------------------------------------------------- */
#include "stm32f4xx_hal_gpio.h"
#include "stm32f4xx_hal_rcc.h"

/* Exported types ----------------------------------------------------------- */
typedef enum 
{
  LD2 = GPIO_PIN_5
} Led_TypeDef;

/* Exported functions ------------------------------------------------------- */
void configureLedPin(Led_TypeDef led_pin);
void enableLedClock(Led_TypeDef led_pin);
void createLedStruct(Led_TypeDef led_pin);
void initialiseLedStruct(Led_TypeDef led_pin);

void turnOnLed(Led_TypeDef led_pin);
void turnOffLed(Led_TypeDef led_pin);

#ifdef __cplusplus
}
#endif

#endif /* STM32F401RE_UPMC_LED_SAMPLE */

/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/
