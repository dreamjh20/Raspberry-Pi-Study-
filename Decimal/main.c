#include <stdio.h>
#include "decimal.h"

int main()
{
	float num;
	scanf("%f", &num);
	printf("%f\n", Decimal(num));
	return 0;
}
