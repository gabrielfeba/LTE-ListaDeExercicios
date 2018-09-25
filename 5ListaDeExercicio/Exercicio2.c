#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
	char ch;
	printf("Digite uma letra: ");
	scanf("%s", &ch);
	switch(ch) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("Sua letra e uma vogal\n");
			break;
		default:
			printf("Sua letra e uma consoante\n");
	}
	system ("PAUSE");
	return 0;
}
