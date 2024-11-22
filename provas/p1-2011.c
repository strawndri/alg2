#include <stdio.h>

int algoritmo1(int a, int b)
{
    int p = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
            p *= a;
        a *= a;
        b = b / 2;
    }

    return p;
}

int main() {
    printf("%d\n", algoritmo1(3, 4));
}