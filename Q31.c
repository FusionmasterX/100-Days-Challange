/*
Write a program to take a number as input and print its equivalent binary representation.
*/
#include <stdio.h>

void toBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    
    int binaryNum[32];
    int i = 0;
    
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    printf("Binary representation: ");
    toBinary(num);
    printf("\n");
    
    return 0;
}
