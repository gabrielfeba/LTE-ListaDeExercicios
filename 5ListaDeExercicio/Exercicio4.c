#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
	float salario;
	char funcionario;
	printf("Coloque a classificacao do Funcionario: \n");
	scanf("%s", &funcionario);
	printf("Qual o salario?\n");
	scanf("%f", &salario);
	switch(funcionario) {
		case 'a':
		case 'c':
		case 'f':
		case 'h':
			salario = salario * 1.10;
			printf("O salario com aumento sera %.2f\n", salario);
			break;
		case 'b':
		case 'd':
		case 'e':
		case 'i':
		case 'j':
		case 't':
			salario = salario * 1.15;
			printf("O salario com aumento sera %.2f\n", salario);
			break;
		case 'k':
		case 'r':
			salario = salario * 1.25;
			printf("O salario com aumento sera %.2f\n", salario);
			break;
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 's':
			salario = salario * 1.35;
			printf("O salario com aumento sera %.2f\n", salario);
			break;
		case 'u':
		case 'v':
		case 'x':
		case 'y':
		case 'w':
		case 'z':
			salario = salario * 1.50;
			printf("O salario com aumento sera %.2f\n", salario);
			break;
		default:
			printf("Coloque uma classificacao valida\n");
	}
	system ("PAUSE");
	return 0;
}
