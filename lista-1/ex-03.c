#include <stdio.h>

int fibo(int n)
{
    if (n <= 1)
        return 1;

    return (fibo(n - 1) + fibo(n - 2));
}

int main() 
{   
    int n, resultado;
    scanf("%d", &n);
    resultado = fibo(n);
    printf("%d\n", resultado);
    return 0;
}