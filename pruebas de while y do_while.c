#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int arreglo[5];
	int i;
	
	for(i=0; i<5; i++)
		arreglo[i] = i;
	
	for(i=0; i<5; i++)
		printf("el arreglo es[%d]: %d\n", i, arreglo[i]);
	
	return 0;
}

