/**
  ******************************************************************************
  * @file    Pstl/Source/stm32f401re_upmc_digitalIn.c 
  * @author  Adel LARBI (adel.larbi@etu.upmc.fr)
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
#include "stm32f401re_upmc_digitalIn.h"

/* Private functions ---------------------------------------------------------*/

/**
  * @brief Initializes a default digital-in 
  * @GPIO_Pin: specifies the port bit to initialize. Possible values: 
  * 			  PINx, USER_BUTTON or ALLPIN, where x[0..15].
  * @retval ...
  */
void initDigitalIn(uint16_t GPIO_Pin) {	
	enableClock(GPIO_Pin);	
	createStruct(GPIO_Pin);
	initialiseStruct(GPIO_Pin);
}
	
/**
  * @brief ...
  * @GPIO_Pin: specifies the port bit to initialize. Possible values: 
  * 			  PINx, USER_BUTTON or ALLPIN, where x[0..15].
  * @retval ...
  */	
void createStruct(uint16_t GPIO_Pin) {
	GPIO_InitStruct.Pin   = GPIO_Pin;
    GPIO_InitStruct.Mode  = GPIO_MODE_INPUT;
    GPIO_InitStruct.Pull  = GPIO_PULLDOWN;
    GPIO_InitStruct.Speed = GPIO_SPEED_FAST;	
}			

/**
  * @brief ... 
  * @GPIO_Pin: specifies the port bit to initialize. Possible values: 
  * 			  PINx, USER_BUTTON or ALLPIN, where x[0..15].
  * @retval ...
  */
void initialiseStruct(uint16_t GPIO_Pin) {		

	switch (GPIO_Pin) {

		/*case D0_PIN : 
		case D1_PIN : 
		case D2_PIN :
		case D7_PIN : 
		case D8_PIN : 
		case D11_PIN :
		case D12_PIN :
		case D13_PIN : 
		case A0_PIN : 
		case A1_PIN : */
		case A2_PIN : {			
			HAL_GPIO_Init(GPIOA, &GPIO_InitStruct); 
			break;
		}

		/*case D3_PIN :
		case D4_PIN :
		case D5_PIN : 
		case D6_PIN : 
		case D10_PIN : 
		case D14_PIN :
		case D15_PIN : */
		case A3_PIN : 
		/* ou 
		case A4_PIN :
		case A5_PIN : */ {			
			HAL_GPIO_Init(GPIOB, &GPIO_InitStruct); 
			break;
		}		
		
		/*case D9_PIN : 
		case A4_PIN :
		case A5_PIN : */
		case USER_BUTTON_PIN : {
			HAL_GPIO_Init(GPIOC, &GPIO_InitStruct); 
			break;
		}
	}		
}

/**
  * @brief Gets the pin's state 
  * @GPIO_Pin: specifies the port bit to test. Possible values: PINx or 
  *            ALLPIN, where x[0..15].
  * Returns: 0 if the pin is active, 1 else.
  * @retval ...
  */
GPIO_PinState isActive(uint16_t GPIO_Pin) {

	switch (GPIO_Pin) {

		/*case D0_PIN : 
		case D1_PIN : 
		case D2_PIN :
		case D7_PIN : 
		case D8_PIN : 
		case D11_PIN :
		case D12_PIN :
		case D13_PIN : 
		case A0_PIN : 
		case A1_PIN : */
		case A2_PIN : {
			return !HAL_GPIO_ReadPin(GPIOA, GPIO_Pin);						
		}

		/*case D3_PIN :
		case D4_PIN :
		case D5_PIN : 
		case D6_PIN : 
		case D10_PIN : 
		case D14_PIN :
		case D15_PIN : */
		case A3_PIN : 
		/* ou 
		case A4_PIN :
		case A5_PIN : */ {
			return !HAL_GPIO_ReadPin(GPIOB, GPIO_Pin);			
		}		
		
		/*case D9_PIN : 
		case A4_PIN :
		case A5_PIN : */
		case USER_BUTTON_PIN : {
			return !HAL_GPIO_ReadPin(GPIOC, GPIO_Pin);			
		}		
	}
	return 0;
}

/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/