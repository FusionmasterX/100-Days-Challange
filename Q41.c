/*
Write a program to swap the first and last digit of a number.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, first_digit, last_digit, digits, swapped_num;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 10) {
        swapped_num = n;
    } else {
        last_digit = n % 10;
        digits = (int)log10(n);
        int power_of_10 = (int)pow(10, digits);
        first_digit = n / power_of_10;

        swapped_num = last_digit * power_of_10;
        swapped_num += n % power_of_10;
        swapped_num -= last_digit;
        swapped_num += first_digit;
    }

    printf("Number after swapping first and last digit: %d\n", swapped_num);

    return 0;
}
