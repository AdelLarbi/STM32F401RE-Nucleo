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

/* Includes ----------------------------------------------------------------- */
#include "stm32f401re_upmc_led_sample.h"

/* Pin table -------------------------------------------------------------------
 * LD2 : GPIO_PIN_5
 * -------------------------------------------------------------------------- */

/* Port table ------------------------------------------------------------------
 * LD2 : GPIOA
 * -------------------------------------------------------------------------- */

/* Global variable ---------------------------------------------------------- */
GPIO_InitTypeDef LED2_InitStruct;

/* Private functions -------------------------------------------------------- */
/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */
void configureLedPin(Led_TypeDef led_pin) 
{
	if (led_pin == LD2)
  {
    enableLedClock(led_pin);	
	  createLedStruct(led_pin);
	  initialiseLedStruct(led_pin);
  }  
}

/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */
void enableLedClock(Led_TypeDef led_pin) 
{
  if (led_pin == LD2)
  {
    __GPIOA_CLK_ENABLE();
  }  
}

/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */	
void createLedStruct(Led_TypeDef led_pin) 
{ 
  if (led_pin == LD2) 
  {
  	LED2_InitStruct.Pin   = led_pin;
    LED2_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
    LED2_InitStruct.Pull  = GPIO_PULLUP;
    LED2_InitStruct.Speed = GPIO_SPEED_HIGH;	 
  }
}			

/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */
void initialiseLedStruct(Led_TypeDef led_pin) 
{
  if (led_pin == LD2) 
  {    
    HAL_GPIO_Init(GPIOA, &LED2_InitStruct);
  }
}


/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */
void turnOnLed(Led_TypeDef led_pin) 
{
  if (led_pin == LD2) 
  {
    HAL_GPIO_WritePin(GPIOA, led_pin, GPIO_PIN_SET);
  }
}

/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */
void turnOffLed(Led_TypeDef led_pin) 
{
  if (led_pin == LD2) 
  {
    HAL_GPIO_WritePin(GPIOA, led_pin, GPIO_PIN_RESET);
  }
}

/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/