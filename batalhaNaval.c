#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};
    int navio3[3] = {3, 3, 3};
    int navio4[3] = {3, 3, 3};

    int linha1 = 2, coluna1 = 1;
    int linha2 = 5, coluna2 = 7;
    int linha3 = 0, coluna3 = 0;
    int linha4 = 0, coluna4 = 9;

    for (i = 0; i < 3; i++) {
        if (coluna1 + i < 10 && tabuleiro[linha1][coluna1 + i] == 0)
            tabuleiro[linha1][coluna1 + i] = navio1[i];
    }

    for (i = 0; i < 3; i++) {
        if (linha2 + i < 10 && tabuleiro[linha2 + i][coluna2] == 0)
            tabuleiro[linha2 + i][coluna2] = navio2[i];
    }

    for (i = 0; i < 3; i++) {
        if (linha3 + i < 10 && coluna3 + i < 10 && tabuleiro[linha3 + i][coluna3 + i] == 0)
            tabuleiro[linha3 + i][coluna3 + i] = navio3[i];
    }

    for (i = 0; i < 3; i++) {
        if (linha4 + i < 10 && coluna4 - i >= 0 && tabuleiro[linha4 + i][coluna4 - i] == 0)
            tabuleiro[linha4 + i][coluna4 - i] = navio4[i];
    }

    printf("=== TABULEIRO BATALHA NAVAL ===\n\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}