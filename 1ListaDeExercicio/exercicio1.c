int main(int argc, char *argv[]){
	
	float raio, altura, volume;
	
	printf("Digite o raio do tonel: ");
	scanf("%f", &raio);
	
	printf("Digite a altura do tonel: ");
	
	scanf("%f", &altura);
	volume =  (raio * raio) * 3.1415 * altura;
	
	printf("\n\nO volume do tonel e: %5.2f \n\n", volume);		
	system("PAUSE");
	return 0;
}
	
	
	
