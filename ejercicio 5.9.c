#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int num1;
	int num2;
	int pot = 1;
	
	int i = 0;
	
	printf("ingrese base: ");
	scanf("%d", &num1);
	printf("ingrese exponente: ");
	scanf("%d", &num2);
	
	while(num2 > i){
		pot = pot * num1;
		i += 1;
	}
	
	printf("la potencia es: %d", pot);
	return 0;
}

