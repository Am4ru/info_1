#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int nota;
	int total = 0;
	int prom;
	int c = 1;
	
	while(c <= 3){
		printf("ingrese nota: ");
		scanf("%d", &nota);
		
		total = total + nota;
		c = c + 1;
	}
	prom = total / 3;
	
	if	(prom >=8){
		printf("su promedio es: %d\n", prom);
		printf("promocionado");
	}else{
		if	(prom >=6){
			printf("su promedio es: %d\n", prom);
			printf("aprobado");
		}else{
			printf("desaprobado");
		}
	}
	return 0;
}

