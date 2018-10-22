#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int x, result;
    char ch = 's';
    x = 0;
    while(ch=='s') {
        printf("\nDigite um numero:");
        scanf("%d", &x);
        result = x * 3;
        printf("%d", result);
        printf("\nDeseja continuar? (s/n)");
        scanf("%s", &ch);
    }
    printf("\nAte logo!\n");
    system("PAUSE");
    return 0;
} 