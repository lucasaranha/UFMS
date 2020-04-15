#include <stdio.h>
#define tam_max 100
int main(void){
	int tamanho, vetor[tam_max], qtd, aux;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	qtd = tamanho-1;
		for(int i = 0; i < tamanho; i++){
			scanf("%d", &vetor[i]);
		}
		for(int i = 0; i < tamanho/2; i++){
			aux = vetor[i];
			vetor[i] = vetor[qtd];
			vetor[qtd] = aux;
			--qtd;
		}
		printf("\n");
		printf("VETOR INVERSO \n");
		for(int i = 0; i < tamanho; i++) printf("Vetor[%d] : %d\t\n", i+1, vetor[i]);
}