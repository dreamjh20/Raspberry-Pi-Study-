#include <stdio.h>
#include "divisor.h"

int Divisor(int num)
{
	int count = 0;
	for(int i = num; i > 0; i--)
	{
		if(num % i == 0)
			count++;
	}
	return count;
}
