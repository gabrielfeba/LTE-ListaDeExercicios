#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int numeroFatorial, resultado;
    numeroFatorial = 5;
    resultado = 1;
    while(numeroFatorial != 0) {
        resultado = resultado * numeroFatorial;
        numeroFatorial--;
    }
    printf("O resultado do numero fatorial eh: %d\n", resultado);
    system("PAUSE");
    return 0;
} 