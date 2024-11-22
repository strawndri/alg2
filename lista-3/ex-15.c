#include <stdio.h>

void troca(int v[], int a, int b)
{
    int aux = v[a];
    v[a] = v[b];
    v[b] = aux;
}

int particiona(int v[], int a, int b, int x)
{
    int m = a - 1;
    for (int i = a; i <= b; i++)
    {
        if (v[i] <= x)
        {
            m++;
            troca(v, m, i);
        }
    }

    troca(v, a, m);
    return m;
}

void quick_sort(int v[], int a, int b)
{
    if (a >= b)
        return;
    
    int m = particiona(v, a, b, v[a]);
    quick_sort(v, a, m - 1);
    quick_sort(v, m + 1, b);
}

int main()
{
    int v[12] = {13, 19, 9, 5, 12, 8, 7, 4, 21, 2, 6, 11};
    int a = 0; int b = 11;

    quick_sort(v, a, b);

    for (int i = 0; i <= b; i++)
    {
        printf("%d ", v[i]);
    }

    printf("\n");
}
