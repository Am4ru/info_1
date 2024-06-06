#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int nota1, nota2, recuperatorio;
	float promedio;
	
	printf("ingrese la nota1: ");
	scanf("%d", &nota1);
	printf("ingrese la nota2: ");
	scanf("%d", &nota2);
	
	
	
	if(nota1 < 6 || nota2 < 6){
		printf("ingrese recuperatorio: ");
		scanf("%d", &recuperatorio);
		promedio = (float) (nota1 + nota2 + recuperatorio) / 3;
		printf("%f\n", promedio);
		if(promedio >= 6 && promedio < 8){
			printf("aproado");
		}else if(promedio >= 8){
			printf("promocionado");
		}else if(promedio < 6){
			printf("desaproado");
		}
	}else if(nota1 >= 6 && nota2 >= 6){
		promedio = (float) (nota1 + nota2) / 2;
		printf("%f\n", promedio);
		if(promedio >= 6 && promedio<8){
			printf("aproado");
		}else if(promedio >= 8){
			printf("promocionado");
		}else if(promedio < 6){
			printf("desaproado");
		}
	}
	

	
	return 0;
}

