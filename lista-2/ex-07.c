#include <stdio.h>

int uns_binario(int n)
{
    if (n == 0 || n == 1)
        return n;

    return uns_binario(n / 2) + (n % 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", uns_binario(n));
    return 0;
}