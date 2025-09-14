/*
Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
*/
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            sum += (double)(2 * i - 1) / (double)(2 * i);
        }
    }

    printf("Sum of the series up to %d terms is: %lf\n", n, sum);

    return 0;
}
