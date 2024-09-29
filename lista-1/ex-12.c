#include <stdio.h>

int M(int *v, int a, int b)
{   
    int m;

    if (a == b) 
        return a;
    
    m = M(v, a + 1, b);

    if (v[a] < v[m])
        m = a;
    
    return m;
}

int main()
{
    int v[5] = {2, 3, 1, 5, 7};
    int a = 0, b = 4;

    printf("%d\n", M(v, a, b));
    
    return 0;
}