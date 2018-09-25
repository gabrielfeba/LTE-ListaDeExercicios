#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int cor, dias;
	float resultado;
	printf("Digite a cor do DVD...\n1 - Verde, 2 - Azul, 3 - Branco, 4 - Rosa\n");
	scanf("%d", &cor);
	if(cor <= 0 || cor >= 5) {
		printf("Digite uma cor valida\n");
	} else {
		printf("Quantos dias? ");
		scanf("%d", &dias);
		if(cor == 1) {
			resultado = 5.5 * dias;
			printf("O valor e %.2f\n", resultado);
		} else if(cor == 2) {
			resultado = 5.7 * dias;
			printf("O valor e %.2f\n", resultado);
		} else if(cor == 3) {
			resultado = 4.0 * dias;
			printf("O valor e %.2f\n", resultado);
		} else if(cor == 4) {
			resultado = 3.5 * dias;
			printf("O valor e %.2f\n", resultado);
		}
	}
	system("PAUSE");
	return 0;
}
