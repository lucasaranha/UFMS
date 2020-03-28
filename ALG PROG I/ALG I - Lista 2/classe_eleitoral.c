#include <stdio.h>
#include <locale.h>
int main(void){
	int idade;
	setlocale(LC_ALL, "Portuguese");
		printf("Digite a sua idade: ");
		scanf("%d", &idade);
			if(idade < 16) printf("Pessoas com %d anos, não são elegívies para votar\n", idade);
			else if(idade >= 18 && idade <= 65) printf("Eleitor obrigatório, idade: %d anos\n", idade);
			else if((idade >= 16 && idade <=17) || (idade > 65)) printf("Sua idade é %d anos, e você possui voto facultativo.\n", idade);
}