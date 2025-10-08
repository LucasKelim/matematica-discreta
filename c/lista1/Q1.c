// Proponha a base e o passo indutio para a sequência: S = {1, 2, 5, 14, 51, ...}
#include "conio.h"
#include "stdio.h"

int f(int n);

int main()
{
    int x, y;
    printf("Informe n >= 0: ");
    scanf("%d", &x);
    y = f(x);
    printf("f(%d) = %d\n", x, y);
}

int f(int n)
{
    if (n == 0) return 1;

    return 3 * f(n - 1) - 1;
}
