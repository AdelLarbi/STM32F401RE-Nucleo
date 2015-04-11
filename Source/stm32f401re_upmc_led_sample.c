/**
  ******************************************************************************
  * @file    Pstl/Source/stm32f401re_upmc_led_sample.c 
  * @author  Master1 Team
  * @version V1.0.0
  * @date    ??-December-2015
  * @brief   ???
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2015 UPMC</center></h2>
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32f401re_upmc_led_sample.h"

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */
void configureLed2Pin() {
	enableClock(LED2_PIN);	
	createLed2Struct();
	initialiseLed2Struct();
}

/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */	
void createLed2Struct() {
	GPIO_InitStruct.Pin   = LED2_PIN;
    GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull  = GPIO_PULLUP;
    GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;	 
}			

/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */
void initialiseLed2Struct() {
	HAL_GPIO_Init(LED2_PORT, &GPIO_InitStruct);
}


/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */
void turnOnLed2() {
	HAL_GPIO_WritePin(LED2_PORT, LED2_PIN, GPIO_PIN_SET);
}

/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */
void turnOffLed2() {
	HAL_GPIO_WritePin(LED2_PORT, LED2_PIN, GPIO_PIN_RESET);
}

/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/