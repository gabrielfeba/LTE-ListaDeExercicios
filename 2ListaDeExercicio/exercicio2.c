#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
	int opcao;
	float valorcelsius, valorfahr;
	printf("Qual voce quer converter digite:\n");
	printf("1 - Celsius para Fahrenheit \n");
	printf("2 - Fahrenheit para Celsius \n");
	scanf("%d", &opcao);
	printf("------------------------------\n");
	if(opcao > 0 && opcao < 3) {
		if(opcao == 1) {
			printf("Digite o valor de Celsius:\n");
			scanf("%f", &valorcelsius);
			printf("------------------------------\n");
			valorfahr = ((9 * valorcelsius) + 160)/5;
			printf("O valor de %.2f Celsius e igual a %.2f Fahrenheit\n", valorcelsius, valorfahr);
			printf("------------------------------\n");
		}
		if(opcao == 2) {
			printf("Digite o valor de Fahrenheit:\n");
			scanf("%f", &valorfahr);
			printf("------------------------------\n");
			valorcelsius = (5 * (valorfahr - 32))/ 9;
			printf(" O valor de %.2f Fahrenheit e igual a %.2f Celsius\n", valorfahr, valorcelsius);
		}
	} else {
		printf("Essa opcao nao esta disponivel!!\n");
		printf("------------------------------\n");
	}
	system ("PAUSE");
	return 0;
}
