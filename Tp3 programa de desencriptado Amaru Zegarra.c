#include <stdio.h>

int main(void) {
	
	
	int cod_crypt;
	int c1;
	int c2;
	int c3;
	int c4;
	
	
	printf("ingrese contraseña de cuatro cifras: ");
	scanf("%4d", &cod_crypt);
	
	
	c1 = cod_crypt / 1000;
	c2 = (cod_crypt / 100) % 10;
	c3 = (cod_crypt / 10) % 10;
	c4 = cod_crypt % 10;
	
	
		c1 = (c1 + 3) %10;
		c2 = (c2 + 3) %10;
		c3 = (c3 + 3) %10;
		c4 = (c4 + 3) %10;
	
	
	printf("la contraseña desencriptada es: %d%d%d%d\n", c3,c4,c1,c2);
	
	

	return 0;
}

