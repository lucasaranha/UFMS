#include <stdio.h>
int main(void){
	int aux, numero, soma_digitos;
	aux = soma_digitos = 0;
	for(int i = 100; i <= 1000; i++){
		int j = i;
		while(j > 0){
			aux = j%10;
			soma_digitos += aux; //somando os digitos do numero
			j = j/10;
		}
		if(soma_digitos > 10) printf("Números:%d ",i);
		soma_digitos = 0;
	}
}