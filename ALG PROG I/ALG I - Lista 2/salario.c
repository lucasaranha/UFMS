#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
int main(void){
	double salario;
	char opcao;
		printf("Digite o seu salário e a opção de bônus recebida: ");
		scanf("%lf %c", &salario, &opcao);

		if(opcao == 'A'){
			salario = salario+(salario*0.10);
		}
		else if(opcao == 'B'){
			salario = salario+(salario*0.15);
		}

		else if(opcao == 'C'){
			salario = salario+(salario*0.20);
		}
		printf("%.lf", salario);

}