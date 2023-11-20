#include <stdio.h>

struct cliente{
	char apellido[20];
	char nombre [20];
	int numero;
	int dni;
	char calle [20];
	char ciudad[20];
};

int main(int argc, char *argv[]) {
	
	struct cliente cliente1;
	
	printf("ingrese apellido: ");
	scanf("%s" ,cliente1.apellido);
	printf("ingrese nombre: ");
	scanf("%s", cliente1.nombre);
	printf("ingrese numero: ");
	scanf("%d", &cliente1.numero);
	printf("ingrese dni: ");
	scanf("%d", &cliente1.dni);
	printf("ingrese calle: ");
	scanf("%s", cliente1.calle);
	printf("ingrese ciudad: ");
	scanf("%s", cliente1.ciudad);
	
	printf("----------------------------------");
	printf("apellido: %s\n", cliente1.apellido);
	printf("nombre: %s\n", cliente1.nombre);
	printf("numero: %d\n", cliente1.numero);
	printf("DNI: %d\n", cliente1.dni);
	printf("calle: %s\n", cliente1.calle);
	printf("ciudad: %s\n", cliente1.ciudad);
	return 0;
}

