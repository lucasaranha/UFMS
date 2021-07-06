#include <stdio.h>
int main(void){
	int tamanho, max = 1, percorre = 1;
	int vet[100];
		printf("Digite o tamanho do vetor: ");
		scanf("%d", &tamanho);

		for(int i = 0; i < tamanho; i++) scanf("%d", &vet[i]);
		for(int i = 0; i < tamanho; i++){
			for(int j = 1; j < tamanho; j++){
				printf("{%d, ", vet[i]);
				//if(vet[j] > vet[i]){
					while(vet[percorre] > vet[i]){
						printf("%d, ", vet[percorre]);
						percorre++;
					}
					percorre = 1;
				//}
			}
		}
}