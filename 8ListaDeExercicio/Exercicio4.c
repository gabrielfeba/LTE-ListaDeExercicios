#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int i;
    while (i<50) {
        printf("%d\n", i);
        i = i + 2;
    }
    system("PAUSE");
    return 0;
} 