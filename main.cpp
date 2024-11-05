#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int linha = -1, coluna = -1, jogada_linha = -1, jogada_coluna = -1;
	char cont = ' ';
	int jogadas = 0, count = 0;
	
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
		
		jogadas++;
		
		//Apresenta as jogadas do tabuleiro
		printf("\n\t\t 0\t 1\t 2 \n");
		for(int l=0; l<3; l++){
			printf("\n\t%d\t", l);
			for(int c=0; c<3; c++){
				printf("[%c]\t", tabuleiro[l][c]);
			}
			printf("\n");
		}
		printf("\n\n");
		
		
		//verificando se a maquina bateu
		for(int i = 0; i < 3; i++){
			if(tabuleiro[linha][i] == 'x'){
				count++;	
			}
		}
		
		if(count == 3){
			printf("\nMaquina ganhou");
			break;
		}else {
			count = 0;
		}
		
		for(int i = 0; i < 3; i++)if(tabuleiro[i][coluna] == 'x')count++;
		
		//se teve 3x na mesma linha ou coluna 
		if(count == 3){
			printf("\nMaquina ganhou");
			break;
		}else {
			count = 0;
		}
		
		//Confere se foi a ultima jogada possivel
		if (jogadas == 9){
			break;
		}
		
		//Fica nesse laço enquanto jogar em posição já marcada
		do{
			//Recebe a jogada do usuario
			printf("\nJogada do usuario [linha]espaco[coluna]: ");
			scanf("%d %d", &jogada_linha, &jogada_coluna);
		}while(tabuleiro[jogada_linha][jogada_coluna]!=' ');
		
		//Faz a jogada do usuario
		tabuleiro[jogada_linha][jogada_coluna] = 'o';	
		
		jogadas++;
		
		system("cls");
		//Apresenta as jogadas do tabuleiro
		printf("\n\t\t 0\t 1\t 2 \n");
		for(int l=0; l<3; l++){
			printf("\n\t%d\t", l);
			for(int c=0; c<3; c++){
				printf("[%c]\t", tabuleiro[l][c]);
			}
			printf("\n");
		}
		printf("\n\n");
		
		for(int i = 0; i < 3; i++){
			if(tabuleiro[jogada_linha][i] == 'o'){
				count++;	
			}
		}
		
		if(count == 3){
			printf("\nVoce ganhou");
			break;
		}else {
			count = 0;
		}
		
		for(int i = 0; i < 3; i++){
			if(tabuleiro[i][jogada_coluna] == '0'){
				count++;	
			}
		}
		
		if(count == 3){
			printf("\nVoce ganhou");
			break;
		}else {
			count = 0;
		}
		
		//Confere se foi a ultima jogada possivel
		if (jogadas == 9){
			break;
		}
		
		//Pergunta se desejan continuar o jogo
		printf("Deseja jogar novamente [s][n]:");
		scanf(" %c", &cont);
		
		system("cls");
	}while(cont=='s');//Continua o jogo enquanto digitado s
	return 0;
}