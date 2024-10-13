#include <stdio.h>

void fatores_de_A(int a)
{
  for (int i = 1; i <= a; i++)
  {
    if (a % i == 0)
      printf("%d\n", i);
  }
}

int main()
{
  int a;
  scanf("%d", &a);
  fatores_de_A(a);

  return 0;
}
