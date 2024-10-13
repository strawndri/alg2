#include <stdio.h>

int palindromo(int v[], int a, int b)
{
  if (v[a] != v[b])
    return 0;

  if (a < b)
    return palindromo(v, a + 1, b - 1);

  return 1;
}

int main()
{
  int v1[5] = {1, 2, 3, 2, 1};
  int v2[5] = {1, 2, 4, 3, 1};
  int a = 0;
  int b = 4;

  printf("%d\n", palindromo(v1, a, b));
  printf("%d\n", palindromo(v2, a, b));

  return 0;
}
