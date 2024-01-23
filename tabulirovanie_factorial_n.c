// Табулирование факториала
// Табулирование функции - вычисление функции для всех аргументов от одного заданного числа до другого с заданным шагом
/*
Табулирование функции F на примере python
Python-like:
start = int(input())
end = int(input())
step = int(input())

for i in range(start, end, step):
    print(f'{i}: {F(i)}')
*/

#include <stdio.h>

int main()
{
    int start, end, step;
    scanf("%i", &start);
    scanf("%i", &end);
    scanf("%i", &step);

    long long current = 1;
    for (int i = 1; i <= end; i++)
    {
        current *= i;

        if (i >= start) {
            if (i % step == 0) {
                printf("%i: %i\n", i, current);
            }
        }
    }
    

    return 0;
}