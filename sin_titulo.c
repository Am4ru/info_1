#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float nota = 9;
	float * pnota;
	
	pnota = &nota;
	
	printf("el valor es: %f\n", nota);
	printf("el valor es: %p\n", pnota);
	
	return 0;
}

