// Author : Omkar Jagdale
// Emp No: 35537721

#include<stdio.h>

int main() {
    double Km;

    
    printf("Enter the distance between two cities in kilometers: ");
    scanf("%lf", &Km);

    
    double meters = Km * 1000;
    double feet = Km * 3280.84;
    double inches = Km * 39370.1;
    double centimeters = Km * 100000;

    
    printf("Distance in meters: %.2f m\n", meters);
    printf("Distance in feet: %.2f ft\n", feet);
    printf("Distance in inches: %.2f inches\n", inches);
    printf("Distance in centimeters: %.2f cm\n", centimeters);

    return 0;
}
