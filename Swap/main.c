#include <stdio.h>
#include "swap.h"

int main()
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	Swap(&n1, &n2);
	printf("%d %d\n", n1, n2);
	return 0;
}
