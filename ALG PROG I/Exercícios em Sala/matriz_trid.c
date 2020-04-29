#include <stdio.h>
#define tam_max 100
int main(void){
	int M[tam_max][tam_max][tam_max];
	int tamanho, soma = 0;
	int i, j, k;

		printf("Digite o tamanho da matriz tridimensional: ");
		scanf("%d", &tamanho);

		for(i = 0; i < tamanho; i++){
			for(i = 0; j < tamanho; j++){
				for(k = 0; k < tamanho; k++){
					scanf("%d", &M[i][j][k]);
					soma += M[i][j][k];
				}
			}
		}

		printf("--VALOR TOTAL DA MATRIZ-- %d\n", soma);
}