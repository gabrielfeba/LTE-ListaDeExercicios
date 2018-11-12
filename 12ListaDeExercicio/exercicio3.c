#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int mat[2][2], resultado[2][2], i, j, maior;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("\nDigite o elemento da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    maior = mat[0][0];
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            if(mat[i][j] > maior) {
                maior = mat[i][j];
            }
        }
    }
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            resultado[i][j] = maior * mat[i][j];
        }
    }
    printf("\nImprimindo a matriz resultante: ");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d    \n", resultado[i][j]);
        }
    }
    system("PAUSE");
    return 0;
}