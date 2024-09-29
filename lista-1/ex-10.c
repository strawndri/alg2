#include <stdio.h>

int f(int a, int b)
{
    if (b == 0)
        return 0;
    
    if (b % 2 == 0)
        return f(a + a, b/2);
    
    return f(a + a, b/2) + a;
}

int main()
{   
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", f(a, b));

    return 0;
}