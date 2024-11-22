#include <stdio.h>

void troca(int a, int b, int v[])
{
    int aux = v[a];
    v[a] = v[b];
    v[b] = aux;
}

void bubble_sort(int a, int b, int v[])
{
    if (a >= b - 1)
        return;
    
    for (int i = a; i <= b - 1; i++)
    {
        if (v[i] > v[i + 1])
            troca(i, i + 1, v);
    }
    
    bubble_sort(a, b - 1, v);
}

int main()
{   
    int v[] = {1, 6, 4, 3, 2};
    int a = 0, b = 4;

    bubble_sort(a, b, v);

    for (int i; i <= b; i++)
        printf("%d ", v[i]);

    printf("\n");

    return 0;
}