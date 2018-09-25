int main(int argc, char * argv[]){
	
	float a,l,c,v;
	
	printf("Digite a altura da caixa: ");
	scanf("%f", &a);
	
	printf("\nDigite a largura da caixa: ");
	scanf("%f", &l);
	
	printf("\nDigite o comprimento da caixa: ");
	scanf("%f", &c);
	
	v = a*c*l;
	
	printf("\nO volume da sua caixa e: %.2f\n\n", v );
	system("PAUSE");
	return 0;
	}
