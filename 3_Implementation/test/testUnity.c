#include "unity.h"
#include "function.h"

void testAddition(void);
void testSubstraction(void);
void testMultiplictaion(void);
void testDivision(void);
void testModulous(void);
void testFibonacci(void);
void testFactorial(void);
void testSquare(void);
void testSquareRoot(void);
void testCube(void);
void testCubeRoot(void);

void setUp(void)
{
}

void tearDown(void)
{
}

int main(void)
{
    UnityBegin(NULL);
    RUN_TEST(testAddition);

    RUN_TEST(testSubstraction);

    RUN_TEST(testMultiplictaion);

    RUN_TEST(testDivision);

    RUN_TEST(testModulous);

    RUN_TEST(testFactorial);

    RUN_TEST(testFibonacci);

    RUN_TEST(testSquare);

    RUN_TEST(testSquareRoot);

    RUN_TEST(testCube);

    RUN_TEST(testCubeRoot);
    return (UnityEnd());
}

// To test addition() function
void testAddition(void)
{
    TEST_ASSERT_EQUAL(0, addition(0, 0));
    TEST_ASSERT_EQUAL(20, addition(10, 10));
}

// To test substraction() function
void testSubstraction(void)
{
    // TEST_ASSERT_EQUAL(0,substraction(0,0));
    TEST_ASSERT_EQUAL(0, subtraction(10, 10));
}

// To test multiplication() function
void testMultiplictaion(void)
{
    TEST_ASSERT_EQUAL(20, multiplication(2, 10));
}

// To test division() function
void testDivision(void)
{
    TEST_ASSERT_EQUAL(5, division(10, 2));
}

// To test modulous() function
void testModulous(void)
{
    TEST_ASSERT_EQUAL(0, modulous(10, 10));
}

// To test fact() function
void testFactorial(void)
{
    TEST_ASSERT_EQUAL(120, fact(5));
}

// To test  fibonacci() function
void testFibonacci(void)
{
    TEST_ASSERT_EQUAL(55, fibonacci(10));
}

// To test  square() function
void testSquare(void)
{
    TEST_ASSERT_EQUAL(25, square(5));
}

// To test  squareRoot() function
void testSquareRoot(void)
{
    TEST_ASSERT_EQUAL(5, squareRoot(25));
}

// To test cube() function
void testCube(void)
{
    TEST_ASSERT_EQUAL(27, cube(3));
}

// To test  fibonacci() function
void testCubeRoot(void)
{
    TEST_ASSERT_EQUAL(3, cubeRoot(27));
}