#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int numero, resultado;
    resultado = 0;
    for(int contador = 0; contador < 15; contador++) {
        printf("Qual nota eh a nota? ");
        scanf("%d", &numero);
        resultado = resultado + numero;
    }
    resultado = resultado / 15;
    printf("\nO resultado eh : %d", resultado);
    system("PAUSE");
    return 0;
}