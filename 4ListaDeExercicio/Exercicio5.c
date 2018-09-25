#include <stdio.h>
#include <stdlib.h>

int main (int argc,char* argv[]) {
	float nota1, nota2, media;
	printf("Qual e a primeira nota? ");
	scanf("%f", &nota1);
	printf("Qual e a segunda nota? ");
	scanf("%f", &nota2);
	media = (nota1 + nota2)/2;
	if(media >= 7) {
		printf("Aluno foi aprovado!\n");
	} else if (media >= 5 && media < 7) {
		printf("Aluno esta de exame!\n");
	} else if (media < 5) {
		printf("Aluno esta reprovado!\n");
	}
	system ("PAUSE");
	return 0;
}
