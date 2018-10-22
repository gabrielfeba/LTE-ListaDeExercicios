#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int entradaNumero, cont;
    entradaNumero = 1;
    while(entradaNumero > 0) {
        printf("Digite um numero: ");
        scanf("%d", &entradaNumero);
        cont++;
    }
    printf("\nA quantidade de numeros digitados foi: %d\n", cont);
    system("PAUSE");
    return 0;
} 