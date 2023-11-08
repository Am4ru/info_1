#include <stdio.h>
#define TAM 3

typedef struct {
	
	char nombre [20];
	int num;
	float precio;
	int stock;
} parte_t;

void cargar_elmento(parte_t *p, int i){
	
	for(int j=0; j<i; j++){
		
		printf("nombre: ");
		scanf("%s", (*(p+j)).nombre);
		printf("numero: ");
		scanf("%d", &(*(p+j)).num);
		printf("precio: ");
		scanf("%f", &(*(p+j)).precio);
		printf("stock: ");
		scanf("%d", &(*(p+j)).stock);
		printf("----------------------------\n");
	}
}
	

void imprimir_elem(parte_t *p, int i){
	for(int j=0; j<i; j++){
		printf("nombre: %s\n", p[j].nombre);
		printf("numero: %d\n", (*(p+j)).num);
		printf("precio: %f\n", (*(p+j)).precio);
		printf("stock: %d\n", (*(p+j)).stock);
		printf("-----------------------------\n");
	}
	
	
}

void ordenar_elem_precio(parte_t *p, int i){
	
	
	parte_t temp;  //se genera una estructura para asignar otra estructura
	for(int j=0; j<i; j++){// se realiza el ordenamiento del arreglo estructura generado
		for(int k=0; k<i-1; k++){
			if((*(p+k)).num < (*(p+k+1)).num){
				temp = (*(p+k));
				(*(p+k)) = (*(p+k+1));
				(*(p+k+1)) = temp;
			}
		}
	}
	
}


	
int main(int argc, char *argv[]) {
	
	parte_t inven[TAM];
	

	cargar_elmento(inven, TAM);
	printf("+++++++++++++++++++++++++++++++++++++++\n");
	imprimir_elem(inven, TAM);
	printf("+++++++++++++++++++++++++++++++++++++++\n");
	ordenar_elem_precio(inven, TAM);
	imprimir_elem(inven, TAM);
	
	
	
	return 0;
}

