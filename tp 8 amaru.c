#include <stdio.h>
#define TAM 

// Función para cargar la cantidad tam de elementos a utilizar
// la función devuelve un entero entre 0 y TAM
int ingresarValidarTam(void){
	int n;
	printf("ingrese la cantidad de piezas a evaluar: ");
	scanf("%d", &n);
	
	return n;
}

// Función para cargar los tam elementos en el arreglo
void cargarArreglo(float *arr,const int cantidad_piezas){
	
	for(int i = 0; i < cantidad_piezas; i++) {
		
		printf("Ingrese el valor del arreglo %d: ", i);
		scanf("%f", &*(arr + i));
	}
	printf("\n");
	
}

// Función para calcular la cantidad de piezas defectuosas
int calcularDefectuosas(const float *arr,const int cantidad_piezas){
	int validas = 0;
	
	for(int i = 0; i < cantidad_piezas; i++){
		if(*(arr + i)<20 || *(arr + i)>200){
			validas = validas + 1;
	}
	}
	
	return validas;
}

// Función para calcular la cantidad de piezas válidas
int calcularValidas(const float *arr,const int cantidad_piezas){
	int def = 0;
	for(int i = 0; i < cantidad_piezas; i++){
		if(*(arr + i)>=20 && *(arr + i)<=200){
			def = def + 1;
	}
	}
	
	return def;
}




int main(void) {
	
	float arreglo[TAM] = {0};
	int tam, defectuosas, validas;
	
	tam = ingresarValidarTam();
	cargarArreglo(arreglo, tam);
	defectuosas = calcularDefectuosas(arreglo, tam);
	validas = calcularValidas(arreglo, tam);
	printf("\nVálidas: %d\nDefectuosas: %d\n", validas, defectuosas);
	printf("\nArreglo desordenado:\n");

	
	return 0;
}
