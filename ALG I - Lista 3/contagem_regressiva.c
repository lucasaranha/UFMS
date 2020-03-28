#include <stdio.h>
int main(void){
	int numero;
	printf("Digite um número: ");
	scanf("%d", &numero);

	printf("Contagem regressiva: ");
		while(numero > 0){
			printf("%d\n", numero);
			--numero;
		}

}