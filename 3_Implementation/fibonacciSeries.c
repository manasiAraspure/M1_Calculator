#include<stdio.h>
#include"unity.h"

int fibonacci(long int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fibonacci(n-1) + fibonacci(n-2));
}



//To test  fibonacci() function
void testFibonacci()
{
    TEST_ASSERT_EQUAL(55, fibonacci(10));
    
}