#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	
		float a, b, c, o1, o2, o3;
		printf("Digite, com um espaco de diferenca, os tres valores desejados:");
		scanf("%f %f %f", &a, &b, &c);		
		
		if(a>b && a>c)
			o3 = a;
		else if(a<b && a<c)
			o1 = a;	
		else if((a>b && a<c) || (a<b && a>c))
			o2 = a;	
	
		if(b>a && b>c)
			o3 = b;
		else if(b<a && b<c)
			o1 = b;
		else if((b>a && b<c) || (b<a && b>c))
			o2 = b;
	
		if(c>b && c>a) 
			o3 = c;
		else if(c<b && c<a)
			o1 = c;	
		else if((c>b && c<a) || (c<b && c>a))
			o2 = c;
	
	printf("\nOs valores em ordem crescente e: \n\n%.1f \n%.1f \n%.1f", o1, o2, o3);
	
	system ("PAUSE");
	return 0;
	
	
}

