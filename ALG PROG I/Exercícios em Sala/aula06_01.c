#include <stdio.h>
int main(void){
	int numero, contPrimos, n, div, qtd;
	contPrimos = 0;
	div = 2;
	qtd = 1;
	n = 2; //quando chegar no número de primos desejado, o laço se encerra
	contPrimos = 0;

		scanf("%d", &numero);

		while(contPrimos < numero){
			do
			{
				if(n%div == 0){
					++qtd;
					++div;
				}
				else ++div;
			} while (div <= n);

			if(qtd <= 2) {
				++contPrimos;
			}
			printf("%d", n);
			++n;
			div = 0;
			qtd = 0;
		}
}