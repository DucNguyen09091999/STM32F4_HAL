/*
 * gpio.c
 *
 *  Created on: Jan 28, 2022
 *      Author: Nguyen Chi Duc

 */

#include "gpio.h"

void LED_Select(unsigned char LED_Name,unsigned char LED_Status)
{
  switch(LED_Name)
  {
    case 1:
    {
      LED_1(LED_Status);
      break;
    }

    case 2:
      {
        LED_2(LED_Status);
        break;
      }

    case 3:
      {
        LED_3(LED_Status);
        break;
      }

    case 4:
      {
        LED_4(LED_Status);
        break;
      }

    case 5:
    {
      LED_5(LED_Status);
      break;
    }

    case 6:
      {
        LED_6(LED_Status);
        break;
      }

    case 7:
      {
        LED_7(LED_Status);
        break;
      }

    case 8:
      {
        LED_8(LED_Status);
        break;
      }
  }
}



void Sang_Dan(void)
{
  unsigned char i;
  Tat_LED();
    for (i=1; i <=8;i++)
    {
      LED_Select(i,1);
      HAL_Delay(1000);
    }

}


void Tat_LED(void)
{
  unsigned char i;
    for(i=1;i<=8;i++)
    {
      LED_Select(i,0);
    }
}
void Bat_LED(void)
{
  unsigned char i;
    for(i=1;i<=8;i++)
    {
      LED_Select(i,1);
    }

}
