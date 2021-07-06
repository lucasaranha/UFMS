#include <stdio.h>
int main(void){
	int numero, copia_numero, inverso = 0, aux = 0;
		printf("Digite o número a ser lido: ");
		scanf("%d", &numero);
		copia_numero = numero;
		//printf("%d", numero%10);
			while(numero > 0){
				aux = numero%10;
				inverso = (inverso*10) + aux;
				numero = numero/10;
			}
			if(copia_numero == inverso) printf("%d é palindrome. O número original é: %d\n", inverso, copia_numero);
			else printf("Não é palindrome, o número invertido é: %d\n", inverso	);
}