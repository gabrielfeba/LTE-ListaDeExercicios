#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int numeroFatorial, resultado;
    numeroFatorial = 1;
    while(numeroFatorial != 0) {
        printf("Qual o numero fatorial: ");
        scanf("%d", &numeroFatorial);
        resultado = 1;
        while(numeroFatorial > 1) {
            resultado = resultado * numeroFatorial;
            numeroFatorial--;
        }
        printf("O resultado do numero fatorial eh: %d\n", resultado);
    }
    printf("\nAte logo!!\n");
    system("PAUSE");
    return 0;
} 