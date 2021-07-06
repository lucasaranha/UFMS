#include <stdio.h>
#include <math.h>
int main(void){
	unsigned int x, n, res = 1;
		printf("Digite dois números: ");
		scanf("%u %u", &x, &n);
		res = x;
			for(int i = 1; i < n; i++) res  *= x;
		printf("Resultado: %u\n", res);

}