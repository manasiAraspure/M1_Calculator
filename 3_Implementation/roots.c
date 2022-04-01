#include <stdio.h>
#include <math.h>
#include"unity.h"


int square(int number)
{
    return  number * number;
}

int squareRoot(int number)
{
    return(sqrt(number));
}

int cube( int number)
{
    return(number * number * number);
}

int cubeRoot(int num)
{
        return(cbrt(num));
}



//To test  square() function
void testSquare()
{
    TEST_ASSERT_EQUAL(25, square(5));
    
}

//To test  squareRoot() function
void testSquareRoot()
{
    TEST_ASSERT_EQUAL(5, squareRoot(25));
    
}

//To test cube() function
void testCube()
{
    TEST_ASSERT_EQUAL(27, cube(3));
    
}

//To test  fibonacci() function
void testCubeRoot()
{
    TEST_ASSERT_EQUAL(3,cubeRoot(27));
    
}