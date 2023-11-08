#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	
	int num;
	char *frases[10] = { // se crea un arreglo de punteros
		"bien culiau",
		"no decaigas pa",
		"si mi rey!",
		"que grande pichon"
	};
	
	srand(time(NULL));
	
	num = rand()%4;
	
	printf("%s", frases[num]); // se utiliza rand para el tamaño de frases y elegir una dentro de las aelatorias
	// el puntero siempre va a tener un tamaño de 8 bytes en computadoras de 64 bit, en 32 solo hasta 4 bytes
	
	return 0;
}

