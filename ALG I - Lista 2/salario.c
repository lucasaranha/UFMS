#include <stdio.h>
int main(void){
	double salario;
	char opcao;
		scanf("%lf", &salario);
		scanf("%s", &opcao);

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