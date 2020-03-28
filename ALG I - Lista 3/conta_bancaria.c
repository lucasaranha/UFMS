#include <stdio.h>
#include <stdlib.h>
int main(void){
	int conta, digito, inverso, conta_numero, aux;
	inverso = 0; // inicializando a variável
	/* inverso fará a soma dos algarismos do numero.
	conta_numero vai guardar o valor da variável conta, pois a mesma será alterada com os calculos do laco.
	aux receberá os algarismos do número, 1 por vez.*/

		printf("Digite o número da conta: ");
		scanf("%d", &conta);
		conta_numero = conta;
			while(conta > 0){
				aux = conta%10; 
				//printf("VALOR DO AUX: %d \n\n\n", aux);
				inverso += aux;
				conta = conta/10;
			}

		digito = inverso%10;
		//printf("valor da variável inverso: %d\n", inverso);
		printf("Número da conta com o digito: 00%d - %d", conta_numero, digito);

}