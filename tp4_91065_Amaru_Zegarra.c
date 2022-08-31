#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int cod;
	int val;
	int suma;
	int resta;
	double div;
	int mult;
	int result;
	double c = 0.057;
	int por;
	
	
	printf("Bienvenido al sistema de pago semanal");
	printf("ingrese su codigo de empleador: ");
	scanf("%d", &cod);
	
	
	switch(cod){
	case 1 :
		printf("su codigo es trabajador por hora\n");
		printf("ingrese su cantidad de horas trabajada esta semana: ");
		scanf("%d", &val);
		if (val > 40)  {
			resta = val - 40;
			div = 10 * 1.5;
			suma = resta * div;
			mult = (val - resta) * 10;
			result = mult + suma;
			printf("su sueldo de esta semana con hs esxtras es: %d\n", result);
		}else{
			if (val < 41){
				mult = val * 10;
				printf("su sueldo de esta semana es: %d\n", mult);
			};
		}
		
		break;
	case 2 :
		printf("su codigo es trabajador a destajo\n");
		printf("ingrese la cantidad de productos vendidos esta semana: ");
		scanf("%d", &val);
		mult = val * 5;
		printf("su sueldo de esta semana es: %d\n", mult);
		printf("SIGA SIENDO PRODUCTIVO\n");
		break;
	case 3 :
		printf("su codigo es gerente\n");
		mult = 800 * 6;
		printf("su sueldaso jefe de esta semana es: %d\n", mult);
		break;
	case 4 :
		printf("su codigo es trabajador por comision\n");
		printf("ingrese el numero de productos que vendio esta semana: ");
		scanf("%d", &val);
		por =  c * val;
		suma = por + 250;
		printf("su sueldo de esta semana es: %d\n", suma);
		break;
	}
	
	return 0;
}

