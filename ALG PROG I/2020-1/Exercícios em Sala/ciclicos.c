#include <stdio.h>
int main(void){
	int num1, num2, copia, aux, digitos, pot = 1;
	printf("Digite dois números: ");
	scanf("%d %d", &num1, &num2);
	copia = num2;

		while(copia > 0){
			aux = copia%10;
			digitos++;
			copia /= 10;
			pot *= 10;
		}
	copia = num2;
	pot /= 10;

		do
		{
			aux = copia/pot;
			copia = ((copia - (aux * pot)) * 10) + aux;
			if(num1 == copia) break;
		} while (digitos--);


		if(num1 == copia) printf("É ciclíco\n");
		else printf("Não é cíclico\n");
		


return 0;
}