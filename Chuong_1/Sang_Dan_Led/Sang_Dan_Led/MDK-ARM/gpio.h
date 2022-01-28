#ifndef __PERIPHERAL_GPIO_H_
#define __PERIPHERAL_GPIO_H_

#include "main.h"

//define LED Pin for portB
#define LED_1(Pin_State)			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,Pin_State)
#define LED_2(Pin_State)			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,Pin_State)
#define LED_3(Pin_State)			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_14,Pin_State)
#define LED_4(Pin_State)			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_15,Pin_State)

//define LED Pin for portD
#define LED_5(Pin_State)			HAL_GPIO_WritePin(GPIOD,GPIO_PIN_12,Pin_State)
#define LED_6(Pin_State)			HAL_GPIO_WritePin(GPIOD,GPIO_PIN_13,Pin_State)
#define LED_7(Pin_State)			HAL_GPIO_WritePin(GPIOD,GPIO_PIN_14,Pin_State)
#define LED_8(Pin_State)			HAL_GPIO_WritePin(GPIOD,GPIO_PIN_15,Pin_State)


void LED_Select(unsigned char Pin_Name,unsigned char Pin_State);
void Sang_Dan(void);



#endif