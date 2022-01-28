#include "gpio.h"

void LED_Select(unsigned char Pin_Name,unsigned char Pin_Status)
{
	switch(Pin_Name)
	{
		case 1:
		{
			LED_1(Pin_Status);
			break;
		}
			case 2:
		{
			LED_2(Pin_Status);
			break;
		}
			case 3:
		{
			LED_3(Pin_Status);
			break;
		}
			case 4:
		{
			LED_4(Pin_Status);
			break;
		}
			case 5:
		{
			LED_5(Pin_Status);
			break;
		}
			case 6:
		{
			LED_6(Pin_Status);
			break;
		}
			case 7:
		{
			LED_7(Pin_Status);
			break;
		}
			case 8:
		{
			LED_8(Pin_Status);
			break;
		}
		
	}
		
}


void Sang_Dan(void)
{
	unsigned char 
}