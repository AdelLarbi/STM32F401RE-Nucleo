/**
  ******************************************************************************
  * @file    Pstl/Include/stm32f401re_upmc_digitalIn.h 
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
#ifndef __STM32F401RE_UPMC_DIGITALIN_H
#define __STM32F401RE_UPMC_DIGITALIN_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f401re_upmc_config.h"
	
/* Exported types ------------------------------------------------------------*/
GPIO_InitTypeDef GPIO_InitStruct;

/* Exported functions ------------------------------------------------------- */
void initDigitalIn(uint16_t GPIO_Pin);
void createStruct(uint16_t GPIO_Pin);
void initialiseStruct(uint16_t GPIO_Pin);
GPIO_PinState isActive(uint16_t GPIO_Pin);

#ifdef __cplusplus
}
#endif

#endif /* __STM32F401RE_UPMC_DIGITALIN_H */

/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/
