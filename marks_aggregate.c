// Author : Omkar Jagdale
// Emp No : 35537721

#include <stdio.h>

int main()
{
    float subjectMarks[5];
    float totalMarks = 0;

    printf("Enter marks for five subjects:\n");

    for (int i = 0; i < 5; ++i)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &subjectMarks[i]);

        if (subjectMarks[i] < 0 || subjectMarks[i] > 100)
        {
            printf("Invalid input! Marks should be between 0 and 100.\n");
            break;
        }

        totalMarks += subjectMarks[i];
    }

    float percentage = (float)totalMarks / 5;

    printf("\nAggregate Marks: %.2f\n", totalMarks);
    printf("Percentage Marks: %.2f%%\n", percentage);

    return 0;
}
