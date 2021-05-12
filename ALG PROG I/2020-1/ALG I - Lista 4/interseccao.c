#include <stdio.h>
#define tam_max 50
int main(void){
	int A[tam_max] = {0}, B[tam_max] = {0}, interseccao[tam_max];;
	int tamanho_a, tamanho_b, maior, menor, j, tam = 0;

		printf("Digite o tamanho do vetor A: ");
		scanf("%d", &tamanho_a);
		printf("Digite o tamanho do vetor B: ");
		scanf("%d", &tamanho_b);
		//armazenando o tamanho dos vetores para utilizar de parametro dos lacos
		if(tamanho_b > tamanho_a) maior = tamanho_b, menor = tamanho_a;
		else maior = tamanho_a, menor = tamanho_b;
		//leitura do vetor
		for(int i = 0; i < tamanho_a; i++) scanf("%d", &A[i]);
		for(int i = 0; i < tamanho_b; i++) scanf("%d", &B[i]);
		//percorrendo o maior vetor para comparar com o menor	
		for(int i = 0; i < maior; i++){
			j = 0;
			while(j < menor){
				if(A[i] == B[j]){
						interseccao[tam] = A[i];
						++tam;
					}
					++j;
				}
			}
			printf("Vetor C: {");
		for(int i = 0; i < tam; i++) printf(" %d", interseccao[i]);
			printf(" }\n");


}