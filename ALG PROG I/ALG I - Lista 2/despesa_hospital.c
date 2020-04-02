#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int dias;
	char tipo_quarto[20], tel, tv, opcao_quarto;
	double diaria, despesaTotal, telefone, televisao;
	telefone = televisao = 0;
		printf("Digite a quantidade de dias hospedado: ");
		scanf(" %d", &dias);
		printf("\nQual o tipo de quarto? ");
		scanf("%s", &opcao_quarto);
		printf("\nO paciente usou o telefone? ");
		scanf("%s", &tel);
		printf("\nUtilizou a televisão? ");
		scanf("%s", &tv);
		char copia = opcao_quarto;	
			switch(copia){
				case 'P':
					diaria = dias * 160.00;
					if(tel == 'S') {
						telefone = 3.00;
						despesaTotal = diaria + telefone;
					}
					if(tv == 'S') {
						televisao = 4.00;
						despesaTotal += tv;
					}
					strcpy(tipo_quarto, "Particular");

				break;

				case 'S':
					diaria = dias * 110.00;
					if(tel == 'S') {
						telefone = 3.00;
						despesaTotal = diaria + telefone;
					}
					if(tv == 'S') {
						televisao = 4.00;
						despesaTotal = diaria + tv;
					}
					strcpy(tipo_quarto, "Semi - Leito");
				break;

				case 'C':
					diaria = dias * 85.00;
					if(tel == 'S') {
						telefone = 3.00;
						despesaTotal = diaria + telefone;
					}
					if(tv == 'S') {
						televisao = 4.00;
						despesaTotal = diaria + tv;
					}
					strcpy(tipo_quarto, "Compartilhado");
				break;
			}
			printf("\nHospital Comunitário\n");
			printf("Número de dias no hospital: %d\n", dias);
			printf("Tipo de quarto: %s\n", tipo_quarto);
			printf("Diárias.............R$ %.2lf\n", diaria);
			printf("Telefone............R$ %.2lf\n", telefone);
			printf("Televisão............R$ %.2lf\n", televisao);
			printf("Total............R$ %.2lf\n", despesaTotal);




}