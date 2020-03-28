#include <stdio.h>
int main(void){
	int numero, soma = 0;
		printf("Digite um número: ");
		scanf("%d", &numero);
		for(int i = 0; i <= numero; i++){
			soma += i;
		}
		printf("%d", soma);
}