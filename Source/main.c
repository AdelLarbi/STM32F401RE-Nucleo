/**
  ******************************************************************************
  * @file    Pstl/Source/main.c 
  * @author  Adel LARBI (adel.larbi@etu.upmc.fr)
  * @version V1.0.0
  * @date    ??-April-2015
  * @brief   This example describes how to use digital-in through the 
  *          STM32F4xx_HAL API and the STM32F401RE_UMPC library.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2015 UPMC</center></h2>
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32f401re_upmc_digitalIn.h"
#include "stm32f401re_upmc_led_sample.h"

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void) {
		
	configureLed2Pin();    
    initDigitalIn(USER_BUTTON_PIN);

	while (true) {
		if (isActive(USER_BUTTON_PIN)) {								  			
			turnOnLed2();
		} else {
			turnOffLed2();
		}
	}		
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/























/*
#include "stm32f401re_upmc_digitalIn.h"
#include "stm32f401re_upmc_led_sample.h"

int main(void) {
		
	configureLed2Pin();    
    configurePin(USER_BUTTON_PIN);

	int count = 0;
		
	while (true) {
		if (isActive(USER_BUTTON_PIN)) {								  						
			if (count%5000000 == 0) { turnOffLed2(); count = 0; }
			if (count%5000000 == 250000) { turnOnLed2(); }
			if (count%5000000 == 300000) { turnOffLed2(); }
			if (count%5000000 == 350000) { turnOnLed2(); }
			if (count%5000000 == 400000) { turnOffLed2(); }
			if (count%5000000 == 450000) { turnOnLed2(); }
			if (count%5000000 == 500000) { turnOffLed2(); }
			count++;
		} else {
			turnOffLed2();
			count = 0;
		}
	}
}
*/






































/*
#include "stm32f401re_upmc_analogIn.h"

int main(void) {
			
    initAnalogIn(GPIO_PIN_7);

	while (true) {
		if (read(GPIO_PIN_7) > 0.5) {								  			
			// do something..
		}
	}
}
*/