// Author : Omkar Jagdale
// Emp No : 35537721

#include <stdio.h>

typedef int (*Operation)(int, int);

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{

    if (b == 0)
    {
        printf("Division by zero\n");
        return 0.0;
    }
    return a / b;
}

int main()
{

    Operation operations[] = {add, subtract, multiply, divide};

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    int choice;
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4)
    {
        printf("Invalid choice. Exiting...\n");
        return 1;
    }

    double num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    double result = operations[choice - 1](num1, num2);

    printf("Result: %d\n", result);

    return 0;
}
