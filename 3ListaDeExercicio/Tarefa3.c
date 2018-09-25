#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	float result1, result2, triangulo, a, b, c;
	printf("Coloque o valor de A:\n");
	scanf("%f", &a);
	printf("Coloque o valor de B:\n");
	scanf("%f", &b);
	printf("Coloque o valor de C:\n");
	scanf("%f", &c);
	triangulo = -4 * a;
	triangulo = c * triangulo;
	triangulo = triangulo + (b * b);
	result1 = (b * -1) + triangulo;
	result1 = result1 / (2 * a);
	result2 = (b * -1) - triangulo;
	result2 = result2 / (2 * a);
	printf("Resultado um e %f\n", result1);
	printf("Resultado dois e %f\n", result2);
	system ("PAUSE");
	return 0;
}
