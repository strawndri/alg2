#include <stdio.h>

int mdc_rec(int a, int b)
{
    if (b == 0)
        return a;
    return mdc_rec(b, a % b);
}

int mdc_int(int a, int b)
{
    int res;

    while (b) {
        res = a % b;
        a = b;
        b = res;
    }

    return a;
}

int main()
{   
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d, %d \n", mdc_rec(a, b), mdc_int(a, b));
    
    return 0;
}