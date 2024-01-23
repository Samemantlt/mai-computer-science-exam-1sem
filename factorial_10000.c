// Игнорьте. Это просто мои попытки ускорить рассчёт факториала 10 000. На экзамене такого не должно быть

#define NUM_SIZE 60000
#define num int

#include <stdio.h>
#include <string.h>


int mul(num a[], int b, int a_len) {
    num carry = 0;
    for (int i = 0; i < a_len; i++) {
        carry += a[i] * b;
        a[i] = carry % 1000;
        carry /= 1000;
    }
    while (carry != 0) {
        a[a_len++] = carry % 1000;
        carry /= 1000;
    }
    return a_len;
}


void printNum(num* number, int numLength) {
    for (int i = numLength - 1; i >= 0; i--) {
        printf("%03i", number[i]);
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
// 9332621544394415268169923885626670049071596826438162146859296389521759999322991560894146397615651828625369792082722375825118521091686400000000
// 93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000
// 93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000