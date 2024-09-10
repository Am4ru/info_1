#include <stdio.h>
#include <math.h>
//funciones rectangulo
float calcularAreaRectangulo (float x, float y);
float calcularPerimetroRectangulo (float x, float y);
float calcularDiagonalRectangulo (float x, float y);
//funciones circulo
float calcularAreaCirculo (float x);
float calcularPerimetroCirculo (float x);
//funcion imprimir
void imprimirResultados (float x, float y, float j);


int main(int argc, char *argv[]) {
	float n1 ,n2;
	float cond = 0.0;
	int opcion;
	
	printf("ingrese la opcion que desea calcular [1 rectangulo, 2 circulo]: ");
	scanf("%d", &opcion);
	
	switch(opcion){
		
	case 1:
			printf("\nopcion rectangulo seleccionada \n \n");
		
			printf("ingrese la longitud: ");
			scanf("%f", &n1);
			printf("ingrese la altura: ");
			scanf("%f", &n2);
			
			imprimirResultados(calcularAreaRectangulo(n1,n2), 
							   calcularPerimetroRectangulo(n1,n2),
							   calcularDiagonalRectangulo(n1,n2));
			
		break;
		
	case 2:
			printf("\nopcion circulo seleccionada \n \n");
			
			printf("ingrese el radio del circulo: ");
			scanf("%f", &n1);
			
			imprimirResultados(calcularAreaCirculo(n1),
							   calcularPerimetroCirculo(n1), cond);
			
		break;
	}
	
	
	
	return 0;
	}

float calcularAreaRectangulo (float x, float y){
	
	float resuA;
	resuA = x * y;

	return resuA;
}

float calcularPerimetroRectangulo (float x, float y){
	float resuP;
	resuP = (x*2) + (y*2);
	
	return resuP;
}

float calcularDiagonalRectangulo (float x, float y){
	
	float C2;
	float resuD;
	C2 = (x*x) + (y*y);
	resuD = sqrt(C2);
	
	return resuD;
	
}
	
float calcularAreaCirculo (float x){
	
	float resuA;
	resuA = 3.14 * (x*x);
	
	return resuA;
}
	
float calcularPerimetroCirculo (float x){
	float resuP;
	resuP = 2 * 3.14 * x;
	
	return resuP;
}

void imprimirResultados (float x, float y, float j){
	
	if (j == 0.0){
		printf("\nel area es: %.2f \n", x);
		printf("el perimetro es: %.2f \n",y);
	}else{
		printf("\nel area del rectangulo es: %.2f \n", x);
		printf("el perimetro del rectangulo es: %.2f \n",y);
		printf("la diagonal del rectangulo es: %.2f \n", j);
	}
}


