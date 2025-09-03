/*
Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
*/
#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (number == 0) {
        printf("\nResult: The number is zero.\n");
    } else {
        if (number > 0) {
            printf("\nResult: The number is positive.\n");
        } else {
            printf("\nResult: The number is negative.\n");
        }
    }

    return 0;
}
