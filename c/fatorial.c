#include "conio.h"
#include "stdio.h"

int f(int n);

int main()
{
    int x, y;
    printf("Informe n >= 0: ");
    scanf("%d", &x);
    y = f(x);
    printf("F(%d) = %d\n", x, y);
    return 0;
}

int f(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * f(n - 1);
}
