#include <stdio.h>

struct inventario { 
	char nombre [30];
	int num_parte;
	float precio;
	int stock;
	 };
int main(int argc, char *argv[]) {
	struct inventario limpieza;
	
	printf("ingrese el nombre: ");
	scanf("%s", limpieza.nombre);
	printf("el nombre es: %s\n");
	return 0;
}

