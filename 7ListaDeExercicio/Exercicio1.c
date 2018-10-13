#include <stdio.h>
#include <stdlib.h>
#include <Math.h>

int main(int argc, char*argv[]) {
	float quilos, excesso, preco;

    printf("\nQual o peso dos peixes em Kg?\n");
    scanf("%f", &quilos);
    if(quilos > 0) {
        if(quilos > 50) {
            excesso = (floor(quilos) + 1) - 50;
            preco = excesso * 4; 
            printf("\nO preco vai ser %.2f\n", preco);
        }
    } else {
        printf("\nPeso negativa nao e valido!\n");
    }
	system ("PAUSE");
	return 0;
}
