/**
  ******************************************************************************
  * @file    Pstl/Source/stm32f401re_upmc_config.c 
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
#include "stm32f401re_upmc_config.h"

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */
void enableClock(uint16_t GPIO_Pin) {

	switch (GPIO_Pin) {

		case D0 : 
		case D1 : 
		case D2 : {
			__GPIOA_CLK_ENABLE();
			break;
		}

		case D3 :
		case D4 :
		case D5 : 
		case D6 : {
			__GPIOB_CLK_ENABLE();
			break;
		}		
		
		case D7 : 
		case D8 : {
			__GPIOA_CLK_ENABLE();
			break;
		}

		case D9 : {
			__GPIOC_CLK_ENABLE();
			break;
		}		

		case D10 : {
			__GPIOB_CLK_ENABLE();
			break;
		}		

		case D11 :
		case D12 :
		case D13 : {
			__GPIOA_CLK_ENABLE();
			break;
		}		

		case USER_BUTTON_PIN : {
			__GPIOC_CLK_ENABLE();
			break;
		}

		case D14 :
		case D15 : {
			__GPIOB_CLK_ENABLE();
			break;
		}
	}	
}

/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/