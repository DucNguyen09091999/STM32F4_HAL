/*
 * gpio.h
 *
 *  Created on: Jan 28, 2022
 *      Author: Nguyen Chi Duc

 */

#ifndef INC_GPIO_H_
#define INC_GPIO_H_

#include "main.h"


//define led pin for portD
#define LED_1(LED_Status)         HAL_GPIO_WritePin(GPIOD,GPIO_PIN_12,LED_Status)
#define LED_2(LED_Status)         HAL_GPIO_WritePin(GPIOD,GPIO_PIN_13,LED_Status)
#define LED_3(LED_Status)         HAL_GPIO_WritePin(GPIOD,GPIO_PIN_14,LED_Status)
#define LED_4(LED_Status)         HAL_GPIO_WritePin(GPIOD,GPIO_PIN_15,LED_Status)


//define led pin for portD
#define LED_5(LED_Status)         HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,LED_Status)
#define LED_6(LED_Status)         HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,LED_Status)
#define LED_7(LED_Status)         HAL_GPIO_WritePin(GPIOB,GPIO_PIN_14,LED_Status)
#define LED_8(LED_Status)         HAL_GPIO_WritePin(GPIOB,GPIO_PIN_15,LED_Status)

void LED_Select(unsigned char LED_Name,unsigned char LED_Status);
void Sang_Dan(void);
void Tat_LED(void);
void Bat_LED(void);
#endif /* INC_GPIO_H_ */
