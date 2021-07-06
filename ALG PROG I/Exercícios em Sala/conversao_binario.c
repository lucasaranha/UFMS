/*	Autor: Lucas Aranha
	Objetivo: O programa tem como objetivo receber um número binário e transforma-lo em base hexadecimal
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(void){
	int numero, hexa, count, aux, pot, i, copia_numero;
	count = hexa = pot = i = 0;

		printf("Digite um número: ");
		scanf("%d", &numero);
		copia_numero = numero;

		setlocale(LC_ALL, "Portuguese");

		while(numero > 0){
			aux = numero%10;
			++count;
			numero /= 10;
		}
		numero = copia_numero;
		--count;

		while(i <= count){
			aux = numero%10; //pegando o digito mais à direita
			if(aux == 1) hexa += 1*(pow(2, pot));
			++i, ++pot;
			numero /= 10; //diminuindo o numero após usar o dígito
		}
		
		printf("O numero hexadecimal é: %d", hexa);
}