/*
Write a program to reverse a given number.
*/
#include <stdio.h>

int main() {
    int n, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    int originalNumber = n;

    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    printf("The reverse of %d is %d.\n", originalNumber, reversedNumber);

    return 0;
}
