#include <stdio.h>
int main(void){
	int numero, laco;
	double sequencia;

		printf("Digite a quantidade de números que deseja inserir no vetor: ");
		scanf("%d", &numero);

		laco = numero;
		double vetor[numero];
		--numero;
			while(numero >= 0){
				scanf("%lf", &sequencia);
				vetor[numero] = sequencia;
				--numero;
			}
			printf("Números inseridos no vetor: ");
			for(int i = 0; i < laco; i++) {
				printf("%.2lf\n", vetor[i]);
			}
}