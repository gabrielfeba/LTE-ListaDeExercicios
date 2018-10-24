#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    for(int contador = 999; contador <= 1500; contador += 2) {
        printf("%d eh impar,\n", contador);
    }
    printf("Vai Tarde!\n");
    system("PAUSE");
    return 0;
}