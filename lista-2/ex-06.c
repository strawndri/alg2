#include <stdio.h>

int cb(int n, int k)
{
    if (n < k) return 0;
    if (k == 0) return 1;

    return cb(n - 1, k - 1) + cb(n - 1, k);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", cb(n, k));
}