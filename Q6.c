/*
Write a program to swap two numbers using a third variable.
*/
#include <stdio.h>

int main() {
    double num1, num2, temp;

    printf("Enter the first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    printf("\n--- Before Swapping ---\n");
    printf("First Number  = %.2lf\n", num1);
    printf("Second Number = %.2lf\n", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\n--- After Swapping ---\n");
    printf("First Number  = %.2lf\n", num1);
    printf("Second Number = %.2lf\n", num2);

    return 0;
}
