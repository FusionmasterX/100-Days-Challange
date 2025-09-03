/*
Write a program to input an integer and check whether it is even or odd using if–else.
*/
#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (number % 2 == 0) {
        printf("\nResult: %d is an even number.\n", number);
    } else {
        printf("\nResult: %d is an odd number.\n", number);
    }

    return 0;
}
