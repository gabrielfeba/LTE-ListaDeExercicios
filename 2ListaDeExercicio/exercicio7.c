#include <stdio.h>
#include <stdlib.h>

int main (int agrc, char* argv[]) {
	float distancia, tempo, velocidade, litros_usados;
	printf("Qual foi o tempo percorrido?\n");
	scanf("%f", &tempo);
	printf("-----------------------------\n");
	printf("Qual foi a velocidade media?\n");
	scanf("%f", &velocidade);
	printf("-----------------------------\n");
	distancia = velocidade * tempo;
	litros_usados = distancia / 12;
	printf("A velocidade media foi de %f \nO tempo gasto na viagem foi de %f\nA distancia percorrida foi de %f\nA quantidade de litros utilizada na viagem foi de %f\n.", velocidade, tempo, distancia, litros_usados);
	system ("PAUSE");
	return 0;
}
