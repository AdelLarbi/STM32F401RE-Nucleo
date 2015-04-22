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
  D0   =  0,
  D1   =  1,
  D2   =  2,
  D3   =  3,
  D4   =  4,
  D5   =  5,
  D6   =  6,
  D7   =  7,
  D8   =  8,
  D9   =  9,
  D10  =  10,
  D11  =  11,
  D12  =  12,
  D13  =  13,
  D14  =  14,
  D15  =  15,  
  USER =  16
} Digital_TypeDef;


typedef enum 
{
  Port_A  =  0,
  Port_B  =  1,
  Port_C  =  2,
} Port_TypeDef;

/* Exported macro ----------------------------------------------------------- */
#define false   0
#define true    1

#ifdef __cplusplus
}
#endif

#endif /* __STM32F401RE_UPMC_CONFIG_H */

/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/