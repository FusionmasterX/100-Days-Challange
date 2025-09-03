/*
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/
#include <stdio.h>

int main() {
    double length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    if (scanf("%lf", &length) != 1 || length <= 0) {
        printf("Invalid input. Please enter a positive number for the length.\n");
        return 1;
    }

    printf("Enter the breadth of the rectangle: ");
    if (scanf("%lf", &breadth) != 1 || breadth <= 0) {
        printf("Invalid input. Please enter a positive number for the breadth.\n");
        return 1;
    }

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\n--- Rectangle Properties ---\n");
    printf("Area:      %.2lf\n", area);
    printf("Perimeter: %.2lf\n", perimeter);

    return 0;
}
