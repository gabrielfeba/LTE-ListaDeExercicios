#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int contador;
    contador = 100;
    do {
        printf(" %d |", contador);
        contador = contador + 2;
    } while(contador <= 200);
    system("PAUSE");
    return 0;
}