#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int contador, numeroPositivo, resultadoProduto, resultadoSoma, contadorProduto;
    resultadoProduto = 1, resultadoSoma = 0, contador = 0;
    while(contador < 20) {
        printf("Digite um numero positivo: ");
        scanf("%d", &numeroPositivo);
        while(numeroPositivo < 1) {
            printf("Por favor, Digite um numero POSITIVO: ");
            scanf("%d", &numeroPositivo);
        }
        if((numeroPositivo % 2) == 0) {
            resultadoSoma = resultadoSoma + numeroPositivo;
        }
        if((numeroPositivo % 2) == 1) {
            resultadoProduto = resultadoProduto * numeroPositivo;
        }
        contador++;
    }
    printf("\nO resultado da soma dos numeros pares sao: %d\n", resultadoSoma);
    printf("\nO resultado do produto dos numeros impares sao: %d\n", resultadoProduto);
    printf("\nAte logo!!\n");
    system("PAUSE");
    return 0;
}