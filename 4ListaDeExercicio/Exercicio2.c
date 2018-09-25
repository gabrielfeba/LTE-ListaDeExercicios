#include <stdio.h>
#include <stdlib.h>

int main (int argc,char* argv[]) {
	float tempo, valor, taxa, prestacao;
	printf("Qual e o tempo? \n");
	scanf("%f", &tempo);
	printf("Qual e a taxa? \n");
	scanf("%f", &taxa);
	printf("Qual e a valor? \n");
	scanf("%f", &valor);
	prestacao = valor + (valor * (taxa/100) * tempo);
	printf("\nSua prestacao vai ser %.2f\n", prestacao);
	
	system ("PAUSE");
	return 0;
}
