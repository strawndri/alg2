#include <stdio.h>

void troca(int a, int b, int v[])
{
    int aux = v[a];
    v[a] = v[b];
    v[b] = aux;
}

void bubble_sort(int a, int b, int v[])
{
    if (a > b - 1)
        return;
    
    if (v[a] > v[a + 1])
        troca(a, a + 1, v);
    
    bubble_sort(a + 1, b, v);
    bubble_sort(a + 1, b - 1, v);
}

int main()
{   
    int v[] = {1, 6, 4, 3, 1};
    int a = 0, b = 4;

    bubble_sort(a, b, v);

    for (int i; i <= b; i++)
        printf("%d ", v[i]);

    printf("\n");

    return 0;
}