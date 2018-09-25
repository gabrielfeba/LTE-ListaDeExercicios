#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
	float a,b,c;
	float ra,rb,rc,rd,re;
	printf("Qual e o valor da variavel A?\n");
	scanf("%f", &a);
	printf("-----------------------------\n");
	printf("Qual e o valor da variavel B?\n");
	scanf("%f", &b);
	printf("-----------------------------\n");
	printf("Qual e o valor da variavel C?\n");
	scanf("%f", &c);
	printf("-----------------------------\n");
	ra = (a / b) + 1;
	rb = (a - b) / (a + b);
	rc = (a - (b / c)) / (a + (b / c));
	rd = a - (b / (b + c));
	re = ((b + c) * a ) / (a + b);
	printf("Resultado A e %.2f \n", ra);
	printf("Resultado B e %.2f \n", rb);
	printf("Resultado C e %.2f \n", rc);
	printf("Resultado D e %.2f \n", rd);
	printf("Resultado E e %.2f \n", re);
	system ("PAUSE");
	return 0;
}
