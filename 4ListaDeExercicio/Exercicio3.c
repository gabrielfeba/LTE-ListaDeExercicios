#include <stdio.h>
#include <stdlib.h>

int main (int argc,char* argv[]) {
	int numero;
	printf("Qual e o numero? ");
	scanf("%f", &numero);
	
	if(numero % 2 != 1) {
		printf("O numero informado e impar\n");
	}
	
	system ("PAUSE");
	return 0;
}
