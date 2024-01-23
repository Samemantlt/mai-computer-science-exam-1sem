// Факториал 100 с учётом переполнения

#define NUM_SIZE 37000
#define num int

#include <stdio.h>
#include <string.h>


int mul(num a[], int b, int a_len) {
    num carry = 0;
    for (int i = 0; i < a_len; i++) {
        carry += a[i] * b;
        a[i] = carry % 10;
        carry /= 10;
    }
    while (carry != 0) {
        a[a_len++] = carry % 10;
        carry /= 10;
    }
    return a_len;
}


void printNum(num* number, int numLength) {
    for (int i = numLength - 1; i >= 0; i--) {
        printf("%i", number[i]);
    }
}

int main() {
    num number[NUM_SIZE];
    number[0] = 1;

    int numberLength = 1;

    for (int i = 2; i <= 10000; i++){
        numberLength = mul(number, i, numberLength);
        // printf("%i: ", i);
    }
    printNum(number, numberLength);
    printf("\n\n%i\n", numberLength);

    return 0;
}