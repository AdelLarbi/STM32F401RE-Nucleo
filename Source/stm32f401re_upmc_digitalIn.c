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

/* Includes ----------------------------------------------------------------- */
#include "stm32f401re_upmc_private_digitalIn.h"
#include "stm32f401re_upmc_digitalIn.h"

/* Digital Pin Table -----------------------------------------------------------
 * USER  :  GPIO_PIN_13
 * D0    :  GPIO_PIN_3
 * D1    :  GPIO_PIN_2
 * D2    :  GPIO_PIN_10
 * D3    :  GPIO_PIN_3
 * D4    :  GPIO_PIN_5
 * D5    :  GPIO_PIN_4
 * D6    :  GPIO_PIN_10
 * D7    :  GPIO_PIN_8
 * D8    :  GPIO_PIN_9
 * D9    :  GPIO_PIN_7
 * D10   :  GPIO_PIN_6
 * D11   :  GPIO_PIN_7
 * D12   :  GPIO_PIN_6
 * D13   :  GPIO_PIN_5
 * D14   :  GPIO_PIN_9
 * D15   :  GPIO_PIN_8
 * -------------------------------------------------------------------------- */

/* Digital Port Table ----------------------------------------------------------
 * USER :  GPIOC
 * D0   :  GPIOA
 * D1   :  GPIOA
 * D2   :  GPIOA
 * D3   :  GPIOB
 * D4   :  GPIOB
 * D5   :  GPIOB
 * D6   :  GPIOB
 * D7   :  GPIOA
 * D8   :  GPIOA
 * D9   :  GPIOC
 * D10  :  GPIOB
 * D11  :  GPIOA
 * D12  :  GPIOA
 * D13  :  GPIOA
 * D14  :  GPIOB
 * D15  :  GPIOB
 * -------------------------------------------------------------------------- */

/* Private functions -------------------------------------------------------- */
/**
  * @brief Initializes a default digital-in 
  * @GPIO_Pin: specifies the port bit to initialize. Possible values: 
  * 			  PINx, USER_BUTTON or ALLPIN, where x[0..15].
  * @retval ...
  */
void initDigitalIn(Digital_TypeDef digitalIn_pin) 
{	
	if (true) 
	{
		enableClock(digitalIn_pin);	
		createStruct(digitalIn_pin);
		initialiseStruct(digitalIn_pin);
	}
}
	
/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */
static void enableClock(Digital_TypeDef digitalIn_pin) 
{
	Port_TypeDef GPIOx = getDigitalInPort(digitalIn_pin);

	switch (GPIOx) 
	{
		case Port_A :
		{
			__GPIOA_CLK_ENABLE();
			break;
		}
		case Port_B :
		{
			__GPIOB_CLK_ENABLE();
			break;
		}
		case Port_C :
		{
			__GPIOC_CLK_ENABLE();
			break;
		}
	}
}

/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */  
static Port_TypeDef getDigitalInPort(Digital_TypeDef digitalIn_pin) 
{
  	switch (digitalIn_pin) 
  	{
		case D0 : 
		case D1 : 
		case D2 :
		case D7 : 
		case D8 : 
		case D11 :
		case D12 :
		case D13 :
		{			
			return Port_A;			
		}
		case D3 :
		case D4 :
		case D5 : 
		case D6 : 
		case D10 : 
		case D14 :
		case D15 :
		{			
			return Port_B;
		}
		case D9 :
		case USER : 
		{
			return Port_C;
		}
		default :
		{
			return -1;
		}
	}		
}

/**
  * @brief ...
  * @GPIO_Pin: specifies the port bit to initialize. Possible values: 
  * 			  PINx, USER_BUTTON or ALLPIN, where x[0..15].
  * @retval ...
  */	
static void createStruct(Digital_TypeDef digitalIn_pin) 
{
	if (true) 
	{
		uint16_t GPIOx_pin = getDigitalInPin(digitalIn_pin);
		GPIO_InitStruct.Pin   = GPIOx_pin;
	    GPIO_InitStruct.Mode  = GPIO_MODE_INPUT;
	    GPIO_InitStruct.Pull  = GPIO_PULLDOWN;
	    GPIO_InitStruct.Speed = GPIO_SPEED_FAST;	
	}
}			

/**
  * @brief ... 
  * @GPIO_Pin: specifies the port bit to initialize. Possible values: 
  * 			  PINx, USER_BUTTON or ALLPIN, where x[0..15].
  * @retval ...
  */
static void initialiseStruct(Digital_TypeDef digitalIn_pin) 
{		
	Port_TypeDef GPIOx = getDigitalInPort(digitalIn_pin);

	switch (GPIOx) 
	{
		case Port_A :
		{
			HAL_GPIO_Init(GPIOA, &GPIO_InitStruct); 
			break;
		}
		case Port_B :
		{
			HAL_GPIO_Init(GPIOB, &GPIO_InitStruct); 
			break;
		}
		case Port_C :
		{
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
GPIO_PinState isActiveDigitalIn(Digital_TypeDef digitalIn_pin) 
{
	Port_TypeDef GPIOx_port = getDigitalInPort(digitalIn_pin);
	uint16_t GPIOx_pin = getDigitalInPin(digitalIn_pin);

	switch (GPIOx_port) 
	{
		case Port_A :
		{
			return !HAL_GPIO_ReadPin(GPIOA, GPIOx_pin);			
		}
		case Port_B :
		{
			return !HAL_GPIO_ReadPin(GPIOB, GPIOx_pin);
		}
		case Port_C :
		{
			return !HAL_GPIO_ReadPin(GPIOC, GPIOx_pin);
		}
		default : 
		{
			return -1;
		}
	}
}	

/**
  * @brief  ...
  * @param  ...
  * @retval ...
  */  
static uint16_t getDigitalInPin(Digital_TypeDef digitalIn_pin) 
{
  	switch (digitalIn_pin) 
  	{  	
  		case USER :
		{
			return GPIO_PIN_13;
		}
		case D0 :
		case D3 :
		{
			return GPIO_PIN_3;
		} 
		case D1 :
		{
			return GPIO_PIN_2;
		}  
		case D2 :
		case D6 :
		{
			return GPIO_PIN_10;
		}
		case D4 : 
		case D13 :
		{
			return GPIO_PIN_5;
		} 
		case D5 :
		{
			return GPIO_PIN_4;
		}
		case D7 :
		case D15 :
		{
			return GPIO_PIN_8;
		} 
		case D8 :
		case D14 :
		{
			return GPIO_PIN_9;
		} 
		case D9 :
		case D11 :
		{
			return GPIO_PIN_7;
		} 
		case D10 :
		case D12 :
		{
			return GPIO_PIN_6;
		}
		default :
		{
			return 99;
		}
	}		
}
/************************ (C) COPYRIGHT UPMC *******************END OF FILE****/