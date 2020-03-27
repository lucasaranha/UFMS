#include <stdio.h>
int main(void){
	int entrada, maior;
	entrada = 1;
	maior = 0;
	do
	{
		scanf("%d", &entrada);
		if(entrada > maior) maior = entrada;

	} while (entrada != 0);

	printf("O maior número é: %d", maior);
}