#include <stdio.h>

int main(void) {
	
	int cod;
	int c1;
	int c2;
	int c3;
	int c4;
	
	

	
	printf("hola ingrese su numero\n");
	printf("de cuatro cifras: ");
	
	
	scanf("%d", &cod);
	
	
	
	if (cod < 999) {
		
		printf("ingrese un numero mayor \n");
		printf("por favor \n");
	}else{
	

		if (cod > 9999){
		
		printf("ingrese un numero que entre en el rango \n");
		printf("por favor que se de cuatro cifras :V \n");
		
		}else{
		
		c1 = cod / 1000;
		
		printf("c1 vale: %d\n" , c1);
		
		
		c2 = (cod / 100) % 10;
		
		printf("c2 vale: %d\n" , c2);
		
		
		c3 = (cod / 10) % 10;
		
		printf("c3 vale: %d\n" , c3);
		
		
		c4 = cod % 10;
		
		printf("c4 vale: %d\n" , c4);
		
		c1 += 7;
		
		c2 += 7;
		
		c3 += 7;
		
		c4 += 7;
		
		
		c1 %= 10;
		printf("c1 vale ahora: %d \n" , c1);
		
		
		c2 %= 10;
		printf("c2 vale ahora: %d \n" , c2);
		
		
		c3 %= 10;
		printf("c3 vale ahora: %d \n" , c3);
		
		
		c4 %= 10;
		printf("c4 vale ahora: %d \n" , c4);
		
		printf("el numero encriptado es: %d%d%d%d\n" ,c3, c4, c1, c2);
		}}

	return 0;
}

