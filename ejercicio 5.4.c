#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int velocidad = 0;
	
	float tiempo = 0.0;
	
	float distancia;
	
	
	printf("ingrese la velocidad: ");
	scanf("%d", &velocidad);
	printf("ingrese la tiempo: ");
	scanf("%f", &tiempo);
	
	distancia = (float) tiempo * velocidad;
	
	printf("el despalzamiento del movil es: %f", distancia);
	
	
	return 0;
}

