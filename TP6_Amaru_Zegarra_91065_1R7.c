#include <stdio.h>

//prototipo de funcion
float area(float , float);

float perimetro(float, float);

void imprimir (float, float);

////////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[]) {
	
	float num1, num2;
	float area_rectangulo = 0;
	float perim_rectangulo = 0;
	
	printf("ingrese la longitud del rectangulo: ");
	scanf("%f", &num1);
	printf("ingrese la altura del rectangulo: ");
	scanf("%f", &num2);
	
	area_rectangulo = area (num1, num2);
	perim_rectangulo = perimetro (num1, num2);
	imprimir (area_rectangulo, perim_rectangulo);
	
	return 0;
}

////////////////////////////////////////////////////////////////////////////////

//definicion de funcion
void imprimir (float a, float b){
	
	printf("imprimir area: %.2f\n",a);
	printf("imprimir perimetro: %.2f",b);
}

float perimetro (float x, float y){
	float resultado_p = 0;
	
	resultado_p = 2*(x+y);
	
	return resultado_p;
}


float area(float x, float y) {
	float resultado_a = 0;

	resultado_a = x * y;
	
	return resultado_a;
}

