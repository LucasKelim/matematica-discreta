#include "conio.h"
#include "stdio.h"

int s(int n);

int main() 
{
    int x, y;
    printf("Informe n >= 2: ");
    scanf("%d", &x);
    y = s(x);
    printf("S(%d) = %d\n", x, y);
}

int s(int n) {
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    return s(n - 1) + s(n - 2) + 1;
}
