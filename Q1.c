/*
Write a program to input two numbers and display their sum.
*/
#include <stdio.h>

int main() {
    double num1, num2, sum;

    printf("Enter the first number: ");

    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input. Please run the program again and enter a valid number.\n");
        return 1;
    }

    printf("Enter the second number: ");

    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input. Please run the program again and enter a valid number.\n");
        return 1;
    }

    sum = num1 + num2;

    printf("The sum of %.2lf and %.2lf is: %.2lf\n", num1, num2, sum);

    return 0;
}