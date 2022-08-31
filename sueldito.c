#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int cod;
	int val;
	int suma;
	int resta;
	int mult;
	int div;
	int por;
	
	// ingresa u codigo de empleado
	printf("ingrese su codigo de empleador: ");
	scanf("%d", &cod);
	
	
	switch(cod){
	case 44 :
		printf("su codigo es trabajador por hora\n");
		printf("ingrese su vantidad de horas: ");
		scanf("%d", &val);
		mult = val * 20;
		printf("su sueldito chango es: %d\n", mult);
		break;
	case 71 :
		printf("su codigo es trabajador a destajo\n");
		printf("ingrese la cantidad de productos vendidos: ");
		scanf("%d", &val);
		mult = val * 5;
		printf("su sueldito es: %d\n", mult);
	case 63 :
		break;
	}
	
	return 0;
}

