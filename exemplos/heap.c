#include <stdio.h>
#define MAX 100

// retorna o indice do pai
int pai(int i) {
    return (i-1)/2;
}
// retorna o indice do filho esquerdo 
int esquerda(int i) {
    return 2*i + 1;
}
// retorna o indice do filho direito 
int direita(int i) {
    return 2*i + 2;
}
// troca 
void troca(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

/**************************************/
void maxheapify(int v[], int i, int n)
{
    int maior, esq, dir;
	
    esq = esquerda(i);
    dir = direita(i);
    
    if (esq < n && v[esq] > v[i]) 
       maior = esq;
    else
       maior = i;
    if (dir < n && v[dir] > v[maior])  
       maior = dir;
       
    if (maior != i) {
       troca(&v[i], &v[maior]); 
       maxheapify(v, maior, n);
    }    
}
/************************************/
void insere(int v[], int x, int *n) {
    if (*n >= MAX) {
        printf("Heap cheio.\n");
        return;
    }
   
    v[*n] = x;
    *n = *n+1;

    // move pra cima ate satisfazer a propriedade de heap
    int i = *n-1;
    while (i != 0 && v[pai(i)] < v[i]) {
        troca(&v[pai(i)], &v[i]);
        i = pai(i);
    }
}

/**************************************/
void buildmaxheap(int v[], int n)
{
    for (int i = n/2 - 1; i >= 0; i--) 
       maxheapify(v, i, n);
}

/**************************************/
void main()
{
    int n;
	int v[MAX];
    
    printf("Digite o tamanho do heap:\n");
    scanf("%d", &n);
	
    printf("Digite os valores:\n");
    for (int i = 0; i < n; i++) 
       scanf("%d", &v[i]);

    buildmaxheap(v, n);
    
	//insere(v, 55, &n);
    //insere(v, 56, &n);
    //insere(v, 57, &n);
    //insere(v, 58, &n);
    //insere(v, 100, &n);	
	
	printf("O heap eh:\n");
    for (int i = 0; i < n; i++) 
       printf("%d ", v[i]);
    printf("\n");
}

