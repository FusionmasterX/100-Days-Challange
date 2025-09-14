/*
Write a program to check if a number is a perfect number.
*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("%d is not a perfect number.\n", n);
        return 0;
    }

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}
