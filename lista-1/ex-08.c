#include <stdio.h>

int soma_pg(int a, int r, int n)
{
    if (n == 1)
        return a;

    return soma_pg(a, r, n - 1) * r + a;
}

int main()
{
    int a, r, n;
    scanf("%d %d %d", &a, &r, &n);
    printf("%d\n", soma_pg(a, r, n));
    return 0;
}