// Seja f(0) = 2, f(1) = 3 e f(n) = n^2 + f(n-1) - f(n-2)
// Determine os 5 primeiros termos de f; [2, 3, 5, 11, 22, 36]
// Escreva o pseudocódigo para determinar f(n)

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
    if (n == 0) return 2;
    if (n == 1) return 3;

    return n * n + f(n - 1) - f(n - 2);
}

