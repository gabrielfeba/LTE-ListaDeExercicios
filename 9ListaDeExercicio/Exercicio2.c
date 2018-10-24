#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int x, r;
    char resp;
    do {
        printf("Digite um valor para X:");
        scanf("%d", &x);
        r = x * 3;
        printf("\nO valor de r eh: %d\n",r);
        printf("\nDeseja continuar ? (s/n)");
        scanf("%s", &resp);
    } while(resp == 's');
    system("PAUSE");
    return 0;
}