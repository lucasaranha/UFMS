#include <stdio.h>
int main(void){
	int i = 1, j = 1;
	while(i <= 9){
		while(j <= 9){
			printf("Tabuada do %d: %d x %d = %d\n", i, i, j, i*j);
			j++;
		}
		++i;
		j = 0;
		printf("\n");
	}
}