#include <stdio.h>
#include "lcm.h"

int main()
{
	int num1, num2;
	printf("Least Common Multiple Finder\n");
	scanf("Enter Two Numbers: %d %d", &num1, &num2);
	printf("GOTIT\n");
	printf("LCM is: %d", Lcm(num1, num2));
	return 0;
}
