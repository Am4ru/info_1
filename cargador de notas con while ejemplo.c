#include <stdio.h>

int main(int argc, char *argv[]) {
	int contador = 10;
	int nota;
	float acumulado = 0, promedio;
	
	while ( contador  > 0){
		printf("ingrese la nota: ");
		scanf("%d", &nota);
		
		acumulado = acumulado + nota;
		contador = contador - 1;
		
	}
	
	promedio =acumulado / 10.;
	
	printf("el promedio es %f\n", promedio);
	return 0;
}

