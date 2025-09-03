/*
Write a program to print the product of even numbers from 1 to n.
*/
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1;

    printf("Enter a positive integer (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    for (i = 2; i <= n; i += 2) {
        product *= i;
    }
    
    if (n < 2) {
         printf("There are no even numbers between 1 and %d.\n", n);
         printf("Product remains the initial value: 1\n");
    } else {
         printf("The product of even numbers from 1 to %d is %llu.\n", n, product);
    }

    return 0;
}
