#include <stdio.h>


float cuadrado_ref(float *n){
	*n *= *n;
	return *n;
}
	
	
float cuadrado_valor(float n){
	n *= n;
	return n;
}
int main(int argc, char *argv[]) {
	
	float promedio;
	float *pp;
	
	promedio = 2;
	pp = &promedio;
	
	printf ("%f, %f, %f, %f", promedio, cuadrado_ref(pp), cuadrado_valor(promedio), promedio);
	
	//el printf se ejecuta de derecha a izquierda por eso el resultado se modificado en el primer promedio.
	return 0;
}

