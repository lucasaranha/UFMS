#include <stdio.h>
int main(void){
	int hora_inicio, hora_final, data_inicio, data_final, diferenca;

		printf("Digite a hora de ínicio da partida e o dia da partida: ");
		scanf("%d%d", &hora_inicio, &data_inicio);
		printf("Digite a hora de encerramento da partida e o dia da partida: ");
		scanf("%d%d", &hora_final, &data_final);

		diferenca = hora_final - hora_inicio;

		if((diferenca >=1) && (data_final > data_inicio)) printf("Tempo de jogo superior a 01 dia.\n");
		else if(diferenca == 0){
			diferenca = 24;
			printf("O jogo teve %d hora(s)", diferenca);
		}
		else printf("O jogo teve %d hora(s)", diferenca);
}