#include <stdio.h>
#define TAM 3000
int main(int argc, char *argv[]) {
int i, n;
int arreglo[TAM];
	
	printf("ingrese la cantidad de elementos: ");
	scanf("%d", &n);
	
	for (i = 0; i<n; i++){
		printf("ingrese el elemento [%d]: ", i);
		scanf("%d", &arreglo[i]);
	}
	
	for (i=0; i<n; i++){
		printf("%d\n", arreglo[i]);
	}
	return 0;
}
