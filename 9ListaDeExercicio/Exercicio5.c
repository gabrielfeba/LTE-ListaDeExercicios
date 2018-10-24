#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int numeroFatorial, contador, resultado;
    contador = 1, resultado = 1;
    printf("Qual o numero fatorial? : ");
    scanf("%d", &numeroFatorial);
    do {
        resultado = contador * resultado;
        contador++;
    } while(contador <= numeroFatorial);
    printf("O resultado do numero fatorial eh : %d", resultado);
    system("PAUSE");
    return 0;
}