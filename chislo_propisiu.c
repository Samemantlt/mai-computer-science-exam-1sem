// Спеллинг числа

#include <stdio.h>


char edinici[10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char desatki[30][10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
char desatki2[30][10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };

void printEd(int n) {
    if (n != 0)
        printf("%s ", edinici[n]);
}

void printDes(int n) {
    if (n < 10) {
        printEd(n % 10);
        return;
    }
    if (n < 20) {
        printf("%s ", desatki[n - 10]);
        return;
    }
    printf("%s ", desatki2[n / 10]);
    printEd(n % 10);
}

void printSto(int n) {
    printEd(n / 100);
    printf("hundred ");
    printDes(n % 100);
}

void printTysacha(int n) {
    printEd(n / 1000);
    printf("thousand ");
    printSto(n % 1000);
}

void printNum(int input) {
    if (input >= 1000) {
        printTysacha(input);
    } else if (input >= 100) {
        printSto(input);
    } else if (input >= 10) {
        printDes(input);
    } else if (input >= 1) {
        printEd(input);
    } else {
        printf("zero");
    }
}

int main() {
    printNum(107);
}