#include <stdio.h>


//hacer una funcion que devuelva impar 1 y si es par 0.

int imprimir_par(int x){
	
	int paridad;
	
	paridad = x % 2;
	if  (paridad == 0){
		printf("el numero es par %d", paridad);
	}else{
		printf("el numero es impar %d", paridad);
	}
	
	return paridad;
}

int main(int argc, char *argv[]) {
	
	int num;
	
	printf("ingresar num: ");
	scanf("%d", &num);
	
	imprimir_par(num);
	
	return 0;
}

