// Author : Omkar Jagdale
// Emp No : 35537721

#include <stdio.h>

int prime(int N)
{

    printf("Prime number from 1 - %d are : \n", N);

    for (int i = 2; i < N; i++)
    {
        int j;
        for (j = 2; i > j; j++)
        {
            if (i % j == 0)
            {

                break;
            }
        }
        if (i == j)
        {
            printf("%d, ", i);
        }
    }
}

int main()
{

    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    prime(N);

    return 0;
}
