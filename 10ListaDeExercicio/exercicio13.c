#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int resultado = 1;
    for(int contador = 10; contador <= 20; contador += 2) {
        resultado = contador + resultado;
    }
    printf("%d\n", resultado);
    system("PAUSE");
    return 0;
}