#include <stdio.h>
#define tam_max 500
int main(void){
	int matriculas_alg[tam_max] = {0}, matriculas_itc[tam_max] = {0}, intersecao[tam_max] = {0};
	int i, j, cont;
	i = j = cont = 0;

		do
		{
			printf("Digite a matrícula de Algoritmos: ");
			scanf("%d", &matriculas_alg[i]);
			printf("Digite a matrícula de ITC: ");
			scanf("%d", &matriculas_itc[i]);
			if((matriculas_itc[i] == 9999) && (matriculas_alg[i] == 9999)) break;
			if(matriculas_alg[i] == matriculas_itc[i]){
				++cont;
				intersecao[j] = matriculas_alg[i];
				++j;
			} 
			++i;
		} while ((matriculas_itc[i] != 9999) && (matriculas_alg[i] != 9999));


		printf("Total de alunos matriculados nas duas disciplinas: %d\n", cont);
		printf("Matrículas:\n");
		for(int i = 0; i < cont; i++){
			printf("[%d]\t", intersecao[i]);
		}
		printf("\n");
}