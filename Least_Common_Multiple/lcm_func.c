#include <stdio.h>
#include "lcm.h"

int Lcm(int n1, int n2)
{
	int lcm = 0;
	int gcd = 0;
	
	for(int i = 1; i <= n1 && i <= n2; i++)
	{
		if(n1 % i == 0 && n2 % i == 0)
			gcd = i;
	}
	lcm = (n1 * n2) /gcd;

	return lcm;

}
