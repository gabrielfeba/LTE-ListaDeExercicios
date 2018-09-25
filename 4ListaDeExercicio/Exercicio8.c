#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
	float number1, number2;
	printf("Qual a base do triangulo?");
	scanf("%f", &number1);
	printf("Qual a altura do triangulo?");
	scanf("%f", &number2);
	if(number1 > 0 && number2 > 0) {
		number1 = number1 * number2;
		number1 = number1 / 2;
		printf("A area do triangulo e %f", number1);
	} else {
		printf("Digite um número positivo")
	}
	system ("PAUSE");
	return 0;
}
