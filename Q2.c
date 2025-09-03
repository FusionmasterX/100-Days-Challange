/*
Write a program to input two numbers and display their sum, difference, product, and quotient.
*/
#include <stdio.h>

int main() {
    double num1, num2, sum, difference, product, quotient;

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
    difference = num1 - num2;
    product = num1 * num2;

    printf("\n--- Results ---\n");
    printf("Sum:         %.2lf + %.2lf = %.2lf\n", num1, num2, sum);
    printf("Difference:  %.2lf - %.2lf = %.2lf\n", num1, num2, difference);
    printf("Product:     %.2lf * %.2lf = %.2lf\n", num1, num2, product);

    if (num2 == 0) {
        printf("Quotient:    Cannot divide by zero.\n");
    } else {
        quotient = num1 / num2;
        printf("Quotient:    %.2lf / %.2lf = %.2lf\n", num1, num2, quotient);
    }

    return 0;
}
