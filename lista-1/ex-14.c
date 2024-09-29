#include <stdio.h>

int inverte_vetor(int *v, int a, int b)
{   
    int aux;

    if (a == b) 
        return v[a];

    aux = v[a];
    v[a] = v[b];
    v[b] = aux; 

    return inverte_vetor(v, a + 1, b - 1);
}

int main()
{
    int v[5] = {2, 3, 1, 5, 7};
    int a = 0, b = 4;

    inverte_vetor(v, a, b);

    for (int i = 0; i <= b; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");
    
    return 0;
}