#include <stdio.h>
#include "facto.h"

int main()
{
    int num;
    scanf("%d", &num);
    if(num <= 0)
    {
        printf("ONLY POSITIVE NUMBER!\n");
        return 0;
    }
    else
    {
        printf("%d\n", Factorial(num));
    }
    return 0;
}
