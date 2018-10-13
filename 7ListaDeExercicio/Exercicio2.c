#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[]) {
	float velocidadeMaxima, velocidadeDoMotorista, resultadoDaDiferenca, pagar;

    printf("Qual a velocidade maxima?\n");
    scanf("%f", &velocidadeMaxima);
    printf("\nQual a velocidade do motorista?\n");
    scanf("%f", &velocidadeDoMotorista);

    if(velocidadeDoMotorista > velocidadeMaxima) {
        resultadoDaDiferenca = velocidadeDoMotorista - velocidadeMaxima;
        resultadoDaDiferenca = (floor(resultadoDaDiferenca)) + 1;
        if(resultadoDaDiferenca < 10) {
            pagar = 50;
        } else if(resultadoDaDiferenca < 31) {
            pagar = 100;
        } else {
            pagar = 200;
        }
        printf("\nVoce deve pagar %.2f reais\n", pagar);
    } else {
        printf("\nO motorista estava na velocidade permitida.\n");
    }

    
	system ("PAUSE");
	return 0;
}
