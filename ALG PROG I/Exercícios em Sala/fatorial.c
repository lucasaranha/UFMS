#include <stdio.h>
int main(void){
	long long int fatorial, soma = 1;
	printf("Digite um número: ");
	scanf("%lld", &fatorial);
	for(int i = fatorial; i > 0; i--){
		//printf("Valor atual da variável soma: %lld\n", soma);
		soma = soma * i;
	}
	printf("%lld\n", soma);
}