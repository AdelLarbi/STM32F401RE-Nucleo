/**
  ******************************************************************************
  * @file    Pstl/Include/stm32f401re_upmc_analogIn.h 
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
#ifndef __STM32F401RE_UPMC_ANALOGIN_H
#define __STM32F401RE_UPMC_ANALOGIN_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f401re_upmc_config.h"
	
/* Exported types ------------------------------------------------------------*/
GPIO_InitTypeDef GPIO_InitStruct;

/* Exported functions ------------------------------------------------------- */
void initAnaloglIn(uint16_t GPIO_Pin);
void setMode(uint32_t GPIO_Mode);
float read(uint16_t GPIO_Pin);

#ifdef __cplusplus
}
#endif

#endif /* __STM32F401RE_UPMC_ANALOGIN_H */

/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/
