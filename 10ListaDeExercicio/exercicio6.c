#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int i, j, k;
    for(k = 0; k < 2; k++) {
        printf("\n");
        for(i = 1; i < 5; i++) {
            printf("Tabuada do %3d    ", i+4*k+1);
        }
        printf("\n");
        for(i = 1; i < 10; i++) {
            for(j = 2+4*k; j<=5+4*k; j++) {
                printf("%3d x%3d = %3d   ",j,i,j*i);
            }
            printf("\n");
        }
    }
    system("PAUSE");
    return 0;
}
//Na apostila está desse jeito, mas para mim está muito mau escrito;