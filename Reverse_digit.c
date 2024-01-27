// Author : Omkar Jagdale
// EMP No : 35537721

#include <stdio.h>

void reverse(int n)
{

    int original = n;

    int rem = 0, x;

    while (n != 0)
    {

        x = n % 10;
        rem = rem * 10 + x;
        n = n / 10;
    }

    printf("%d", rem);
}

int main()
{

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    reverse(n);
}