#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[]) {
	int userNum1, userNum2, userNum3, randNum1, randNum2, randNum3, contador;

    printf("Digite tres numeros para o bingo:\n");
    scanf("%d", &userNum1);
    scanf("%d", &userNum2);
    scanf("%d", &userNum3);

    randNum1 = 1 + (rand() % 10);
    contador = 0;
    while(contador < 1) {
        randNum2 = 1 + (rand() % 10);
        if(randNum2 != randNum1) {
            contador++;
        }
    }
    contador = 0;
    while(contador < 1) {
        randNum3 = 1 + (rand() % 10);
        if(randNum3 != randNum1 && randNum3 != randNum2) {
            contador++;
        }
    }

    contador = 0;
    if(userNum1 == randNum1 || userNum1 == randNum2 || userNum1 == randNum3) {
        contador++;
    }
    if(userNum2 == randNum1 || userNum2 == randNum2 || userNum2 == randNum3) {
        contador++;
    }
    if(userNum3 == randNum1 || userNum3 == randNum2 || userNum3 == randNum3) {
        contador++;
    }
    
    printf("\nVoce acertou %d numeros.\n", contador);
	system ("PAUSE");
	return 0;
}
