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
	
	
void sumar_arr(int arra[], int arrb[]){
	for(int x=0 ; x<T; x++){
		arrb[x] = arrb[x-1] + arra[x];
	}
}

int main(int argc, char *argv[]) {
	
	int arraya[T] = {0};
	int arrayb[T] = {0};
	
	cargar_elemento(&arraya[T]);
	imprimir(&arraya[T]);
	printf("------------\n");
	sumar_arr(&arraya[T], &arrayb[T]);
	imprimir(&arrayb[T]);
	
	return 0;
}

