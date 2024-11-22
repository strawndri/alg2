#include <stdio.h>

#define N 5

void pintar(int i, int j, int n, int m[][N])
{
  if (n <= 2)
  {
    m[i][j] = 1;
    m[i][j + 1] = 0;
    m[i + 1][j] = 0;
    m[i + 1][j + 1] = 1;
  }
  else
  {
    int x = n / 2;
    pintar(i, j, x, m);
    pintar(i, j + x, x, m);
    pintar(i + x, j, x, m);
    pintar(i + x, j + x, x, m);
  }
}

int main()
{
  int m[N][N] = {
      {1, 2, 3, 4, 5},
      {6, 7, 8, 9, 10},
      {11, 12, 13, 14, 14},
      {16, 17, 18, 19, 20},
      {21, 22, 23, 24, 25}};

  int i = 0, j = 0;
  int n = 5;

  pintar(i, j, n, m);

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
      printf("%d ", m[i][j]);
    printf("\n");
  }
}