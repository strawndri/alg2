#include <stdio.h>

float somaVetor(float vetor[], int a, int b)
{
  if (a == b)
    return vetor[a];

  return somaVetor(vetor, a + 1, b) + vetor[a];
}

float mediaVetor(float vetor[], int a, int b)
{
  return somaVetor(vetor, a, b) / (float)(b - a + 1);
}

int main()
{
  float vetor[4] = {1, 2, 3, 4};
  int a = 0;
  int b = 3;

  printf("%.2f\n", mediaVetor(vetor, a, b));
}
