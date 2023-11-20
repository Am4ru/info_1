# include <stdio.h>
# define CANT_ALU 100
typedef struct{
	int legajo ;
	char nombre [20];
	char apellido [20];
	char curso [3];
	int nota1;
	int nota2;
	float promedio ;
	char estado ;
} alumno;

void cargar_elmento(alumno *a, int t){
	for(int i=0; i<t; i++){
		printf("ingrese legajo: ");
		scanf("%d", &a[i].legajo);
		printf("ingrese nombre: ");
		scanf("%s", a[i].nombre);
		printf("ingrese apellido: ");
		scanf("%s", a[i].apellido);
		printf("ingrese curso: ");
		scanf("%s", a[i].curso);
		printf("ingrese nota1: ");
		scanf("%d", &a[i].nota1);
		printf("ingrese nota2: ");
		scanf("%d", &a[i].nota2);
		a[i].promedio = (a[i].nota1 + a[i].nota2)*0.5;
		printf("\n");
	}
}
	
void imprimir(alumno *a, int tam){
	for(int i=0; i<tam; i++){
		printf("legajo: %d\n", a[i].legajo);
		printf("nombre: %s\n", a[i].nombre);
		printf("apellido: %s\n", a[i].apellido);
		printf("curso: %s\n", a[i].curso);
		printf("notas: %f\n", a[i].promedio);
		printf("------------------\n");
	}
}


int main ( void )
{
	int tam;
	
	printf("ingrsa la cantidad de estudiante a evaluar: ");
	scanf("%d", &tam);
	alumno alumnos [CANT_ALU];
	
	cargar_elmento(alumnos, tam);
	imprimir(alumnos, tam);
	return 0;
}
