/*
Write a program to input a year and check whether it is a leap year or not using conditional statements.
*/
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    if (scanf("%d", &year) != 1 || year <= 0) {
        printf("Invalid input. Please enter a valid positive year.\n");
        return 1;
    }

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("\nResult: %d is a leap year.\n", year);
    } else {
        printf("\nResult: %d is not a leap year.\n", year);
    }

    return 0;
}
