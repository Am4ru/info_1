#include <stdio.h>
#define T 5

void cargar_elemento(int arr[]){
	for(int x=0 ; x<T; x++){
		printf("ingrese el element[%d]: ", x);
		scanf("%d", &arr[x]);
	}
	printf("---------------\n");
}
	
void imprimir(int arr[]){
	for(int x=0 ; x<T; x++){
		printf("arreglo[%d]: %d\n", x, arr[x]);
	}
	
}
	
void imprimir_mayor(int arr[]){
	int z;
	z=arr[0];
	for(int x=0 ; x<T; x++){
		if(arr[x] > z){
			z  = arr[x];
		}
	}
	printf("---------------\n");
	printf("el mayor es: %d", z);
}
	

int main(int argc, char *argv[]) {
	
	int arr[T];
	
	cargar_elemento(&arr[T]);
	imprimir(&arr[T]);
	imprimir_mayor(&arr[T]);
	
	return 0;
}

