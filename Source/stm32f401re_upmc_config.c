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

		case D0_PIN : 
		case D1_PIN : 
		case D2_PIN : {
			__GPIOA_CLK_ENABLE();
			break;
		}

		case D3_PIN :
		case D4_PIN :
		case D5_PIN : 
		case D6_PIN : {
			__GPIOB_CLK_ENABLE();
			break;
		}		
		
		case D7_PIN : 
		case D8_PIN : {
			__GPIOA_CLK_ENABLE();
			break;
		}

		case D9_PIN : {
			__GPIOC_CLK_ENABLE();
			break;
		}		

		case D10_PIN : {
			__GPIOB_CLK_ENABLE();
			break;
		}		

		case D11_PIN :
		case D12_PIN :
		case D13_PIN : {
			__GPIOA_CLK_ENABLE();
			break;
		}				

		case D14_PIN :
		case D15_PIN : {
			__GPIOB_CLK_ENABLE();
			break;
		}

		case A0_PIN : 
		case A1_PIN : 
		case A2_PIN : {
			__GPIOA_CLK_ENABLE();
			break;
		}

		case A3_PIN : {
			__GPIOB_CLK_ENABLE();
			break;
		}		
		
		case A4_PIN :
		case A5_PIN : {
			__GPIOC_CLK_ENABLE();
			break;
		}

		/* ou
		case A4_PIN :
		case A5_PIN : {
			__GPIOB_CLK_ENABLE();
			break;
		}
		*/		

		case USER_BUTTON_PIN : {
			__GPIOC_CLK_ENABLE();
			break;
		}
	}	

/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */  
/*   
GPIO_TypeDef *getPort(uint16_t GPIO_Pin) {

	switch (GPIO_Pin) {

		case D0_PIN : 
		case D1_PIN : 
		case D2_PIN :
		case D7_PIN : 
		case D8_PIN : 
		case D11_PIN :
		case D12_PIN :
		case D13_PIN : 
		case A0_PIN : 
		case A1_PIN : 
		case A2_PIN : {
			return GPIOA;	
		}

		case D3_PIN :
		case D4_PIN :
		case D5_PIN : 
		case D6_PIN : 
		case D10_PIN : 
		case D14_PIN :
		case D15_PIN : 
		case A3_PIN : 
		/* ou 
		case A4_PIN :
		case A5_PIN : */ /*{
			return GPIOB;			
		}		
		
		case D9_PIN : 
		case A4_PIN :
		case A5_PIN : 
		case USER_BUTTON_PIN : {			
			return GPIOC;
		}		
	}
*/
}

/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/