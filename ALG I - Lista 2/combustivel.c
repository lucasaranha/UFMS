#include <stdio.h>
#include <stdlib.h>
int main(void){
	double combustivel;
	char opcao;
		printf("Insira o tipo de combustível: A - Álcool\tD - Diesel\tG - Gasolina\n");
		scanf("%c", &opcao);
		system("clear");
		printf("Digite, em litros, a quantidade de gasolina: ");
		scanf("%lf", &combustivel);

		switch(opcao){
			case 'A':
			combustivel = combustivel*2.10;
			break;

			case 'D':
			combustivel = combustivel * 2.45;
			break;

			case 'G':
			combustivel = combustivel * 3.15;
			break;
		}
		printf("Opção selecionada: %c. \tTotal a ser pago: R$ %.2lf", opcao, combustivel);
}