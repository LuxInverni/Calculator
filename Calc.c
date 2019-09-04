#include "stdio.h"
int main(void)
{   float x, y;
    printf("Calculator\nPlease Input 2 numbers:");
    scanf("%f %f", &x, &y);
    printf("x + y = %f\n", x+y);
    printf("x - y = %f\n", x-y);
    printf("x * y = %f\n", x*y);
    printf("x / y = %f\n", x/y);
    return 0;
}

//Takes any two numbers and gives the addition, minus, division and multiplation values.
