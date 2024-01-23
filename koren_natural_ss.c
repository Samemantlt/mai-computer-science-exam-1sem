// Корень в натуральной СС
/*
Натуральная СС - N палочек

Например:
3 = |||
1 = |
10 = ||||||||||
*/
#include <stdio.h>
#include "math.h"

int main()
{
    long long number = 0;
    for (long long i = 1; ; i++)
    {
        char symbol;
        scanf("%c", &symbol);
        if (symbol != '|')
            break;
        number = i;
    }

    long long root = sqrt(number);

    for (int i = 0; i < root; i++){
        printf("|");
    }

    return 0;
}