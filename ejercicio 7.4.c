#include <stdio.h>
#define T 5

void cargar_elemento(int arr[]){
	
for(int x=0 ; x<T; x++){
	
	printf("ingrese el numero entre 1/100: ");
	scanf("%d", &arr[x]);
	if(arr[x]>100 || arr[x]<1){
		printf("ingrese de vuelta el numero\n");
		--x;
	}
}
		
printf("---------------\n");
}
	
void imprimir(int arr[]){
	for(int x=0 ; x<T; x++){
		printf("arreglo[%d]: %d\n", x, arr[x]);
	}		
}	
	

int main(int argc, char *argv[]) {
	
	int array[T];
	
	cargar_elemento(&array[T]);
	imprimir(&array[T]);
	
	return 0;
}

