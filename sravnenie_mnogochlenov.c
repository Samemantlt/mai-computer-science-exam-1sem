// Программа сравнения многочленов
// Предполагаю, что имеется в виду сравнение значения многочленов при одинаковом аргументе

#include <math.h>
#include <stdio.h>


float calcResult(float argument) {
    int polynomLen = 0;
    scanf("%i", &polynomLen);

    float polynomResult = 0;
    for (int i = 0; i < polynomLen; i++) {
        int power;
        float coef;

        scanf("%f %i", &coef, &power);

        polynomResult += coef * pow(argument, power);
    }

    return polynomResult;
}


int main() {
    float argument = 0;
    scanf("%f", &argument);

    float res1 = calcResult(argument);
    float res2 = calcResult(argument);

    if (res1 > res2) {
        printf("Первый больше второго на %f", res1 - res2);
    }

    if (res1 < res2) {
        printf("Второй больше первого на %f", res2 - res1);
    }

    if (res1 == res2) {
        printf("Они равны со значением %f", res1);
    }
}