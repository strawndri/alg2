#include <stdio.h>

// funcao para imprimir o vetor
void imprime_vetor(int set[], int v[], int n)
{
    for (int i = 0; i < n; i++)
        if (v[i])
            printf("%d ", set[i]);
    printf("\n");
}

// funcao para gerar todas strings binárias
void vetores_binarios(int set[], int v[], int n, int i)
{
    if (i == n)
    {
        for (int j = 0; j < n; j++)
            if (v[j] && set[j] % 2 != 0)
                return;

        imprime_vetor(set, v, n);
        return;
    }

    v[i] = 0;
    vetores_binarios(set, v, n, i + 1);

    v[i] = 1;
    vetores_binarios(set, v, n, i + 1);
}

// imprime_todos_subconjuntos
void todos_subconjuntos(int set[], int n)
{
    int v[n];
    vetores_binarios(set, v, n, 0);
}

int main()
{

    int set[] = {23, 10, 20, 11, 12, 6, 7};
    int n = sizeof(set) / sizeof(set[0]);

    todos_subconjuntos(set, n);
}