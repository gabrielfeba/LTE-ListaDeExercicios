#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int numeroFatorial, resultado;
    resultado = 1;
    printf("Qual o numero fatorial ? ");
    scanf("%d", &numeroFatorial);
    for(int contador = 1; contador <= numeroFatorial; contador++) {
        resultado = resultado * contador;
    }
    printf("\nO resultado eh : %d", resultado);
    system("PAUSE");
    return 0;
}