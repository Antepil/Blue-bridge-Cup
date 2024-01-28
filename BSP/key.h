#ifndef __KEY_H
#define __KEY_H


#define KEY_B1 HAL_GPIO_ReadPin(GPIOB , GPIO_PIN_0)
#define KEY_B2 HAL_GPIO_ReadPin(GPIOB , GPIO_PIN_1)
#define KEY_B3 HAL_GPIO_ReadPin(GPIOB , GPIO_PIN_2)
#define KEY_B4 HAL_GPIO_ReadPin(GPIOA , GPIO_PIN_0)

#define B1_Press 1
#define B2_Press 2
#define B3_Press 3
#define B4_Press 4


int Key_Scan(int mode);





#endif