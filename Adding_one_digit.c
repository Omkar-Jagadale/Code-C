#include <stdio.h>

int main() {
    int number, originalNumber, remainder, result = 0, power = 1;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    originalNumber = number;

    while (number > 0) {
        remainder = number % 10; 
        remainder = (remainder + 1) % 10; 
        result = result + remainder * power;
        power *= 10; 
        number = number / 10;
    }

    
    printf("Original number: %d\n", originalNumber);
    printf("Modified number: %d\n", result);

    return 0;
}
