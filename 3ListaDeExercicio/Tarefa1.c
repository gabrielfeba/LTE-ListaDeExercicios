#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	float a, b, c;
	printf("Qual é o lado A?");
	scanf("%f", &a);
	printf("Qual é o lado B?");
	scanf("%f", &b);
	printf("Qual é o lado C?");
	scanf("%f", &c);
	if(a < (b + c) && b < (a + c) && c < (a + b)) {
		printf("E um triangulo!");
		if(a == b || b == c || c == a) {
			if(a == b && b == c) {
				printf("\nEsse e um triangulo equilatero!\n");
			} else {
				printf("\nEsse e um triangulo isosceles!\n");
			}
		} else {
			printf("\nEsse e um triangulo escaleno!\n");
		}
	} else {
		printf("Nao e um triangulo!");
	}
	system ("PAUSE");
	return 0;
}
