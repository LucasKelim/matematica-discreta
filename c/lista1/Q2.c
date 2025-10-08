// Seja X = {0, 1, 3, 9, 27, 81, ...}

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
    if (n == 0 || n == 1) return n;

    return 3 * f(n - 1);
}
