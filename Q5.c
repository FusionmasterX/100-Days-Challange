/*
Write a program to convert temperature from Celsius to Fahrenheit.
*/
#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    if (scanf("%lf", &celsius) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("\n--- Temperature Conversion ---\n");
    printf("%.2lf degrees Celsius is equal to %.2lf degrees Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
