#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int x, r, cont;
    cont = 1;
    do {
        printf("Digite um valor para X: ");
        scanf("%d", &x);
        r = x * 3;
        printf("\nO valor de r eh: %5d\n",r);
        cont++;
    } while (cont<=5);
    system("PAUSE");
    return 0;
}