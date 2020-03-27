#include <stdio.h>
int main(void){
	int numero, cont = 2;
		
		printf("Digite um número inteiro: ");
		do
		{
			scanf("%d", &numero);
			for(int i = 2; i < numero; i++){
			if(numero%i == 0) ++cont;
		}
			if(cont >=3) printf("O número não é primo\n");
			else printf("O número é primo!\n");
			cont = 2;
		} while (numero != 0);
		
}