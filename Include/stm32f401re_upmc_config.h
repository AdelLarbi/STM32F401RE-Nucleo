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
typedef enum {
  
  D0_PIN = GPIO_PIN_3,
  D1_PIN = GPIO_PIN_2,
  D2_PIN = GPIO_PIN_10,
  D3_PIN = GPIO_PIN_3,
  D4_PIN = GPIO_PIN_5,
  D5_PIN = GPIO_PIN_4,
  D6_PIN = GPIO_PIN_10,
  D7_PIN = GPIO_PIN_8,
  D8_PIN = GPIO_PIN_9,
  D9_PIN = GPIO_PIN_7,
  D10_PIN = GPIO_PIN_6,
  D11_PIN = GPIO_PIN_7,
  D12_PIN = GPIO_PIN_6,
  D13_PIN = GPIO_PIN_5,
  D14_PIN = GPIO_PIN_9,
  D15_PIN = GPIO_PIN_8  

} Digital_TypeDef;


typedef enum {
  
  LED2 = GPIO_PIN_5

} Led_TypeDef;

typedef enum {  
  
  BUTTON_KEY = GPIO_PIN_13

} Button_TypeDef;

/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/
// Digital Pin names
#define   D0_PIN   GPIO_PIN_3
#define   D1_PIN   GPIO_PIN_2
#define   D2_PIN   GPIO_PIN_10
//#define   D3_PIN   D0_PIN //GPIO_PIN_3
#define   D4_PIN   GPIO_PIN_5
#define   D5_PIN   GPIO_PIN_4
//#define   D6_PIN   D2_PIN //GPIO_PIN_10
#define   D7_PIN   GPIO_PIN_8
#define   D8_PIN   GPIO_PIN_9
#define   D9_PIN   GPIO_PIN_7
#define   D10_PIN  GPIO_PIN_6
//#define   D11_PIN  D9_PIN //GPIO_PIN_7
//#define   D12_PIN  D10_PIN //GPIO_PIN_6
//#define   D13_PIN  D4_PIN //GPIO_PIN_5
//#define   D14_PIN  D8_PIN //GPIO_PIN_9
//#define   D15_PIN  D7_PIN //GPIO_PIN_8

// Digital Pin ports
/*#define   D0_PORT   GPIOA
#define   D1_PORT   GPIOA
#define   D2_PORT   GPIOA
#define   D3_PORT   GPIOB
#define   D4_PORT   GPIOB
#define   D5_PORT   GPIOB
#define   D6_PORT   GPIOB
#define   D7_PORT   GPIOA
#define   D8_PORT   GPIOA
#define   D9_PORT   GPIOC
#define   D10_PORT  GPIOB
#define   D11_PORT  GPIOA
#define   D12_PORT  GPIOA
#define   D13_PORT  GPIOA
#define   D14_PORT  GPIOB
#define   D15_PORT  GPIOB*/

// Analog Pin names
#define   A0_PIN   GPIO_PIN_0
#define   A1_PIN   GPIO_PIN_1
#define   A2_PIN   GPIO_PIN_4
#define   A3_PIN   A0_PIN //GPIO_PIN_0
#define   A4_PIN   A1_PIN //GPIO_PIN_1 //ou GPIO_PIN_9
#define   A5_PIN   A3_PIN //GPIO_PIN_0 //ou GPIO_PIN_8

// Analog Pin ports
/*#define   A0_PORT   GPIOA
#define   A1_PORT   GPIOA
#define   A2_PORT   GPIOA
#define   A3_PORT   GPIOB
#define   A4_PORT   GPIOC //ou GPIOB
#define   A5_PORT   GPIOC //ou GPIOB*/

// Blue button pin and port
#define   USER_BUTTON_PIN	   GPIO_PIN_13
#define   USER_BUTTON_PORT   GPIOC

#define   false   0
#define   true    1

/* Exported functions ------------------------------------------------------- */
void enableClock(uint16_t GPIO_Pin);
//GPIO_TypeDef *getPort(uint16_t GPIO_Pin);

#ifdef __cplusplus
}
#endif

#endif /* __STM32F401RE_UPMC_CONFIG_H */

/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/