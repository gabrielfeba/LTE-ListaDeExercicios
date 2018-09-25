#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[])
{
	float x;
	printf("------------------------------------\n");
	printf ("Insira seu numero: ");
	scanf ("%f",&x);
	printf("------------------------------------\n");
	if (x >= 0  && x < 100)
		printf("X entre 0 e 100");
	else if (x >= 100 && x < 1000)
		printf("X entre 100 e 1000");
	else if (x >= 1000)
		printf("X maior ou igual a 1000");
	else if (x < 0)
		printf("X menor que zero");
	printf("\n------------------------------------\n");
	system ("PAUSE");
	return 0;
}

