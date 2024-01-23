// Производная многочлена
/*
Ввод вида:
коэффициент1 степень1
коэффициент2 степень2
...
Преобразуется в
коэффициент1 * x ^ степень1 + коэффициент2 * x ^ степень2 + ...

Вывод - производная многочлена

*/


#include <stdio.h>
#include <stdbool.h>


int main()
{
    while (true)
    {
        int mnozhitel, stepen;
        scanf("%i %i", &mnozhitel, &stepen);
        if (mnozhitel == 0 && stepen == 0)
            break;
        
        printf("%ix^%i\n", mnozhitel * stepen, stepen - 1);
    }

    return 0;
}