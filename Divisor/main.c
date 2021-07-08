#include <stdio.h>
#include "divisor.h"

int main()
{
	int num;
	int divisor = 0;
	scanf("%d", &num);
	if(num <= 0)
	{
		printf("ONLY NATURAL NUMBER!\n");
		return 0;
	}
	else if((num - (int)num) != 0)
	{
		printf("ONLY NATURAL NUMBER!\n");
		return 0;
	}
	divisor = Divisor(num);
	Print(divisor);
	return 0;
}	
