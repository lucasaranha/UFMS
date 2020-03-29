#include <stdio.h>
int main(void){
	int numero, elementos, par, impar;
	par = 0, impar = 0;
		printf("Digite o número de casos de teste: ");
		scanf("%d", &numero);

		for(int i =0; i < numero; i++){
			scanf("%d", &elementos);
				if(elementos%2 == 0) ++par;
				else ++impar;
		}
		printf("Total de números inseridos: %d", numero);
		printf("Quantidade de números ímpares: %d\n", impar);
		printf("Quantidade de números pares: %d", par);
}