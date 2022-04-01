#include "unity.h"
extern void testAddition();
extern void testSubstraction();
extern void testMultiplictaion();
extern void testDivision();
extern void testModulous();
extern void testFibonacci();
extern void testFactorial();
extern void testSquare();
extern void testSquareRoot();
extern void testCube();
extern void testCubeRoot();

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
