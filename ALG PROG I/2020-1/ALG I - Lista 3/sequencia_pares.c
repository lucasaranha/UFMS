#include <stdio.h>
int main(void){
	int numero, sequencia, par, impar;
	par = impar = 0;
		printf("Digite a quantidade de números desejada: ");
		scanf("%d", &numero);
		for(int i = 0; i < numero; i++){
			scanf("%d", &sequencia);
			if(sequencia%2 == 0) ++par;
			else ++impar;
		}
		printf("Total de números pares: %d\n", par);
		printf("Total de números impares: %d\n", impar);
}