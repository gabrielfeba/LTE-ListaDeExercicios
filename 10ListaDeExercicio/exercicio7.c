#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int numeroFatorial, resultado;
    resultado = 1;
    numeroFatorial = 6;
    for(int contador = 1; contador <= numeroFatorial; contador++) {
        resultado = resultado * contador;
    }
    printf("\nO resultado do fatorial de 6 eh : %d", resultado);
    system("PAUSE");
    return 0;
}