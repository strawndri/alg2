#include <stdio.h>

int fatores_de_A(int a, int i)
{
  if (i > a)
    return i;

  if (a % i == 0)
    printf("%d\n", i);

  return fatores_de_A(a, i + 1);
}

int main()
{
  int a;
  scanf("%d", &a);
  fatores_de_A(a, 1);

  return 0;
}
