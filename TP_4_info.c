#include <stdio.h>

int main(void) {
	
	unsigned int codigo;
	unsigned int valor;
	unsigned int sum;
	unsigned int mult;
	unsigned int resta;
	double c = 0.057;
	int por;
	unsigned int cierre = 1;

	
	while (cierre == 1) {
	
	
	printf("Bienvenido al sistema de pago según su puesto.\n");
	printf("\ningrese su codigo de empleado con un numeros desde 1 hasta 4: ");
	scanf("%u", &codigo);
	
	if (codigo < 1 || codigo > 4) {
		
		printf("El código elegido es incorrecto, \n Por favor elija un codigo\n");
		printf("valido entre los numeros:(1 hasta 4)\n");
		
	}else {
	
	switch(codigo){
	case 1 :
		printf("El codigo ingresado es de trabajador por hora\n");
		printf("ingresar la cantidad de horas trabajada esta semana: ");
		scanf("%u", &valor);
		while (valor <= 0) {
			
			printf("El valor seleccionado es incorrecto, \n Por favor, ingrese");
			printf(" un valor valido\n");
			scanf("%u", &valor);
		}
		if (valor > 40)  {
			sum = 40 * 12;
			mult = valor % 40;
			resta = mult * 20;
			por = sum + resta;
			printf("El sueldo que adquirirá es: %u\n", por);
		}else{if (valor <  41);{
				mult = valor * 12;
				printf("Su ingreso de la semana sumando horas extras es de: %u\n", mult);
			}
		}
		
		break;
	case 2 :
		printf("El codigo ingresado es de trabajador a destajo\n");
		printf("Por favor, ingrese la cantidad de productos vendidos esta semana: ");
		scanf("%u", &valor);
		while (valor < 0) {
			
			printf("El valor seleccionado es incorrecto, \n Por favor, ingrese");
			printf(" un valor valido\n");
			scanf("%u", &valor);
		}
		mult = valor * 5;
		printf("El sueldo de esta semana es: %u\n", mult);
		break;
	case 3 :
		printf("El codigo ingresado es de gerente\n");
		mult = 800 * 6;
		printf("El sueldo de esta semana para usted es: %u\n", mult);
		break;
	case 4 :
		printf("Su codigo es trabajador por comision\n");
		printf("ingrese el numero de productos que vendio esta semana: ");
		scanf("%u", &valor);
		while (valor < 0) {
			
			printf("El valor seleccionado es incorrecto, \n Por favor, ingrese");
			printf(" un valor valido\n");
			scanf("%u", &valor);
		}
		por =  c * valor;
		sum = por + 250;
		printf("Su sueldo de esta semana es: %u\n", sum);
		break;
			}
		}
	printf ("Operacion realizada, desea volver al inicio? ingrese (1) para\n");
	printf(" volver al inicio, o ingrese cualquier otro caracter para terminar:\n");
	scanf ("%u",&cierre);
	}
	
	

	
	
	
	
	return 0;
}
