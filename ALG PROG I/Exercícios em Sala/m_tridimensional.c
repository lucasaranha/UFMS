#include <stdio.h>
#define tam_max 100
int main(void){
	double M[tam_max][tam_max][tam_max], soma = 0;
	int tamanho;
		printf("Digite o tamanho da matriz quadrada: ");
		scanf("%d", &tamanho);
			for(int i = 0; i < tamanho; i++){
				for(int j = 0; j < tamanho; j++){
					for(int k = 0; k < tamanho; k++){
						scanf("%lf", &M[i][j][k]);
						soma += M[i][j][k];
					}
				}
			}
			for(int i = 0; i < tamanho; i++){
				for(int j = 0; j < tamanho; j++){
					for(int k = 0; k < tamanho; k++){
						printf("%.1lf\t", M[i][j][k]);
					}
					printf("\n");
				}
				printf("\n");
			}
			printf("A soma da matriz tridimensional é: %.1lf\n", soma);
}