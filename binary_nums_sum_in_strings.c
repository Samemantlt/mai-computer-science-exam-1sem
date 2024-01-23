// Сумма длинных двоичных чисел используя строки

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NUM_SIZE 1000

void add(char* base, int at) {
    bool one = base[at] == '1';
    if (one) {
        base[at] = '0';
        add(base, at + 1);
    } else {
        base[at] = '1';
    }
}

int main(){
    char input1[NUM_SIZE];
    char input2[NUM_SIZE];

    scanf("%s", input1);
    scanf("%s", input2);

    int input1len = strlen(input1);
    int input2len = strlen(input2);

    char input1rev[NUM_SIZE];

    for (int i = 0; i < input1len; i++)
        input1rev[input1len - 1 - i] = input1[i];
        
    for (int i = input1len; i < NUM_SIZE; i++)
        input1rev[i] = '\0';

    for (int i = 0; i < input2len; i++) {
        if (input2[input2len - i - 1] == '1')
            add(input1rev, i);
    }

    for (int i = strlen(input1rev) - 1; i >= 0; i--)
        printf("%c", input1rev[i]);
}