#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int precio;
	float descuento;
	
	printf("ingresar precio: ");
	scanf("%d", &precio);
	
	if	(precio >= 1000){
		descuento = precio - (precio * 0.20);
		
		printf("el precio final es de: %f", descuento);
	} else {
		printf("precio final es de %d", precio);
	}


	
	return 0;
}

