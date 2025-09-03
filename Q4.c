/*
Write a program to calculate the area and circumference of a circle given its radius.
*/
#include <stdio.h>

int main() {
    double radius, area, circumference;
    const double PI = 3.1415926535;

    printf("Enter the radius of the circle: ");
    if (scanf("%lf", &radius) != 1 || radius <= 0) {
        printf("Invalid input. Please enter a positive number for the radius.\n");
        return 1;
    }

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("\n--- Circle Properties ---\n");
    printf("Area:          %.2lf\n", area);
    printf("Circumference: %.2lf\n", circumference);

    return 0;
}