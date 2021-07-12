#include <stdio.h>
#include "lcm.h"

int Lcm(int n1, int n2)
{
	int lcm = 2;
	while(1)
	{
		printf("*\n");
		
		if(lcm % n1 == 0 && lcm % n2 == 0)
			break;
		lcm++;
	}
	return lcm;

}
