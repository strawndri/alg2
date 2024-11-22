#include <stdio.h>

void imprime_vetor(int v[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");
}

void backtrack(int v[], int n, int i, int k)
{
    if (i == n)
    {
        imprime_vetor(v, n);
        return;
    }

    for (int j = 0; j <= k; j++)
    {
        v[i] = j;
        backtrack(v, n, i + 1, k);
    }
}

int main()
{   
    int n = 3;
    int vetor[3];
    backtrack(vetor, n, 0, 1);
    
    return 0;
}