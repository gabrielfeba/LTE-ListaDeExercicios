#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    for(int contador = 0; contador <= 150; contador++) {
        if((contador % 5) == 0) {
            printf("%d\n", contador);
        }
    }
    system("PAUSE");
    return 0;
}