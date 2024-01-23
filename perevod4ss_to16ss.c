// Программа перевода 4-ричной сс в 16-ричную

#include <stdio.h>
#include "string.h"

int main()
{
    char ALPHABET[] = "0123456789abcdef";
    
    char input[1000];
    scanf("%s", &input);
    int size = strlen(&input);
    if (size % 2 == 1)
        printf("%c", input[0]);
    
    int index = size % 2;
    while (index < size) {
        int current = (input[index] - '0') * 4 + (input[index + 1] - '0');
        printf("%c", ALPHABET[current]);
        index += 2;
    }

    return 0;
}