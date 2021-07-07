#include <stdio.h>
#include "decimal.h"

float Decimal(float num)
{
	float down_decimal = 0;
	
	if(num > 1)
	{
		printf("나는 개하");

		while(num > 0)
		{
			num--;
		}
	}	
	else if(num < 0)
	{
		printf("이개하");
		num *= -1;
		while(num > 0)
		{
			num--;
		}
	}
	else
	{
		return num;
	}
	down_decimal = num + 1;
	return down_decimal;
}
