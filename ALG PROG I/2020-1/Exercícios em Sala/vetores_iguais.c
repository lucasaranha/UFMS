/*Autor: Lucas Aranha
  Data: 21/04
  Descrição: Esse programa verifica se dois vetores são iguais
 */

#include <stdio.h>
#define tam_max 30
int main(void){
	int tam, igual;
	int v1[tam_max], v2[tam_max];
	igual = 0;
		printf("Digite o tamanho dos vetores: ");
		scanf("%d", &tam);

		for(int i = 0; i < tam; i++)scanf("%d", &v1[i]);
		for(int i = 0; i < tam; i++){
			scanf("%d", &v2[i]);
			if(v1[i] == v2[i]) ++igual;
		}
		if(igual == tam) printf("Os vetores são iguais.\n");
		else printf("Os vetores não são iguais.\n");
}