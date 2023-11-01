#include <stdio.h>
#define TAM 3

/** Función para sumar arreglos
* operación:  c = a + b
*  */
void sumar_arreglos(float* arreglo_c,
					const float* arreglo_a,
					const float* arreglo_b,
					const int tam)
{
	for (int i = 0; i < tam; i++){
		*(arreglo_c+i) = *(arreglo_a+i) + *(arreglo_b+i);//notacion de arreglo
		//ej de notacion de arreglo_a[3] = 3.3
		//ej de notacion de puntero *(arreglo_a+3) = 3.3
	}
}



void cargar_arreglo(float* arreglo, int tam){
	
	float *pb;
	float *pa;
	
	for (int i = 0; i < TAM; i++){
		printf("Ingrese el elemento a[%d]: ", i);
		scanf("%f", pa[i]);
	}
	
	for (int i = 0; i < TAM; i++){
		printf("Ingrese el elemento b[%d]: ", i);
		scanf("%f", pb[i]);
	}
}


int main(void) {
	
	float a[TAM], b[TAM], c[TAM];
	

	cargar_arreglo(a, b, TAM);
	
	sumar_arreglos(c, a, b, TAM);
	printf("Resultado:\n");
	for (int i = 0; i < TAM; i++){
		printf("%f + %f = %f\n", a[i], b[i], c[i]);
	}
	
	
	return 0;
}
