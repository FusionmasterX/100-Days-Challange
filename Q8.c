/*
Write a program to find and display the sum of the first n natural numbers.
*/
#include <stdio.h>

int main() {
    int n;
    long long sum = 0;

    printf("Enter a positive integer (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    sum = (long long)n * (n + 1) / 2;

    printf("\n--- Calculation Result ---\n");
    printf("The sum of the first %d natural numbers is %lld.\n", n, sum);

    return 0;
}
