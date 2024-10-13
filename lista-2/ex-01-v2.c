#include <stdio.h>

float media_vetor(float v[], int a, int b)
{
  if (a == b)
    return v[a];

  return ((media_vetor(v, a + 1, b) * (b - a)) + v[a]) / (b - a + 1);
}

int main()
{
  float v[4] = {1, 2, 3};
  int a = 0;
  int b = 2;

  printf("%.2f\n", media_vetor(v, a, b));

  return 0;
}
