#include <stdio.h>
#include <locale.h>
int main(void){
	int a, b, c;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite os lados do triângulo: ");
	scanf("%d %d %d", &a, &b, &c);
		if(((a<=0) || (b<=0) || (c<=0)) && ((a<= b+c) || (b<= a+c) || (c<= a+b))) printf("Dados inválidos, não é um triângulo\n");
		else{
			if((a==b) && (b==c)) printf("Equilatero\n");
			else if((a!=b) && (b!=c)) printf("Escaleno\n");
			else if(((a==b) && (b!=c)) || ((c==a) && (b!=c))) printf("Isósceles\n");
		}
}