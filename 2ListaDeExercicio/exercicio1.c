#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
	float valorproduto, valorvenda;
	char nomeproduto[30];
	printf("----------------------------------------\n");
	printf("Qual e o nome do produto?\n");
	scanf("%s", &nomeproduto);
	printf("----------------------------------------\n");
	printf("Qual e o valor do produto?\n");
	scanf("%f", &valorproduto);
	printf("----------------------------------------\n");
	valorvenda = valorproduto * 1.3;
	printf("O valor da venda do produto %s e de %f \n", nomeproduto, valorvenda);
	printf("\n\n");
	printf("att., Gabriel Feba\n");
	system ("PAUSE");
	return 0;
}
