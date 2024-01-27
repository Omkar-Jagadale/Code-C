// Author : Omkar Jagdale
// Emp No : 35537721

#include <stdio.h>

void palindrome(int n)
{

    int original = n;

    int rem = 0, x;

    while (n != 0)
    {

        x = n % 10;
        rem = rem * 10 + x;
        n = n / 10;
    }

    if (rem == original)
    {
        printf("This is Palindrome");
    }
    else
    {
        printf("this is not a palindrome");
    }
}

int main()
{

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    palindrome(n);
}