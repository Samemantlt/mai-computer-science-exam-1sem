// Программа перевода МТ в пятерках в МТ в четвёрках
/*
Пример ввода:
3
0 1 2 < 0
0 2 3 < 1
1 3 1 < 0
*/

#include <stdio.h>

int main()
{
    int lines;
    scanf("%i", &lines);
    for (int i =0; i < lines; i++){
        char oldState[100];
        char newState[100];
        char oldSymbol, newSymbol, dir;

        scanf("%s %c %c %c %s", &oldState, &oldSymbol, &newSymbol, &dir, &newState);
        
        printf("%s %c %c %s_\n", oldState, oldSymbol, newSymbol, oldState);
        printf("%s_ %c %c %s\n", oldState, newSymbol, dir, newState);
    }

    return 0;
}