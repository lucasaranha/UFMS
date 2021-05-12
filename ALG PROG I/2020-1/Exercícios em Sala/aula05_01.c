/*	Nome:Lucas Aranha
	Data: 02/04/2020
	Objetivo: O programa tem o objetivo de 
		realizar a multiplicação de dois números mas com um método alternativo 
	*/

#include <stdio.h>
int main(void){
	int numero1, numero2, soma = 0;
		printf("Digite dois números que deseja multiplicar: ");
		scanf("%d %d", &numero1, &numero2);
		do
		{
			if(numero1 % 2 != 0) soma += numero2;
			numero1 /= 2;
			numero2 *= 2;
		} while (numero1 >= 1);
		printf("%d\n", soma);
}