// Author : OMKAR JAGDALE
// EMP : 35537721

#include <stdio.h>

enum Days {
    SUNDAY = 1,
    MONDAY=2,
    TUESDAY=3,
    WEDNESDAY=4,
    THURSDAY=5,
    FRIDAY=6,
    SATURDAY=7
};

int main() {
    int num;

    printf("Enter a day number : ");
    scanf("%d", &num);

    
    if (num >= SUNDAY && num <= SATURDAY) {
        
        enum Days inputDay = num;

        switch (inputDay) {
            case SUNDAY:
                printf("The day is Sunday.\n");
                break;
            case MONDAY:
                printf("The day is Monday.\n");
                break;
            case TUESDAY:
                printf("The day is Tuesday.\n");
                break;
            case WEDNESDAY:
                printf("The day is Wednesday.\n");
                break;
            case THURSDAY:
                printf("The day is Thursday.\n");
                break;
            case FRIDAY:
                printf("The day is Friday.\n");
                break;
            case SATURDAY:
                printf("The day is Saturday.\n");
                break;
        }
    } else {
        printf("Invalid day number. \n");
    }

    return 0;
}
