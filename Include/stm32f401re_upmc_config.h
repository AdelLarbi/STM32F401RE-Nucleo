/**
  ******************************************************************************
  * @file    Pstl/Include/stm32f401re_upmc_config.h 
  * @author  Master1 Team
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F401RE_UPMC_CONFIG_H
#define __STM32F401RE_UPMC_CONFIG_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal_gpio.h"
#include "stm32f4xx_hal_rcc.h"
#include "stm32f4xx_it.h"

/* Exported types ------------------------------------------------------------*/


/* Exported macro ------------------------------------------------------------*/
#define USER_BUTTON_PIN    GPIO_PIN_13
#define USER_BUTTON_PORT   GPIOC

#define false   0
#define true    1

/* Exported functions ------------------------------------------------------- */
void enableClock(uint16_t GPIO_Pin);

#ifdef __cplusplus
}
#endif

#endif /* __STM32F401RE_UPMC_CONFIG_H */

/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/