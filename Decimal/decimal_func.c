#include <stdio.h>
#include "decimal.h"

float Decimal(float num)
{
	float down_decimal = 0;
	
	if(num > 1)
	{
		//printf("나는 개하");

		while(num > 0)
		{
			num--;
		}
	down_decimal = num + 1;
	}	
	else if(num < 0)
	{
		//printf("이개하");
		num *= -1;
		while(num > 0)
		{
			num--;
		}
	down_decimal = num + 1;
	}
	else
	{
		//printf("개하개하\n");
		
		down_decimal = num;
	}
	if(down_decimal >= 1)
	{
		down_decimal--;
	}
		
	return down_decimal;
}
