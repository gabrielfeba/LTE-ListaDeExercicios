#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int numero, resultado;
    numero = 1;
    while(numero != 0) {
        printf("Qual o numero: ");
        scanf("%d", &numero);
        resultado = 0;
        while(numero > 0) {
            resultado = resultado + numero;
            numero--;
        }
        printf("O resultado da soma dos termo do numero eh: %d\n", resultado);
    }
    printf("\nAte logo!!\n");
    system("PAUSE");
    return 0;
} 