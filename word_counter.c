// Программа подсчёта слов

#include <stdio.h>
#include <string.h>


int main() {
    int count = 0;
    char current = 0;
    char previous = 0;

    while (scanf("%c", &current) != EOF) {
        if (!isspace(current)) {
            if (isspace(previous)) {
                count += 1;
            }
        }

        previous = current;
    }

    printf("Count: %i", count);
    return 0;
}