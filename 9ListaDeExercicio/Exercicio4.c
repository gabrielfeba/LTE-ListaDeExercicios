#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    char letra;
    letra = 'A';
    do {
        printf("O valor ASCII de %c: %d, e seu HexaDecimal: %x\n", letra,letra,letra);
        letra++;
    } while(letra<='z');
    system("PAUSE");
    return 0;
}