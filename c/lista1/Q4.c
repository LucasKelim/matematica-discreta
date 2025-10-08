// Seja um vetor V(n) de inteiros.
// a) elabore uma estratégia recuriva para obter a soma dos elementos de v;
// b) escreva o pseudocódigo desta estratégia para n = 10;

#include "conio.h"
#include "stdio.h"
#include "stdbool.h"

int f(int v[], int i);

int main()
{
    int v[] = {4, -2, 3, 4, 5, 6, 7, 8, 9, 10};
    int y;
    y = f(v, 10);
    printf("f(%d) = %d\n", v, y);
}

int f(int v[], int i)
{
    if (i == 0) return v[0];

    return v[i - 1] + f(v, i - 1);
}
