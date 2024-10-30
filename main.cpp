#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int linha = -1, coluna = -1, jogada_linha = -1, jogada_coluna = -1;
	char cont = ' ';
	srand(time(0));
	
	//Inicializa o tabuleiro sem jogadas
	char tabuleiro[3][3] = {
		{' ', ' ', ' '},
		{' ', ' ', ' '},
		{' ', ' ', ' '}
	};
	
	do{
		//Recebe a jogada da maquina
		do{
			linha = rand()%3;
			coluna = rand()%3;
		}while (tabuleiro[linha][coluna]!=' '); //Fica no laço até a jogada ser valida
		
		//Faz a jogada da maquina
		tabuleiro[linha][coluna] = 'x';	
		
		//Apresenta as jogadas do tabuleiro
		printf("\n\t\t 0   1   2 \n");
		for(int l=0; l<3; l++){
			printf("\n\t%d\t", l);
			for(int c=0; c<3; c++){
				printf("[%c] ", tabuleiro[l][c]);
			}
		}
		printf("\n\n");
		
		//Recebe a jogada do usuario
		printf("\nDigite a linha: ");
		scanf("%d", &jogada_linha);
		printf("\nDigite a coluna: ");
		scanf("%d", &jogada_coluna);
		
		//Faz a jogada do usuario
		tabuleiro[jogada_linha][jogada_coluna] = 'o';	
		
		//Apresenta as jogadas do tabuleiro
		printf("\n\t\t 0   1   2 \n");
		for(int l=0; l<3; l++){
			printf("\n\t%d\t", l);
			for(int c=0; c<3; c++){
				printf("[%c] ", tabuleiro[l][c]);
			}
		}
		printf("\n\n");
		
		//Pergunta se desejan continuar o jogo
		printf("Deseja jogar novamente [s][n]:");
		scanf(" %c", &cont);
	}while(cont=='s');//Continua o jogo enquanto digitado s
	return 0;
}