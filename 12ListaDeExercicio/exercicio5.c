#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    char *lojas[8], *produtos[4];
    float precos[4][8];
    int i,j;
    for(j = 0; j < 8; j++) {
        printf("\nDigite o nome da %d loja ", j+1);
        scanf("%s", &lojas[j]);
    }
    for(i = 0; i < 4; i++) {
        printf("\nDigite nome do %d produto ", i+1);
        scanf("%s", &produtos[i]);
    }
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 8; j++) {
            printf("\n Digite o preco do produto %c na loja %c ", produtos[i], lojas[j]);
            scanf("%f", &precos[i][j]);
        }
    }
    printf("\nListagem dos produtos e respectivas lojas cujos precos nao ultrapassam R$ 120,00");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 8; j++) {
            if(precos[i][j] < 120) {
                printf("\n %c - %c ", produtos[i], lojas[j]);
            }
        }
    }
    printf("\n");
    system("PAUSE");
    return 0;
}