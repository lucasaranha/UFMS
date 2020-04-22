#include <stdio.h>
#define tam_max 25
int main(void){
	int A[tam_max], B[tam_max], C[tam_max] = {0};
	int contA = 0, contB = 0, contC = 0;
	int tamA, tamB, tamC, menor, maior;

	printf("Digite o tamanho de A: ");
	scanf("%d", &tamA);
	printf("Digite o tamanho de B: ");
	scanf("%d", &tamB);

	for(int i = 0; i < tamA; i++) scanf("%d",&A[i]);
	for(int i = 0; i < tamB; i++) scanf("%d", &B[i]);
	tamC = tamA + tamB;

	for(int i = 0; i < tamC; i++){
		if(contA == tamA){
			C[contC] = B[contB];
			contC++, contB++;
		}
		else if(contB == tamB){
			C[contC] = A[contA];
			contC++, contA++;
		}
		else if(A[contA] < B[contB]){
				C[contC] = A[contA];
				contC++, contA++;
		}
		else {
				C[contC] = B[contB];
				contC++, contB++;
			}
	}
	
	printf("C = { ");
	for(int i = 0; i < tamC; i++) printf("%d, ", C[i]);
	printf("}\n");

return 0;
}