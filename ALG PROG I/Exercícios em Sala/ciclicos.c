#include <stdio.h>
int main(void){
	int num1, num2, soma1, soma2, aux1, aux2;
	soma1 = soma2 = 0;
		printf("Digite dois número: ");
		scanf("%d%d", &num1, &num2);

		while(num1 > 0 && num2 > 0){
			aux1 = num1%10;
			soma1 += aux1;
			num1 /= 10;

			aux2 = num2%10;
			soma2 += aux2;
			num2 /= 10;
		}
		
		if(soma1 == soma2) printf("Os números são cíclicos\n");
		else printf("Não são cíclicos\n");

return 0;
}