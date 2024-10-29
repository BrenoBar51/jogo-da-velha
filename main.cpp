#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int linha = -1, coluna = -1;
    srand(time(0));
    // printf("\nSorteio 01: %d", rand() % 10);
    // printf("\nSorteio 02: %d", rand() % 10);
    // printf("\nSorteio 03: %d", rand() % 10);
    // printf("\nSorteio 04: %d", rand() % 10);
    // printf("\nSorteio 05: %d", rand() % 10);
    // printf("\nSorteio 06: %d", rand() % 10);
    char tabuleiro[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}};

    for (int i = 0; i < 5; i++){
        do{
            printf("\nCasa já marcada [%d] [%d].", linha, coluna);
            linha = rand() % 3;
            coluna = rand() % 3;
        } while (tabuleiro[linha][coluna] != ' ');
        tabuleiro[linha][coluna] = 'x';
        printf("\nLinha 0: [%c] [%c] [%c]", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
        printf("\nLinha 1: [%c] [%c] [%c]", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
        printf("\nLinha 2: [%c] [%c] [%c]", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
    }

    printf("\nLinha 0: [%c] [%c] [%c]", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("\nLinha 1: [%c] [%c] [%c]", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("\nLinha 2: [%c] [%c] [%c]", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
    return 0;
}