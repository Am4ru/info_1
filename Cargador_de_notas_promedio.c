#include <stdio.h>
#define TAM 10


int main(int argc, char *argv[]) {
	
	int numeros[TAM];
	float promedio;
	float suma = 0;
	
	for (int i = 0; i < TAM; i++){
		printf("ingrese numero %d: ",i);
		scanf("%d", &numeros[i]);
		
	}
	
	for (int i = 0; i < TAM; i++){
		printf("la nota %d es: %d\n", i, numeros[i]);
		suma += numeros[i];
	}
	
	promedio = suma / TAM;
	
	printf("el promedio es: %.2f", promedio);
	
	return 0;
}

