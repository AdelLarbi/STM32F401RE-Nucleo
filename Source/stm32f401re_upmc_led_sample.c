/**
  ******************************************************************************
  * @file    Pstl/Source/stm32f401re_upmc_led_sample.c 
  * @author  Adel LARBI (adel.larbi@etu.upmc.fr)
  * @version V1.0.0
  * @date    ??-December-2015
  * @brief   Implementation of stm32f401re_upmc_led_sample.h
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2015 UPMC</center></h2>
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32f401re_upmc_led_sample.h"
/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */
void configureLed2Pin(void) 
{
	enableLed2Clock();	
	createLed2Struct();
	initialiseLed2Struct();
}

/* Private functions ---------------------------------------------------------*/
/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */
void enableLed2Clock(void) 
{
  __GPIOA_CLK_ENABLE();
}

/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */	
void createLed2Struct(void) 
{
	LED2_InitStruct.Pin   = LED2_PIN;
  LED2_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
  LED2_InitStruct.Pull  = GPIO_PULLUP;
  LED2_InitStruct.Speed = GPIO_SPEED_HIGH;	 
}			

/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */
void initialiseLed2Struct(void) 
{
	HAL_GPIO_Init(LED2_PORT, &LED2_InitStruct);
}


/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */
void turnOnLed2(void) 
{
	HAL_GPIO_WritePin(LED2_PORT, LED2_PIN, GPIO_PIN_SET);
}

/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */
void turnOffLed2(void) 
{
	HAL_GPIO_WritePin(LED2_PORT, LED2_PIN, GPIO_PIN_RESET);
}

/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/