#include <stdio.h>


#define N 5

int lab[N][N] = {
    {1, 1, 1, 1, 1},
    {0, 1, 0, 0, 1},
    {1, 1, 1, 1, 1},
    {1, 0, 0, 1, 0},
    {1, 1, 1, 1, 1}
};

int contador = 0;

int sol[N][N]; 

// Verifica se uma posição é a saída
int ehSaida(int i, int j) {
    return i == N - 1 && j == N - 1;  
}

// Verifica se uma posição é proibida (fora do labirinto ou parede)
int ehProibido(int i, int j) {
    return i < 0 || j < 0 || i >= N || j >= N || lab[i][j] == 0 || sol[i][j] == 1;
}

// Função recursiva para resolver o labirinto
int labirinto(int i, int j, int passos, int k) {
    if (ehProibido(i, j)) return 0;

    if (passos > k) return 0;

    sol[i][j] = 1; 

    if (ehSaida(i, j)) return 1; 

    // Tenta mover para baixo, cima, direita e esquerda
    if (labirinto(i + 1, j, passos + 1, k)) return 1;
    if (labirinto(i - 1, j, passos + 1, k)) return 1;
    if (labirinto(i, j + 1, passos + 1, k)) return 1;
    if (labirinto(i, j - 1, passos + 1, k)) return 1;

    sol[i][j] = 0;  
    return 0;
}

void imprimeSolucao() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", sol[i][j]);
        }
        printf("\n");
    }
}

// Função principal
int main() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sol[i][j] = 0;
        }
    }

    int passos = 0;
    int k = 20;

    if (labirinto(0, 0, passos, k)) {
        printf("Solução encontrada:\n");
        imprimeSolucao();
    } else {
        printf("Nenhuma solução encontrada.\n");
    }

    return 0;
}
