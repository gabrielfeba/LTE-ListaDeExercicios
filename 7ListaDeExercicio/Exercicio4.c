#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[]) {
	int contador, numero, resultado;
    
    contador = 0;
    while(contador < 4) {
        printf("Digite um numero:\n");
        scanf("%d", &numero);
        if((numero % 2) == 0) {
            resultado = resultado + numero;
        }
        contador++;
    }
    printf("\nA soma dos numeros pares é %d", resultado);
	system ("PAUSE");
	return 0;
}
