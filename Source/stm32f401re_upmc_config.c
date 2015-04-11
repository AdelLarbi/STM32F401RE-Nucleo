/**
  ******************************************************************************
  * @file    Pstl/Source/stm32f401re_upmc_config.c 
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
#include "stm32f401re_upmc_config.h"

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */
void enableClock(uint16_t GPIO_Pin) {

	switch (GPIO_Pin) {

		case GPIO_PIN_0 :
		case GPIO_PIN_1 :
		case GPIO_PIN_2 :
		case GPIO_PIN_3 :
		case GPIO_PIN_4 : {
			__GPIOB_CLK_ENABLE(); // NOT B; to check!
			break;
		}
		
		case LED2_PIN : {
			__GPIOA_CLK_ENABLE();
			break;
		}

		case GPIO_PIN_6 :
		case GPIO_PIN_7 :
		case GPIO_PIN_8 :
		case GPIO_PIN_9 :
		case GPIO_PIN_10 :
		case GPIO_PIN_11 :
		case GPIO_PIN_12 : {
			__GPIOB_CLK_ENABLE(); // NOT B; to check!
			break;
		}

		case USER_BUTTON_PIN : {
			__GPIOC_CLK_ENABLE();
			break;
		}

		case GPIO_PIN_14 :
		case GPIO_PIN_15 : {
			__GPIOB_CLK_ENABLE(); // NOT B; to check!
			break;
		}
	}	
}

/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/