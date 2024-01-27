#include <stdio.h>
#include <ctype.h>

#define SIZE 26 // Assuming only English alphabet letters

int main() {
    char inputString[100];
    int letterCount[SIZE] = {0};

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    for (int i = 0; inputString[i] != '\0'; i++) {
        if (isalpha(inputString[i])) {
            char c = tolower(inputString[i]);
            letterCount[c - 'a']++;
        }
    }
    
    for (int i = 0; i < SIZE; i++) {
        if (letterCount[i] > 0) {
            printf("%c: %d\n", 'a' + i, letterCount[i]);
        }
    }

    return 0;
}
