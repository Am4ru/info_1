#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int main(int argc, char *argv[]) {
	
	
	int *parr;
	int tam;
	
	do{ // cargo el tamaño del arreglo
		printf("ingrese el tam: ");
		scanf("%d",&tam);
	}while(tam < 0 || tam > TAM);
	
	parr = malloc(sizeof(int)* tam); //asigno que los elementos del arreglo va a tener un entero
	
	*(parr+3) = 10; //asigno ese elemento mediante la direccion de la memoria no por medio de la variable
	
	printf("%d", parr[3]);
	
	return 0;
}

