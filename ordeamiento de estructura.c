#include <stdio.h>
#include <stdlib.h>
#define TAM 2


struct alu { // inicializo la estructura
	int dni;
	float promedio;
	char nombre [30];
	char apellido [30];
	int nota1;
	int nota2;
};


int main(int argc, char *argv[]) {
	
	struct alu alumnos[TAM];
	
	for (int i=0; i<TAM; i++){ // cargo los datos de la estructura
		printf("ingrese el dni: ");
		scanf("%d", &alumnos[i].dni);
		printf("nombre: ");
		scanf("%s", alumnos[i].nombre);
		printf("apellido: ");
		scanf("%s", alumnos[i].apellido);
		printf("nota 1: ");
		scanf("%d", &alumnos[i].nota1);
		printf("nota 2: ");
		scanf("%d", &alumnos[i].nota2);
		
		alumnos[i].promedio = (alumnos[i].nota1 + alumnos[i].nota2)*0.5; // se efectua el promedio
	}
	
	struct alu temp;;  //se genera una estructura para asignar otra estructura
		for(int j=0; j<TAM-1; j++){// se realiza el ordenamiento del arreglo estructura generado
			for(int i=0; i<TAM; i++){
			if(alumnos[j].dni < alumnos[j+1].dni){
				temp = alumnos[j];
				alumnos[j] = alumnos[j+1];
				alumnos[j+1] = temp;
			}
		}
	}
	
	printf("ordenados\n\n");
	for(int i=0; i<TAM; i++){ // se imprime el arreglo ordenado*/
		printf("dni: %d\n", alumnos[i].dni);
		printf("nombre: %s\n", alumnos[i].nombre);
		printf("apellido: %s\n", alumnos[i].apellido);
		printf("promedio: %f\n", alumnos[i].promedio);
		printf("\n");
	}
	
	return 0;
}

