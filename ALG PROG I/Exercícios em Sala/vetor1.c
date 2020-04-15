#include <stdio.h>
int main(void){
	double notas[55] = {0}, soma, media;
		for(int i = 0;i < 10; i++){
			printf("Digite a %d nota: ", i+1);
			scanf("%lf", &notas[i]);
			soma += notas[i];
		}
		printf("A média é: %.2lf", soma/50);
}