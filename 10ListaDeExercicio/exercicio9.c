#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int numeroInteiro, resultado;
    resultado = 0;
    printf("Qual o numero Inteiro ? ");
    scanf("%d", &numeroInteiro);
    for(int contador = 1; contador <= numeroInteiro; contador++) {
        resultado = resultado + contador;
    }
    printf("\nO resultado eh : %d", resultado);
    system("PAUSE");
    return 0;
}