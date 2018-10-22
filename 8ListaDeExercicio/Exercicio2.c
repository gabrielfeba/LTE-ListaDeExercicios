#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int conta;
    conta = 0;
    while(conta < 10) {
        printf("Conta: %5d\n", conta);
        conta++;
    }
    system("PAUSE");
    return 0;
} 