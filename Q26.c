/*
Write a program to print numbers from 1 to n.
*/
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("\nNumbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
