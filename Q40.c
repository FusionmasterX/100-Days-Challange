/*
Write a program to find the 1’s complement of a binary number and print it.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char binary_num[100], ones_comp[100];
    int i, error = 0;

    printf("Enter a binary number: ");
    scanf("%s", binary_num);

    for (i = 0; i < strlen(binary_num); i++) {
        if (binary_num[i] == '0') {
            ones_comp[i] = '1';
        } else if (binary_num[i] == '1') {
            ones_comp[i] = '0';
        } else {
            printf("Error: Invalid binary input.\n");
            error = 1;
            break;
        }
    }
    ones_comp[i] = '\0';

    if (error == 0) {
        printf("1's complement of %s is %s\n", binary_num, ones_comp);
    }

    return 0;
}
