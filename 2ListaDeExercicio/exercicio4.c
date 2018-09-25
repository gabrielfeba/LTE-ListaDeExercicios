#include <stdio.h>
#include <stdlib.h>

int main (int agrc, char* argv[]) {
	char nome[30];
	float salario, salcomaumento;
	printf("Qual o nome do funcionario?\n");
	scanf("%s", &nome);
	printf("-----------------------------\n");
	printf("Qual o salario do funcionario?\n");
	scanf("%f", &salario);
	printf("-----------------------------\n");
	salcomaumento = salario * 1.25;
	printf("O %s teve um aumento de 25 por cento, tornando seu salario de %.2f \n", nome, salcomaumento);
	system ("PAUSE");
	return 0;
}
