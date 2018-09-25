#include <stdio.h>
#include <stdlib.h>

int main (int argc,char* argv[]) {
	float media, notalab, notaexame, notasem;
	printf("Digite a nota do laboratorio: ");
	scanf("%f", &notalab);
	printf("Digite a nota do semestre: ");
	scanf("%f", &notasem);
	printf("Digite a nota do exame: ");
	scanf("%f", &notaexame);
	media = ((notalab * 2) + (notaexame * 5) + (notasem * 3))/10;
	if(media > 8) {
		printf("Sua nota e A\n");
	} else if(media >= 7 && media < 8) {
		printf("Sua nota e B\n");
	} else if(media >= 6 && media < 7) {
		printf("Sua nota e C\n");
	} else if(media >= 5 && media < 6) {
		printf("Sua nota e D\n");
	} else if(media >= 0 && media <= 5) {
		printf("Sua nota e E\n");
	}
	system ("PAUSE");
	return 0;
}
