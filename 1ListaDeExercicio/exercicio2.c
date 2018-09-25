int main(int argc, char * argv[]){
	int A, B, C;
	
	printf("Digite o valor de A: ");
	scanf("%d", &A);
	
	printf("Digite o valor de B: ");
	scanf("%d", &B);
	C = A;
	A = B;
	printf("\n\no novo valor de A e: %d ", A);
	printf("\n\nO novo valor de B e: %d\n\n", B);
	system("PAUSE");
	return 0;
}
