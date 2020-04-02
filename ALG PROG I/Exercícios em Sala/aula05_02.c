/*	Nome: Lucas Aranha
	Data: 02-04-2020
	Objetivo: Esse programa faz a soma entre números primos de um determinado intervalo, definido pelo usuário */

#include <stdio.h>
int main(void){
	int numero1, numero2;
	int qtd, div, soma;
	soma = 0, qtd = 1;

	printf("Digite dois números: ");
	scanf("%d%d", &numero1, &numero2);
		if(numero1 > numero2){
			int aux = 0;
			aux = numero2;
			numero2 = numero1;
			numero1 = aux;
		}


		for(int i = numero1; i <= numero2; i++){
			div = 2;
			while(div <= i){
				if(i%div == 0) {
					++qtd;
					++div;
			}
				else ++div;
			}
			if(qtd == 2) soma += i;
			qtd = 1;
		}

		printf("A soma do intervalo de primos é: %d", soma);
return 0;
}