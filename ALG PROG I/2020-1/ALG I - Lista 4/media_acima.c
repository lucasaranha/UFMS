#include <stdio.h>
#define tam_max 1005
int main(void){
	int n, cont = 0;
	double vetor[tam_max], soma = 0, media;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%lf", &vetor[i]);
		soma += vetor[i];
	}
	media = soma/n;
	for(int i = 0; i < n; i++){
		if(vetor[i] >= media) ++cont;
	}
	printf("A média da soma dos vetores é: %.2lf.\n O total de elementos acima da média é: %d\n", media, cont);
}