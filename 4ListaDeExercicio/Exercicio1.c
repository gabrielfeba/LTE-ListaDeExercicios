#include <stdio.h>
#include <stdlib.h>

int main (int argc,char* argv[]) {
	float minimo, salario, quantidade;
	char nome[30];
	printf("Qual o nome do funcionario?\n");
	scanf("%s", &nome);
	printf("Qual o salario do funcionario?\n");
	scanf("%f", &salario);
	printf("Qual o salario minimo atual?\n");
	scanf("%f", &minimo);
	quantidade = salario  / minimo;
	printf("\nO salario do %s e %.2f\n", nome, quantidade);
	
	system ("PAUSE");
	return 0;
}
