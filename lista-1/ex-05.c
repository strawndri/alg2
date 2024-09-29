#include <stdio.h>

int fat_desc(int n, int k)
{
    if (k == 1) return n; 
    return n * fat_desc((n - 1), k - 1);
}

int main()
{   
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", fat_desc(n, k));
    return 0;
}