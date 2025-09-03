/*
Write a program to input time in seconds and convert it to hours:minutes:seconds format.
*/
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds, remainingSeconds;

    printf("Enter time in total seconds: ");
    if (scanf("%d", &totalSeconds) != 1 || totalSeconds < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    hours = totalSeconds / 3600;
    remainingSeconds = totalSeconds % 3600;
    minutes = remainingSeconds / 60;
    seconds = remainingSeconds % 60;

    printf("\n--- Converted Time ---\n");
    printf("The time is: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
