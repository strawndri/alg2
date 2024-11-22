#include <stdio.h>

float expo(float x, int i)
{
    if (i == 0)
        return 1;

    printf("expo\n");

    return expo(x, i - 1) * x;
}

float av_polinomio(float p[], int a, int b, float x)
{
    if (a == b)
        return p[a];

    printf("av\n");

    return av_polinomio(p, a, b - 1, x) + (p[b] * expo(x, b - a));
}

int main()
{
    float p[6] = {4, 8, 15, 16, 23, 42};
    int a = 0, b = 5;
    float x = 1.0;

    printf("%.2f\n", av_polinomio(p, a, b, x));

    return 0;
}