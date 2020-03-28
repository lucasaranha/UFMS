#include <stdio.h>
int main(void){
	double preco;
	int codigo;
		printf("Digite o preço da mercadoria: ");
		scanf("%lf", &preco);
		printf("Digite o código de pagamento: ");
		scanf("%d", &codigo);
			switch(codigo){
				case 1:
				preco = preco-(preco*0.1);
				printf("Forma selecionada: À vista ou cheque. Valor total à pagar: %.1lf", preco);
				break;

				case 2:
				preco = preco-(preco*0.2);
				printf("Forma selecionada: À vista ou CC. Valor total à pagar: %.1lf", preco);
				break;

				case 3:
				printf("Forma selecionada: 2x. Valor total à pagar: %.1lf", preco);
				break;

				case 4:
				preco = preco + (preco*0.1);
				printf("Forma selecionada: 3x. Valor total à pagar (com acréscimo): %.2lf", preco);
				break;	

				default:
				printf("Opção inválida\n");
				break;
			}	
}