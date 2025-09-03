/*
Write a program to print the sum of the first n odd numbers.
*/
#include <stdio.h>

int main() {
    int n;
    long long sum;

    printf("Enter the number of odd numbers to sum (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    sum = (long long)n * n;

    printf("The sum of the first %d odd numbers is %lld.\n", n, sum);

    return 0;
}
