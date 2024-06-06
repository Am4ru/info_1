#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num1;
	int num2;
	
	int pot = 1;
	
	printf("ingrese base: ");
	scanf("%d", &num1);
	printf("ingrese exponente: ");
	scanf("%d", &num2);
	
	for(int i = 0; i < num2; i++){
		pot = pot*num1;
	}
	
	printf("la potencia de %d elevado a %d es: %d", num1, num2, pot);
	
	return 0;
}

