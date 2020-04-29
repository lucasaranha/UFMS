/*
Escreva um programa em C que lê uma matriz de inteiros M[15][15] e calcula as somas:

a) da linha 12 de M;

b) da coluna 6 de M;

c) da diagonal principal;

d) da diagonal secundária;

e) de todos os elementos da matriz M.
*/
#include <stdio.h>
#define tam_max 20
#define tamanho 15
int main(void){
	int M[tam_max][tam_max];
	int soma_total = 0, soma_linha = 0, soma12 = 0;

		for(int i = 0; i < tamanho; i++){
			for(int j = 0; j < tamanho; j++){
				scanf("%d", &M[i][j]);
				if(i == 11) soma12 += M[i][j];
				soma_total += M[i][j];
			}
		}
}