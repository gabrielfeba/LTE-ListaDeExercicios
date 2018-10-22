#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	switch(numero) {
		case 1:
			printf("Seu numero e impar\n");
			break;
		case 2:
			printf("Seu numero e par\n");
			break;
		case 3:
			printf("Seu numero e impar\n");
			break;
		case 4:
			printf("Seu numero e par\n");
			break;
		case 5:
			printf("Seu numero e impar\n");
			break;
		case 6:
			printf("Seu numero e par\n");
			break;
		case 7:
			printf("Seu numero e impar\n");
			break;
		case 8:
			printf("Seu numero e par\n");
			break;
		case 9:
			printf("Seu numero e impar\n");
			break;
		case 10:
			printf("Seu numero e par\n");
			break;
		default:
			printf("Seu numero nao e entre 1 a 10\n");
	}
	system ("PAUSE");
	return 0;
}
