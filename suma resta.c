    //segundo programa en C papaaaaa!!!
#include <stdio.h>

int main(void) {
	int numero1;
	int numero2;
	int suma;
	int resta;
	int mult;
	float div
	scanf("%d", &numero1);
	printf("ingrese el segundo numero: ");
	scanf("%d", &numero2);
	
	suma = numero1 + numero2;
	
	printf("La suma es: %d\n", suma); 
	
	resta = numero1 - numero2;
	printf("La resta es: %d\n", resta);
	
	mult = numero1 * numero2;
	printf("la multi es; %d\n", mult);
	
	div = (float)numero1 / numero2;
	printf("La division es: %f\n", div);
	
	return 0;
}
