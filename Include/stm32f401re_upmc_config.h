/**
  ******************************************************************************
  * @file    Pstl/Include/stm32f401re_upmc_config.h 
  * @author  Adel LARBI (adel.larbi@etu.upmc.fr)
  * @version V1.0.0
  * @date    ??-December-2015
  * @brief   Custom config for ???.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2015 UPMC</center></h2>
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion ------------------------------------ */
#ifndef __STM32F401RE_UPMC_CONFIG_H
#define __STM32F401RE_UPMC_CONFIG_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ----------------------------------------------------------------- */
#include "stm32f4xx_hal_gpio.h"
#include "stm32f4xx_hal_rcc.h"
#include "stm32f4xx_it.h"

/* Exported types ----------------------------------------------------------- */
typedef enum 
{  
  USER  =  GPIO_PIN_13
} Button_TypeDef;


typedef enum 
{
  D0   =  GPIO_PIN_3,
  D1   =  GPIO_PIN_2,
  D2   =  GPIO_PIN_10,
  D3   =  GPIO_PIN_3,
  D4   =  GPIO_PIN_5,
  D5   =  GPIO_PIN_4,
  D6   =  GPIO_PIN_10,
  D7   =  GPIO_PIN_8,
  D8   =  GPIO_PIN_9,
  D9   =  GPIO_PIN_7,
  D10  =  GPIO_PIN_6,
  D11  =  GPIO_PIN_7,
  D12  =  GPIO_PIN_6,
  D13  =  GPIO_PIN_5,
  D14  =  GPIO_PIN_9,
  D15  =  GPIO_PIN_8  
} Digital_TypeDef;

/* Exported macro ----------------------------------------------------------- */
#define false   0
#define true    1

#ifdef __cplusplus
}
#endif

#endif /* __STM32F401RE_UPMC_CONFIG_H */

/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/