#include "led.h"


void LED_TEST(void)
{
	while(1){
		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_8);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_RESET);
		HAL_Delay(DELAY_TIME);
		
		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_9);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_RESET);
		HAL_Delay(DELAY_TIME);
		
		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_10);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_RESET);
		HAL_Delay(DELAY_TIME);
		
		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_11);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_RESET);
		HAL_Delay(DELAY_TIME);
		
		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_12);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_RESET);
		HAL_Delay(DELAY_TIME);
		
		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_RESET);
		HAL_Delay(DELAY_TIME);
		
		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_14);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_RESET);
		HAL_Delay(DELAY_TIME);
		
		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_15);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_RESET);
		HAL_Delay(DELAY_TIME);	
	}
}