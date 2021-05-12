#include <stdio.h>
#define tam_max 1000
int main(void){
	int tam, cont = 0;
	int vetor[tam_max] = {0};
	printf("Digite o tamanho da sequencia: ");
	scanf("%d", &tam);


	for(int i = 0; i < tam; i++){
		scanf("%d", &vetor[i]);
	}


	for(int i = 0; i < tam; i++){
		if(vetor[i] != vetor[i+1]) cont++;
	}


	printf("A sequência ");
	for(int i = 0; i < tam; i++) printf("%d ", vetor[i]);
	printf("é composta por %d subsequências:\n", cont);
	printf("{");
	for(int i = 0; i < tam; i++){
			printf("%d", vetor[i]);
				if(vetor[i] != vetor[i+1] && vetor[i+1] != 0) {
					printf("}, {");
				}
				else printf(",");
		}
		printf("}.\n");
return 0;
}