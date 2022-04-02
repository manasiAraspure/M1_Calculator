#include <stdio.h>
#include <math.h>
// #include "function.h"
int fibonacci(long int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fibonacci(n-1) + fibonacci(n-2));
}



