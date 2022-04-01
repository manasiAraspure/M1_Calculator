#include"stdio.h"
#include"unity.h"


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


//To test fact() function
void testFactorial()
{
    TEST_ASSERT_EQUAL(120,fact(5));
    
}