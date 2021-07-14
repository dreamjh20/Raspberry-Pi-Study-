#include <stdio.h>
#include "password.h"

int main()
{
	char str[20] = {0, };
	int S = 0;
	printf("Enter String: ");
	scanf("%s", str);
	printf("Enter 1 to Make, 2 to Solve: ");
	scanf("%d", &S);
	if(S == 1)
	{
		Make(str);
	}
	else if(S == 2)
	{
		Solve(str);
	}
	else
	{
		printf("Input ERROR!\n");
		return 0;
	}
	return 0;
}

