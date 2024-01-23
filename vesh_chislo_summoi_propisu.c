// Везественное число в виде суммы прописью
// Я предполагаю что-то вида
// 153.25 = one hundred plus fifty plus three plus zero point two plus zero point o five

#include <stdio.h>

char edinici[10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char desatki[10][10] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };

void printEd(int n) {
    if (n != 0)
        printf("%s ", edinici[n]);
}

void printDes(int n) {
    if (n < 10) {
        printEd(n);
    } else {
        printf("%s plus ", desatki[n / 10]);
        printEd(n % 10);
    }
}

void printSto(int n) {
    if (n < 100) {
        printDes(n);
    } else {
        printEd(n / 100);
        printf("hundred plus ");
        printDes(n % 100);
    }
}

void printTysacha(int n) {
    if (n < 1000) {
        printSto(n);
    } else {
        printEd(n / 1000);
        printf("thousand plus ");
        printSto(n % 1000);
    }
}

float pow(float a, int pow) {
    float result = 1;
    for(int i = 0; i < pow; i++) {
        result *= a;
    }
    return result;
}

void printDrob(float n, int i) {
    int current = ((int)(n * pow(10, i))) % 10;
    if (current == 0)
        return;

    printf("plus zero point ");
    for (int j = 1; j < i; j++) {
        printf("o ");
    }
    printf("%s ", edinici[current]);
}

int main() {
    float input;
    scanf("%f", &input);
    printTysacha((int)input);

    if (((int)input) % 10 == 0) {
        printf("zero ");
    }

    for (int i = 1; i < 4; i++) {
        printDrob(input, i);
    }
}
