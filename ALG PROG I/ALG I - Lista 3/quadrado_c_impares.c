#include <stdio.h>
#include <locale.h>
int main(void){
	int numero, somatorio, n, cont;
	somatorio = 0, cont = 0;
	n = 1;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um número: ");
	scanf("%d", &numero);
		while(cont < numero){
			if(n%2 == 1) printf("Valor atual: %d\n", somatorio), somatorio += n, cont++;
				++n;
		}
		printf("O resultado é: %d", somatorio);
return 0;
}