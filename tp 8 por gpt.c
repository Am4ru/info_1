#include <stdio.h>
#define TAM 100

// Función para cargar la cantidad de elementos a utilizar
// La función devuelve un entero entre 0 y TAM
int ingresarValidarTam(void) {
	int n;
	printf("Ingrese la cantidad de piezas a evaluar: ");
	scanf("%d", &n);
	
	return n;
}

// Función para cargar los elementos en el arreglo
void cargarArreglo(float *arr, const int cantidad_piezas) {
	for (int i = 0; i < cantidad_piezas; i++) {
		printf("Ingrese el valor del arreglo %d: ", i);
		scanf("%f", (arr+i)); // 
	}
	printf("\n");
}

// Función para calcular la cantidad de piezas defectuosas
int calcularDefectuosas(const float *arr, const int cantidad_piezas) {
	int defectuosas = 0;
	
	for (int i = 0; i < cantidad_piezas; i++) {
		if (arr[i] < 20 || arr[i] > 200) {
			defectuosas++;
		}
	}
	
	return defectuosas;
}

// Función para calcular la cantidad de piezas válidas
int calcularValidas(const float *arr, const int cantidad_piezas) {
	int validas = 0;
	
	for (int i = 0; i < cantidad_piezas; i++) {
		if (arr[i] >= 20 && arr[i] <= 200) {
			validas++;
		}
	}
	
	return validas;
}

// Función para mostrar todas las piezas ingresadas
void mostrarPiezas(const float *arr, int cantidad_piezas) {
	for (int i = 0; i < cantidad_piezas; i++) {
		printf("Pieza %d: %.2f\n", i, arr[i]); // *(arr+i) == arr[i]
											   // *(i+arr) == i[arr]
	}
}



void ordenarPiezas(float* arr, int tam) {
	for (int i = 0; i < tam; i++) {
		for (int j = 0; j < tam - 1; j++) {
			if(arr[j] > arr[j + 1]){
				float *ptr1, *ptr2;
				ptr1 = &arr[j];
				ptr2 = &arr[j+1];
				
				float temp = *ptr1;
				*ptr1 = *ptr2;
				*ptr2 = temp;
			}
		}
	}
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
	mostrarPiezas(arreglo, tam);
	
	// Llamamos a la función de ordenamiento para ordenar el arreglo de piezas
	ordenarPiezas(arreglo, tam);
	
	printf("\nArreglo ordenado de menor a mayor:\n");
	mostrarPiezas(arreglo, tam);
	return 0;
}


// un arreglo de punteros ocupa 8 bytes
