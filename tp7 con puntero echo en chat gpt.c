#include <stdio.h>
#define COLS 2

void cargar_elementos(int a[][COLS], int f) {
	int codigos, precios;
	
	for (int i = 0; i < f; i++) {
		printf("Ingrese codigo: ");
		scanf("%d", &codigos);
		a[i][0] = codigos;
		
		printf("Ingrese precio: ");
		scanf("%d", &precios);
		a[i][1] = precios;
	}
}

void ordenamiento(int a[][COLS], int f) {
	int temp;
	
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < f - 1; j++) {
			if (a[j][1] > a[j + 1][1]) {
				// Swap prices
				temp = a[j][1];
				a[j][1] = a[j + 1][1];
				a[j + 1][1] = temp;
				
				// Swap codes
				temp = a[j][0];
				a[j][0] = a[j + 1][0];
				a[j + 1][0] = temp;
			}
		}
	}
}

void imprimir(int *a[][COLS], int f) {
	printf("Codigos  Precios\n");
	
	for (int i = 0; i < f; i++) {
		printf("%d\t%d\n", a[i][0], a[i][1]);
	}
}

int main(int argc, char *argv[]) {
	int tam;
	
	printf("Ingrese el tamaño: ");
	scanf("%d", &tam);
	
	int a[tam][COLS];
	
	cargar_elementos(a, tam);
	ordenamiento(a, tam);
	imprimir(a, tam);
	
	return 0;
}
