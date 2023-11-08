#include <stdio.h>
#define T 5

void cargar_elemento(int *a, int tam){
	for(int x=0; x<tam; x++){
		printf("ingrese el elemento[%d]: ",x);
		scanf("%d", &*(a+x));
	}
}
	
void producto_punto(int *a, int *b, int tam){
	int p = 0;
	
	for(int x=0;x<tam; x++){
		p = p + (*(a+x) * *(b+x));
	}
	
	printf("el valor del producto punto es: %d", p);
}
	
int main(int argc, char *argv[]) {
	
	int a[T], b[T];
	
	cargar_elemento(a, T);
	printf("----------------\n");
	cargar_elemento(b, T);
	printf("----------------\n");
	producto_punto(a, b, T);
	
	return 0;
}

