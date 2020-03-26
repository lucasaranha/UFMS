#include <stdio.h>
#include <locale.h>
int main(void){
	int codigo, pecasVendidas;
	char cliente[20], nome_vendedor[20];
	double valorFrete, comissaoVenda, lucro, valorPeca, totalVenda, custo;
	valorPeca = 7.00;
	comissaoVenda = 0.065 * totalVenda;
	setlocale(LC_ALL, "Portuguese");
		printf("Digite o código da região: ");
		scanf("%d", &codigo);
		printf("\nDigite o nome do cliente: ");
		scanf("%s", cliente);
		printf("\nDigite o número de peças vendidas: ");
		scanf("%d", &pecasVendidas);
		printf("O nome do vendedor: ");
		scanf("%s", nome_vendedor);
		custo = pecasVendidas * 7.00;
			switch(codigo){
				case 1:
					if(pecasVendidas <= 1000) valorFrete = pecasVendidas * 1.10;
					else valorFrete = pecasVendidas * 1.05;	
					break;

				case 2:
					if(pecasVendidas <= 1000) valorFrete = pecasVendidas * 1.00;
					else valorFrete = pecasVendidas * 0.90;
					break;

				case 3:
					if(pecasVendidas <= 1000) valorFrete = pecasVendidas * 1.15;
					else valorFrete = pecasVendidas * 1.00;
					break;

				case 4:
					if(pecasVendidas <= 1000) valorFrete = pecasVendidas * 1.35;
					else valorFrete = pecasVendidas * 1.30;
					break;

				case 5:
					if(pecasVendidas <= 1000) valorFrete = pecasVendidas * 1.25;
					else valorFrete = pecasVendidas * 1.20;
					break;
			}
			totalVenda = (custo+(custo*0.5)) + valorFrete;
			comissaoVenda = totalVenda * 0.065;
			lucro = totalVenda - comissaoVenda - custo;
			printf("RESUMO DA SUA COMPRA");
			printf("\nOi %s, esse são os dados finais da sua compra:", cliente);
			printf("\nTotal da venda: R$ %.2lf", totalVenda);
			printf("\nValor do frete: R$ %.2lf", valorFrete);
			printf("\nA comissão do vendedor foi de R$ %.2lf", comissaoVenda);
			printf("\nO lucro com a venda foi de R$ %.2lf", lucro);



}