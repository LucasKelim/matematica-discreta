#include "conio.h"
#include "stdio.h"

unsigned long long f(unsigned long long n);

int main()
{
    unsigned long long x, y;
    printf("Informe n >= 0: ");
    scanf("%llu", &x);
    y = f(x);
    printf("F(%llu) = %llu\n", x, y);
    return 0;
}

unsigned long long f(unsigned long long n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return f(n - 1) + f(n - 2);
}
