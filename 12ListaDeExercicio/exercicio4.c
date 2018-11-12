#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    float notas[3][3], menor;
    int prova_menor, i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("\nDigite a %d nota do aluno %d:",j+1,i+1);
            scanf("%f",&notas[i][j]);
        }
    }
    for(i = 0; i < 3; i++) {
        printf("\nAluno numero %d : ", i+1);
        menor = notas[i][0];
        prova_menor = 0;
        for (j = 0; j < 3; j++) {
            if(notas[i][j] < menor) {
                menor = notas[i][j];
                prova_menor = j;
            }
        }
        printf("\nA menor nota do Aluno %d foi na %da. prova. \n",i+1, prova_menor+1);
    }
    system("PAUSE");
    return 0;
}