#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int numeroDeEntrada, contador;
    numeroDeEntrada = 1;
    contador = 0;
    printf("Obs: Para encerrar digite 0.\n");
    while(numeroDeEntrada != 0) {
        printf("Digite um numero: ");
        scanf("%d", &numeroDeEntrada);
        if(numeroDeEntrada >= 100 && numeroDeEntrada <= 200) {
            contador++;
        }
    }
    printf("\nA quantidade de numeros entre 100 e 200 digitados foi: %d\n", contador);
    system("PAUSE");
    return 0;
} 