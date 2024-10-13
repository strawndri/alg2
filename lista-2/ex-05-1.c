#include <stdio.h>

int eh_simetrica(int i, int j, int n, int m[][n])
{
  if (i >= n) 
    return 1;

  if (m[i][j] != m[j][i])
    return 0;

  if (j >= n - 1)
    return eh_simetrica(i + 1, i + 1, n, m);

  return eh_simetrica(i, j + 1, n, m);
}

int main()
{
  int m[2][2] = {
      {1, 2},
      {2, 1}};

  int i = 0, j = 0;
  int n = 2;

  printf("%d\n", eh_simetrica(i, j, n, m));
}