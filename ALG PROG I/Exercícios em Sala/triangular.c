#include <stdio.h>
int main(void){
	int numero, i, j, resultado;
	j = 0;
	i = 1;
		printf("Digite um numero: ");
		scanf("%d", &numero);

		while(j <= numero){
			resultado = i*(i+1)*(i+2); 
			if(resultado == numero) {
				printf("O número %d é triângular.\n", numero);
				printf("Os números são: %d, %d, %d.", i, i+1, i+2);
				break;
			}
			++i;
			++j;

			resultado = 0;
			if(j == numero && resultado != numero) printf("Não é triângular\n");
		}
return 0;
}