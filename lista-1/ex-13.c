#include <stdio.h>

int soma_vetor(int *v, int a, int b)
{   
    if (a == b) 
        return v[b];

    return soma_vetor(v, a + 1, b) + v[a];
}

int main()
{
    int v[5] = {2, 3, 1, 5, 7};
    int a = 0, b = 4;

    printf("%d\n", soma_vetor(v, a, b));
    
    return 0;
}