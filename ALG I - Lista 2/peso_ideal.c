#include <stdio.h>
#include <stdlib.h>
int main(void){
	double altura, peso_ideal;
	char genero;
		printf("Digite seu gênero: M - Masculino\tF - Feminino: ");
		scanf("%c", &genero);
		printf("Digite sua altura: ");
		scanf("%lf", &altura);
			if(genero == 'M'){
				peso_ideal = (72.1 * altura) - 58;
			}
			else{
				peso_ideal = (62.1 * altura) - 44.7;
			}
			printf("Gênero selecionado: %c. Peso ideal: %.2lf", genero, peso_ideal);
}