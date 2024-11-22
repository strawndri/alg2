#include <stdio.h>
#define N 5

int solveKTUtil(int x, int y, int movei, int sol[N][N], int xMove[], int yMove[]);

/* Verifica se x,y são índices válidos para tabuleiro N*N */
int isSafe(int x, int y, int sol[N][N])
{
    return (x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == -1);
}

/* Imprime a matriz solução sol[N][N] */
void printSolution(int sol[N][N])
{
    for (int x = 0; x < N; x++)
    {
        for (int y = 0; y < N; y++)
            printf(" %2d ", sol[x][y]);
        printf("\n");
    }

    printf("\n");
}

/* Função que resolve usando Backtracking.  Essa função usa solveKTUtil() para resolver o problema.
Note que pode existir mais de uma solução, essa função imprime somente uma. */
void solveKT()
{
    int sol[N][N];

    /* Initialization of solution matrix */
    for (int x = 0; x < N; x++)
        for (int y = 0; y < N; y++)
            sol[x][y] = -1;

    sol[0][0] = 0; // Since the Knight is initially at the first block

    /* xMove[] and yMove[] define next move of Knight. */
    int xMove[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int yMove[8] = {1, 2, 2, 1, -1, -2, -2, -1};

    /* Start from 0,0 and explore all tours using solveKTUtil() */
    if (!solveKTUtil(0, 0, 1, sol, xMove, yMove))
        printf("Solucao nao existe");
}

/* A recursive utility function to solve Knight Tour problem */
int solveKTUtil(int x, int y, int movei, int sol[N][N], int xMove[N], int yMove[N])
{
    if (movei == N * N)
    {   
        printSolution(sol);
        return 0;
    }

    /* Try all next moves from the current coordinate x, y */
    for (int k = 0; k < 8; k++)
    {
        int next_x = x + xMove[k];
        int next_y = y + yMove[k];
        if (isSafe(next_x, next_y, sol))
        {
            sol[next_x][next_y] = movei;
            solveKTUtil(next_x, next_y, movei + 1, sol, xMove, yMove);
            sol[next_x][next_y] = -1; // backtracking
        }
    }

    return 0;
}

/* Funcao main() */
int main()
{
    solveKT();
    return 0;
}