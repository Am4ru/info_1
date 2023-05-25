#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num1, num2, resul=1, contador=1;
	
	printf("ingrese el num1: ");
	scanf("%d", &num1);
	
	printf("ingrese el num2: ");
	scanf("%d", &num2);
	
	
	
	while (contador <= num2){
		resul *= num1;
		contador = contador + 1;
	}
	
	printf("el resultado de %d ^ %d : %d", num1, num2, resul);
	return 0;
}

