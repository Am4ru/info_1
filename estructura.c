#include <stdio.h>

int main(int argc, char *argv[]) {
	
	struct cliente {
		char nombre[20];
		char apellido[20];
		int edad;
		int dni;
		char calle[20];
		char ciudad[20];
	}  ;
	
	struct cliente cliente1;
		printf("ingrese nombre: ");
		scanf("%s", cliente1.nombre);
		printf("ingrese apellido: ");
		scanf("%s", cliente1.apellido);
		printf("ingrese edad: ");
		scanf("%d", &cliente1.edad);
		printf("ingrese dni: ");
		scanf("%d", &cliente1.dni);
		printf("ingrese calle: ");
		scanf("%s", cliente1.calle);
		printf("ingrese ciudad: ");
		scanf("%s", cliente1.ciudad);
		
		
		
		printf(cliente1.nombre);
		printf(cliente1.apellido);
		printf("%d",cliente1.edad);
		printf("%d",cliente1.dni);
		printf(cliente1.calle);
		printf(cliente1.ciudad);
		
	
	
	return 0;
}

