#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int cont;
    for(cont = 0; cont <= 48; cont += 2) {
        printf("Cont = %d\n", cont);
    }
    system("PAUSE");
    return 0;
}