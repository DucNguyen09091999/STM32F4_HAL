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

void Sang_Don(void)
{
  unsigned char i;//Sang Duoi
  unsigned char j; //Sang Dan
  Tat_LED();
  HAL_Delay(1000);

  for(j=8;j>=1;j--)
  {
    for(i=1;i<=j;i++)
     {
       LED_Select(i,1);
       HAL_Delay(1000);
       LED_Select(i,0);
  }
    LED_Select(j, 1);
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


void Sang_Don_2(void)
{
  unsigned char i; //Sang Don
  unsigned char j;//Sang Dan
  Tat_LED();
  HAL_Delay(1000);
  for (j=1;j<=8;j++)
  {
    for(i = 8; i >j;i--)
    {
      LED_Select(i, 1);
      HAL_Delay(1000);
      LED_Select(i, 0);

    }
    LED_Select(j, 1);
  }
}
