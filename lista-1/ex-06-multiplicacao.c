#include <stdio.h>

int multi(int n, int m)
{
    if (m == 0) {
        return 0;
    } else if (m < 0) {
        return -multi(n, -m);
    }

    return n + multi(n, m - 1);
}

int mult(int n, int m)
{
    if (n < m) {
        return multi(m, n);
    }

    return multi(n, m);
}

int main()
{   
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", mult(x, y));

    return 0;
}