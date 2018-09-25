#include <stdio.h>
#include <stdlib.h>

int main (int argc,char* argv[]) {
	float num1, num2, num3, resultado;
	printf("Digite os três numeros: \n");
	scanf("%f", &num1);
	scanf("%f", &num2);
	scanf("%f", &num3);
	num1 = num1 * num1;
	num2 = num2 * num2;
	num3 = num3 * num3;
	resultado = num1 + num2 + num3;
	printf("O resultado e %.2f\n", resultado);
	system ("PAUSE");
	return 0;
}
