#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int tabuada, resultado;
    printf("Qual tabuada a madame deseja?");
    scanf("%d", &tabuada);
    for(int contador = 1; contador <= 10; contador++) {
        resultado = contador * tabuada;
        printf("\nO %d vezes %d eh igual a %d.\n", tabuada, contador, resultado);
    }
    system("PAUSE");
    return 0;
}