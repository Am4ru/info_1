#include <stdio.h>

struct punto_2D{
	float x;
	float y;
};


void sumar_puntos(struct punto_2D *a, struct punto_2D *b){ // estructura de tipo punteron
	printf("suma es: \n");
	printf("x : %f\n", (*a).x+(*b).x); // se escribre de esta manera(*a).x por que el " . " tiene mas presedencia que el *
	printf("y : %f\n", (*a).y+(*b).y);
}

int main(int argc, char *argv[]) {
	
	struct punto_2D p1 = {1.4, 3.4}, p2 = {4.5, 3.7};
	
	sumar_puntos(&p1, &p2); // escribo el & para pasar las direccion de las estructura
	
	
	
	return 0;
}

