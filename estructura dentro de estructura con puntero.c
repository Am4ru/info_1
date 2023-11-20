#include <stdio.h>

typedef struct{
	char apodo[20];
	int rango;
	float vida;
	float escudo;
	float mana;
	
	struct {
		char nombre[20];
		char apellido[20];
		int edad;
	}personal;
}personaje_j;

void cargar_elemento(personaje_j *p){
	printf("ingresar apodo: ");
	scanf("%s", (*p).apodo);
	printf("ingresar nombre: ");
	scanf("%s", (*p).personal.nombre);
	printf("ingresar apellido: ");
	scanf("%s", (*p).personal.apellido);
	printf("ingresar edad: ");
	scanf("%d", &(*p).personal.edad);
	(*p).rango = 1;
	(*p).vida = 100.00;
	(*p).escudo = 100.00;
	(*p).mana = 50.00;
}
	
	
void imprimir_avatar(personaje_j *p){
	printf("nombre: %s\n", p->personal.nombre);
	printf("apellido: %s\n", (*p).personal.apellido);
	printf("edad: %d\n", (*p).personal.edad);
	printf("nick: %s\n", (*p).apodo);
	printf("rango: %d\n", (*p).rango);
	printf("vida: %.2f\n", (*p).vida);
	printf("escudo: %.2f\n", (*p).escudo);
	printf("mana: %.2f\n", (*p).mana);
}
	
int main(int argc, char *argv[]) {
	
	personaje_j persoj;
	

	
	cargar_elemento(&persoj);
	imprimir_avatar(&persoj);
	
	return 0;
}

