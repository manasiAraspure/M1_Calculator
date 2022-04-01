#include <stdio.h>
#include <math.h>

int arithmaticOperation();
int squareAndRoots();
extern int addition(int, int);
extern int substraction(int, int);
extern int multiplication(int, int);
extern int division(int, int);
extern int modulous(int, int);
extern int fact(int);
extern int fibonacci(long);
extern int square(int);
extern int squareRoot(int);
extern int cube(int);
extern int cubeRoot(int);

int main()
{
    int choice,op;
    int digit, factorial, n, c;
    long int i = 0;
    do
    {
        printf("1: Arithmatic Operation\n2: Factorial\n3: Fibonacci Series\n4: Square, Cube and Roots \nEnter you choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            arithmaticOperation();
            break;

        case 2:
            printf("Enter the number:\n");
            scanf("%d", &digit);
            factorial = fact(digit);
            printf("Factorial of %d = %d\n", digit, factorial);
            break;

        case 3:
            printf("Enter the count of the series:\n");
            scanf("%d", &n);
            printf("Fibonacci series upto %d are :\n", n);

            for (c = 1; c <= n; c++)
            {
                printf("%d\n", fibonacci(i));
                i++;
            }
            break;

        case 4:
            squareAndRoots();
            break;

        default:
            printf("Invalid Options!!!");
            break;
        }
        printf(" \n \n ********************************************** \n ");
    } while (op != 3);
    return 0;
}

int arithmaticOperation()
{
    int choice,op;
    int number1, number2, result = 0;
  
    printf("1: Addition\n2: Substraction\n3: Multiplication\n4: Division\n5: Modulous\nEnter you choice:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the numbers:\n");
        scanf("%d %d", &number1, &number2);
        result = addition(number1, number2);
        printf("TOTAL = %d\n", result);
        break;

    case 2:
        printf("Enter the numbers:\n");
        scanf("%d %d", &number1, &number2);
        result = substraction(number1, number2);
        printf("TOTAL = %d\n", result);
        break;

    case 3:
        printf("Enter the numbers:\n");
        scanf("%d %d", &number1, &number2);
        result = multiplication(number1, number2);
        printf("TOTAL = %d\n", result);
        break;

    case 4:
        printf("Enter the numbers:\n");
        scanf("%d %d", &number1, &number2);
        result = division(number1, number2);
        printf("TOTAL = %d\n", result);
        break;

    case 5:
        printf("Enter the numbers:\n");
        scanf("%d %d", &number1, &number2);
        result = modulous(number1, number2);
        printf("TOTAL = %d\n", result);
        break;

    default:
        printf("Invalid Options");
        break;
    }
    
    return 0;
}



int squareAndRoots()
{
    int choice, op, number, result;
    printf("1: Square\n2: Square Root\n3: Cube\n4: Cube Root\nEnter you choice:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the number to be Squared:\n");
        scanf("%d", &number);
        result = square(number);
        printf("The Square of %d = %d\n", number, result);
        break;

    case 2:
        printf("Enter the number:\n");
        scanf("%d", &number);
        result = squareRoot(number);
        printf("The Square Root of %d = %d\n", number, result);
        break;

    case 3:
        printf("Enter the number:\n");
        scanf("%d", &number);
        result = cube(number);
        printf("Cube of %d = %d\n", number, result);
        break;

    case 4:
        printf("Enter the number:\n");
        scanf("%d", &number);
        result = cubeRoot(number);
        printf("The Cube Root of %d = %d\n", number, result);
        break;

    default:
        printf("Enter valid Option!!! I.e: 1: Square\n2: Square Root\n3: Cube\n4: Cube Root\n");
        break;
    }
    
}
