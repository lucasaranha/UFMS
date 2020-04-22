#include <stdio.h>
#define tam_max	80
#define tot_pedras 75
int main(void){
	int vetor[tam_max] = {0};
	int qtd, pedra;
		printf("Digite a quantidade de ocorrências: ");
		scanf("%d", &qtd);

			for(int i = 0; i < qtd; i++){
				printf("Digite a %d ocorrência: ", i+1);
				scanf("%d", &pedra);
				vetor[pedra]++;
			}
			printf("---TOTAL DE OCORRÊNCIAS---\n");
			for(int i = 0; i < tot_pedras; i++) printf("ÍNDICE [%d]: %d\n", i+1, vetor[i+1]);

}