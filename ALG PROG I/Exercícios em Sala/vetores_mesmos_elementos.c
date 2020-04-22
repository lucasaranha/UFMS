#include <stdio.h>
#define tam_max 40
int main(void){
	int tam, igualdade, j;
	int vet1[tam_max], vet2[tam_max];
	igualdade = j = 0;
		printf("Digite o tamanho dos vetores: ");
		scanf("%d", &tam);

			for(int i = 0; i < tam; i++) scanf("%d", &vet1[i]);
			for(int i = 0; i < tam; i++) scanf("%d", &vet2[i]);

				for(int i = 0; i < tam; i++){
					for(int j = 0; j < tam; j++){
						if(vet1[i] == vet2[j]) ++igualdade;
					}
				}
			if(igualdade == tam) printf("Os vetores são equivalentes.\n");
			else printf("Os vetores não são equivalentes.\n");
return 0;
}