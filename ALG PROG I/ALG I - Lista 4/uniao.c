#include <stdio.h>
#define tam_max 50
int main(void){
	int A[tam_max], B[tam_max], C[tam_max];
	int tam_A, tam_B, j = 0;
	int compara = 0, igual = 0;

	printf("Digite o tamanho do vetor A: ");
	scanf("%d", &tam_A);
	printf("Digite o tamanho do vetor B: ");
	scanf("%d", &tam_B);

	for(int i = 0; i < tam_A; i++) {
		scanf("%d", &A[i]);
		C[i] = A[i];
		++j;
	}

	for(int i = 0; i < tam_B; i++){
		scanf("%d", &B[i]);
		while(compara < j){
			if(B[i] == C[compara]) ++igual;
			++compara;
		}
		if(igual == 0){
			C[j] = B[i];
			++j;
		}
		compara = 0;
		igual = 0;
	}


	printf("\nA u B: ");
	for(int i = 0; i < j; i++) printf("%d ", C[i]);

}