/*
Write a program to find the sum of digits of a number.
*/
#include <stdio.h>

int main() {
    int n, sum = 0, remainder, original_num;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original_num = n;

    while (n != 0) {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }

    printf("Sum of the digits of %d is %d.\n", original_num, sum);

    return 0;
}
