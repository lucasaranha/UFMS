#include <stdio.h>
int main(void){
	int valor, nota100, nota50, nota20, nota10, nota5, nota2, moeda1;
	nota100 = nota50 = nota20 = nota10 = nota5 = nota2 = moeda1 = 0;
		printf("Digite o valor que deseja sacar: ");
		scanf("%d", &valor);
			if(valor){
				nota100 = valor/100;
				printf("%d nota(s) de R$ 100,00\n", nota100);
				nota50 = (valor-(nota100*100))/50;
				printf("%d nota(s) de R$ 50,00\n", nota50);
				nota20 = (valor-(nota100*100+nota50*50))/20;
				printf("%d nota(s) de R$ 20,00\n", nota20);
				nota10 = (valor-(nota100*100+nota50*50+nota20*20))/10;
				printf("%d nota(s) de R$ 10,00\n", nota10);
				nota5 = (valor-(nota100*100+nota50*50+nota20*20+nota10*10))/5;
				printf("%d nota(s) de R$ 5,00\n", nota5);
				nota2 = (valor-(nota100*100+nota50*50+nota20*20+nota10*10+nota5*5))/2;
				printf("%d nota(s) de R$ 2,00\n", nota2);
				moeda1 = (valor-(nota100*100+nota50*50+nota20*20+nota10*10+nota5*5+nota2*2));
				printf("%d moedas de R$ 1,00", moeda1);
			}
return 0;



}