/*
Write a program to check if a number is a strong number.
*/
#include <stdio.h>

int main() {
    int n, original_num, last_digit, sum = 0;
    long fact;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original_num = n;

    while (n > 0) {
        last_digit = n % 10;
        fact = 1;
        for (int i = 1; i <= last_digit; i++) {
            fact *= i;
        }
        sum += fact;
        n /= 10;
    }

    if (sum == original_num && original_num != 0) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
