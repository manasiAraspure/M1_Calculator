#include"stdio.h"
#include"unity.h"


int addition(int num1,int num2)
{
    int sum=0;
    sum= num1+num2;
    return(sum); 
}

int substraction(int num1,int num2)
{ 
    int sub=0;
    sub=num1-num2;
    return(sub);
}

int multiplication(int num1,int num2)
{
    int mul=0;
    if(num1==0 ||num2==0)
    {
        printf("Any number multiplies with '0' is equals to 0!!!\n");
    }
    else
    {
        mul=num1*num2;
        
    }
    return(mul);
}

int division(int num1,int num2)
{
    int res=0;
    if(num2 == 0)
    {
        printf("Divisor can not be zero!!!\n");
    }
    else{
        res=num1/num2;
        
    }
    return(res);
}

int modulous(int num1,int num2)
{
    float mod;
    if(num2 == 0)
    {
        printf("Divisor can not be zero!!!\n");
    }
    else{
        mod=num1%num2;
    }    
    return(mod);
}

//To test addition() function
void testAddition()
{
    TEST_ASSERT_EQUAL(0,addition(0,0));
    TEST_ASSERT_EQUAL(20,addition(10,10));
    
}

//To test substraction() function
void testSubstraction()
{
    // TEST_ASSERT_EQUAL(0,substraction(0,0));
    TEST_ASSERT_EQUAL(0,substraction(10,10));
    
}

//To test multiplication() function
void testMultiplictaion()
{
    TEST_ASSERT_EQUAL(20,multiplication(2,10));
    
}

//To test division() function
void testDivision()
{
    TEST_ASSERT_EQUAL(5,division(10,2));
    
}

//To test modulous() function
void testModulous()
{
    TEST_ASSERT_EQUAL(0,modulous(10,10));
    
}