/*
Write a program to calculate simple and compound interest for given principal, rate, and time.
*/
#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest, amount;

    printf("Enter the principal amount: ");
    if (scanf("%lf", &principal) != 1 || principal < 0) {
        printf("Invalid input. Please enter a non-negative number for principal.\n");
        return 1;
    }

    printf("Enter the annual interest rate (in %%): ");
    if (scanf("%lf", &rate) != 1 || rate < 0) {
        printf("Invalid input. Please enter a non-negative number for the rate.\n");
        return 1;
    }

    printf("Enter the time period (in years): ");
    if (scanf("%lf", &time) != 1 || time < 0) {
        printf("Invalid input. Please enter a non-negative number for time.\n");
        return 1;
    }

    simpleInterest = (principal * rate * time) / 100.0;

    amount = principal * pow((1 + rate / 100.0), time);
    compoundInterest = amount - principal;

    printf("\n--- Interest Calculation Results ---\n");
    printf("Principal Amount: %.2lf\n", principal);
    printf("Annual Rate:      %.2lf%%\n", rate);
    printf("Time (Years):     %.2lf\n", time);
    printf("--------------------------------------\n");
    printf("Simple Interest:    %.2lf\n", simpleInterest);
    printf("Compound Interest:  %.2lf\n", compoundInterest);

    return 0;
}
