#include <stdio.h>
#include <math.h>
// #include "function.h"
int division(int num1, int num2)
{

    if (num2 == 0)
    {
        printf("Divisor can not be zero!!!\n");
    }
    else
    {
        return num1 / num2;
    }
}