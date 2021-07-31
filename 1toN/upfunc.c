#include <stdio.h>
#include "1toN.h"

int upfunc(int n, int check)
{
	if(n == check)
	{
		printf("%d\n", n);
		return 0;
	}
	else
	{
		printf("%d\n", check);
		check++;
		upfunc(n, check);
	}
}
