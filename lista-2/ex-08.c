#include <stdio.h>

int diferenca_vetores(int v[], int a, int u[], int p, int l) {

    if (l == 0)
        return l + 1;
    
    if (v[a] != u[p])
        return 0;

    return 1 + diferenca_vetores(v, a + 1, u, p + 1, l - 1);  
}

int main() {
    int v[] = {1, 2, 3, 4, 5, 6};
    int u[] = {0, 1, 2, 3, 4, 5, 6};
    int a = 0, p = 1, l = 5;

    printf("%d\n", diferenca_vetores(v, a, u, p, l));

    return 0;
}
