#include <stdio.h>
#include "password.h"

char Solve(char str[])
{
	char str2[20] = {0, };
	for(int i = 0; str[i] != '\0'; i++)
	{
		str2[i] = str[i] - 23;
	}
	printf("%s\n", str2);
	return 0;
}
