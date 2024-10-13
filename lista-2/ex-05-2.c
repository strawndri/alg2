#include <stdio.h>

int transporMatriz(int i, int j, int n, int m[][n])
{
  if (i >= n)
    return 0;

  if (i != j)
  {
    int aux = m[i][j];
    m[i][j] = m[j][i];
    m[j][i] = aux;
  }

  if (j >= n - 1)
    return transporMatriz(i + 1, i + 1, n, m);

  return transporMatriz(i, j + 1, n, m);
}

int main()
{
  int m[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};

  int i = 0, j = 0;
  int n = 3;

  transporMatriz(i, j, n, m);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      printf("%d ", m[i][j]);
    printf("\n");
  }
}