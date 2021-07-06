#include <stdio.h>
#define TAM_MAX 500
int main(void){
	int qtd, num, dados[TAM_MAX] = {0};
	printf("Quantas vezes o dado foi lançado? ");
	scanf("%d", &qtd);
		for(int i = 0; i < qtd; i++){
			printf("Digite o resultado %d: ", i+1);
			scanf("%d", &num);
			if(num == 1) dados[0] += 1;
			else if(num == 2) dados[1] += 1;
			else if(num == 3) dados[2] += 1;
			else if(num == 4) dados[3] += 1;
			else if(num == 5) dados[4] += 1;
			else dados[5] += 1;
		}
		printf("O total de cada face é: \n");
		for(int i = 0; i < 6; i++) printf("FACE[%d]: %d.\n", i+1, dados[i]);
}