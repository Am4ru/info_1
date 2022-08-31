#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float promedio, suma = 0;
	int nota, contador_notas = 0;
	int repetir = 1;
		
		while (repetir){
			printf ("ingresar una nota: ");
			scanf ("%d" ,&nota);
			
		
		if (nota == -1){
			repetir = 0;
			
		}else{
			suma = suma + nota;
			contador_notas = contador_notas + 1;
		}
	}
	
	promedio = suma / contador_notas;
	
	printf ("El promedio de las notas ingresadas es: %f\n", promedio);
	
	return 0;
}

