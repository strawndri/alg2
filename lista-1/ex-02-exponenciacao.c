#include <stdio.h>

int expo(int x, int n)
{
    if (n == 0)
        return 1;

    return x * expo(x, n - 1);
}

int main() 
{   
    int x, n, resultado;
    scanf("%d %d", &x, &n);
    resultado = expo(x, n);
    printf("%d\n", resultado);
    return 0;
}