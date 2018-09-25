#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	float salario;
	char nome[30];
	printf("Digite o nome do funcionario: ");
	scanf("%s", &nome);
	printf("Digite o salario do funcionario: ");
	scanf("%f", &salario);
	if (salario < 500) {
		salario =salario * 1.15;
		printf("O salario de %s com reajuste e de %.2f\n", nome, salario);
	} else if (salario >= 500 && salario <= 1000) {
		salario = salario * 1.10;
		printf("O salario de %s com reajuste e de %.2f\n", nome, salario);
	} else if (salario > 1000) {
		salario = salario * 1.05;
		printf("O salario de %s com reajuste e de %.2f\n", nome, salario);
	}
	system("PAUSE");
	return 0;
}
