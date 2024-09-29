#include <stdio.h>

int pa(int a, int n, int r)
{
    if (n == 1)
        return a;
    return r + f(a, n-1, r);
}

int main()
{   
    int a, n, r;
    scanf("%d %d %d", &a, &n, &r);
    printf("%d\n", pa(a, n, r));
    return 0;
}