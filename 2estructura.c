#include <stdio.h>
#define TAM 5

typedef struct {
	char nombre [30];
	int num_part;
	float precio;
	int stock;
}inven;

typedef struct informacion_personal{
	unsigned char direccion [20];
	char ciudad [25];
	int codpost [6];
}personal;



int main(int argc, char *argv[]) {
	
	inven galpon[TAM];
	personal perso1;
	
	for(int i=0; i<TAM; i++){
		printf("ingrese nombre: ");
		scanf("%s", galpon[i].nombre);
		printf("ingrese partes: ");
		scanf("%d", &galpon[i].num_part);
		printf("ingrese precio: ");
		scanf("%f", &galpon[i].precio);
		printf("ingrese stock: ");
		scanf("%d", &galpon[i].stock);
	}
	
	printf("ingrese direccion: ");
	scanf("%s", perso1.direccion);
	printf("ingrese ciudad: ");
	scanf("%s", perso1.ciudad);
	printf("ingrese codigo postal: ");
	scanf("%d", perso1.codpost);
	
	
	// impresion
	
	for(int i=0; i<TAM; i++){
		printf("nombre: %s\n", galpon[i].nombre);
		printf("partes: %d\n", galpon[i].num_part);
		printf("precio: %f\n", galpon[i].precio);
		printf("stock: %d\n", galpon[i].stock);
	}
	return 0;
}

