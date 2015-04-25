/**
  ******************************************************************************
  * @file    Pstl/Include/stm32f401re_upmc_private_digitalIn.h 
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F401RE_UPMC_PRIVATE_DIGITALIN_H
#define __STM32F401RE_UPMC_PRIVATE_DIGITALIN_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f401re_upmc_config.h"

/* Exported functions ------------------------------------------------------- */
static void enableClock(Digital_TypeDef digitalIn_pin);
static void createStruct(Digital_TypeDef digitalIn_pin);
static void initialiseStruct(Digital_TypeDef digitalIn_pin);
static uint16_t getDigitalInPin(Digital_TypeDef digitalIn_pin); 
static Port_TypeDef getDigitalInPort(Digital_TypeDef digitalIn_pin);

#ifdef __cplusplus
}
#endif

#endif /* __STM32F401RE_UPMC_PRIVATE_DIGITALIN_H */

/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/
