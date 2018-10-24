#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int qualNumero, resultado, contador;
    contador = 1;
    printf("Qual tabuada? ");
    scanf("%d", &qualNumero);
    do {
        resultado = qualNumero * contador;
        printf("O %d vezes %d eh igual a %d.\n", qualNumero, contador, resultado);
        contador++;
    }while(contador <= 10);
    system("PAUSE");
    return 0;
}