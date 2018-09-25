#include <stdio.h>
#include <stdlib.h>

int main (int agrc, char* argv[]) {
	char nome[30];
	float salario, salcomaumento, aumento;
	printf("Qual o nome do funcionario?\n");
	scanf("%s", &nome);
	printf("-----------------------------\n");
	printf("Qual o salario do funcionario?\n");
	scanf("%f", &salario);
	printf("-----------------------------\n");
	printf("Qual o aumento?\n");
	scanf("%f", &aumento);
	printf("-----------------------------\n");
	salcomaumento = salario * ((aumento/100) + 1);
	printf("O %s teve um aumento de %f por cento, tornando seu salario de %.2f \n", nome, aumento, salcomaumento);
	system ("PAUSE");
	return 0;
}
