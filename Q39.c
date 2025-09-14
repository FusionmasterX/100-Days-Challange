/*
Write a program to find the product of odd digits of a number.
*/
#include <stdio.h>

int main() {
    int n, product = 1, remainder, original_num;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original_num = n;

    if (n == 0) {
        product = 0;
    }

    while (n != 0) {
        remainder = n % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
        }
        n /= 10;
    }

    printf("Product of the odd digits of %d is %d.\n", original_num, product);

    return 0;
}
