#include <stdio.h>
#include <stdlib.h>

int main (int agrc, char* argv[]) {
	float salariobase, salarioatual, gratificacao, imposto;
	printf("Qual o salario do funcionario?\n");
	scanf("%f", &salariobase);
	printf("-----------------------------\n");
	gratificacao = salariobase * 0.05;
	imposto = salariobase * 0.07;
	salarioatual = salariobase;
	printf("O salario base do funcionario e de %.2f \n", salariobase);
	salarioatual = salarioatual + gratificacao;
	printf("O salario com a bonificacao, por sua boa conduta, ficou de %.2f \n", salarioatual);
	printf(":)\n");
	salarioatual = salarioatual - imposto;
	printf("Mas por que o governo que um pedaço do seu salario voce vai receber apenas %.2f \n", salarioatual);
	printf(":(\n");
	system ("PAUSE");
	return 0;
}
