// Author : Omkar Jagdale
// EMP no : 35537721

#include <stdio.h>
#include <stdarg.h>


double average(int num, ...) {
    va_list args;
    va_start(args, num);

    double sum = 0.0;
    
    for (int i = 0; i < num; i++) {
        sum += va_arg(args, double);
    }

    va_end(args);

    return sum / num;
}

int main() {
    
    printf("Average of 2, 4, 6: %.2f\n", average(3, 3.0, 5.0, 7.0));
    printf("Average of 10, 20, 30, 40: %.2f\n", average(4, 10.0, 20.0, 30.0, 40.0));
    printf("Average of 5, 7, 9, 11, 13: %.2f\n", average(5, 5.0, 7.0, 9.0, 11.0, 13.0));

    return 0;
}
