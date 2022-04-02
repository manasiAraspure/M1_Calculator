#include <stdio.h>
#include <math.h>
// #include "function.h"

int fact(int num)
{
    if(num==0 || num==1)
    {
        return 1;
    }
    else
    {
        return(num * fact(num-1));
    }
}


