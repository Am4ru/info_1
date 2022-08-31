#include <stdio.h>

int main(void) {
	
	int cod;
	int c1;
	int c2;
	int c3;
	int c4;
	
	
	printf("ingrese numero de cuatro cifras: ");
	
	
	scanf("%4d", &cod);
	
		
		
		c1 = cod / 1000;
		c2 = (cod / 100) % 10;
		c3 = (cod / 10) % 10;
		c4 = cod % 10;
		
		
		c1 += 7;	
		c2 += 7;
		c3 += 7;
		c4 += 7;
		
		c1 %= 10;
		c2 %= 10;
		c3 %= 10;
		c4 %= 10;
		
		printf("el numero encriptado es: %d%d%d%d\n" ,c3,c4,c1,c2);
	return 0;
}

