#include <stdio.h>
int main(void){
	int numero, binario, cont, contador;
	binario = cont = 0;
		printf("Digite um número: ");
		scanf("%d", &numero);
		contador = numero/2;
			while(contador > 0){
				if(numero%2 == 0){
					printf("0");
					numero /= 2;
				}
				else{
					printf("1");
					numero /= 2;
				}
				--contador;
				if(numero == 1) {
					printf("1");
					break;
				}
			}
			printf("\n");

}