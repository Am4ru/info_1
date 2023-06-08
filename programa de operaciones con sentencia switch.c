#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int op, num1, num2;
	int suma;
	int resta;
	
	printf("tipo de operaciones\n");
	printf("1_Suma\n");
	printf("2_resta\n");
	printf("3_salir\n");
	
	printf("ingrese el tipo de operacion: \n");
	
	scanf("%d", &op);
	
	switch(op){
		
	case 1:
		printf("ingrese el num1: ");
		scanf("%d",&num1);
		printf("ingrese el num2: ");
		scanf("%d",&num2);
		suma = num1 + num2;
		printf("el resultado de la suma es: %d", suma);
		break;
		
	case 2:
		printf("ingrese el num1: ");
		scanf("%d",&num1);
		printf("ingrese el num2: ");
		scanf("%d",&num2);
		resta = num1 - num2;
		printf("el resultado de la resta es: %d", resta);
		break;
		
		
	case 3:
		printf("fin del prgrama");
		break;
		
	default: 
		printf("el tipo de operacion que eligio es incorrecta");
	}
	
	return 0;
}

