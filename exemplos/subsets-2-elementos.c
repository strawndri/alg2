#include <stdio.h>

// Função para imprimir o vetor
void imprime_vetor(int set[], int v[], int n)
{
    for (int i = 0; i < n; i++)
        if (v[i])
            printf("%d ", set[i]);
    printf("\n");
}

// Função para gerar todas as combinações binárias
void vetores_binarios(int set[], int v[], int n, int i)
{
    if (i == n)
    {
        // Conta os elementos selecionados
        int contador = 0;
        for (int j = 0; j < n; j++)
            if (v[j])
                contador++;

        // Imprime apenas subconjuntos com dois elementos
        if (contador == 2)
            imprime_vetor(set, v, n);
        return;
    }

    v[i] = 0;
    vetores_binarios(set, v, n, i + 1);

    v[i] = 1;
    vetores_binarios(set, v, n, i + 1);
}

// Imprime todos os subconjuntos
void todos_subconjuntos(int set[], int n)
{
    int v[n];
    for (int i = 0; i < n; i++)
        v[i] = 0; // Inicializa o vetor auxiliar
    vetores_binarios(set, v, n, 0);
}

// Código principal
int main()
{

    int set[] = {23, 10, 20, 11, 12, 6, 7};
    int n = sizeof(set) / sizeof(set[0]);

    todos_subconjuntos(set, n);
    return 0;
}
