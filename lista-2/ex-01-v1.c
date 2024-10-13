#include <stdio.h>

float soma_vetor(float vetor[], int a, int b)
{
  if (a == b)
    return vetor[a];

  return soma_vetor(vetor, a + 1, b) + vetor[a];
}

float media_vetor(float vetor[], int a, int b)
{
  return soma_vetor(vetor, a, b) / (float)(b - a + 1);
}

int main()
{
  float vetor[4] = {1, 2, 3, 4};
  int a = 0;
  int b = 3;

  printf("%.2f\n", media_vetor(vetor, a, b));

  return 0;
}
