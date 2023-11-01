#include <stdio.h>
#define COLS 2


int main(int argc, char *argv[]) {
	
	int tam, codigos;
	float precios;
	
	printf("ingrese el tamaño: ");
	scanf("%d", &tam);
	
	int lista [tam][COLS];
	
	for(int i=0; i<tam; i++){
		for(int j=0; j<COLS; j++){
			if(j == 0){
				printf("ingrese codigo: ");
				scanf("%d", &codigos);
				lista [i][j] = codigos;
			}else{
				printf("ingrese precio: ");
				scanf("%f", &precios);
				lista[i][j] = precios;
			}
		}
	}
	
	int temp;
	
	for (int i = 0; i < tam; i++){
		for (int j = 0; j < tam-1; j++){
			if (lista[j][1] > lista[j+1][1]){
				temp = lista[j][1];
				lista[j][1] = lista[j+1][1];
				lista[j+1][1] = temp;
			}
		}
	}
	
	
	printf ("codigos  precios");
	printf("\n");
	
	for(int i=0; i<tam; i++){
		for(int j=0; j<COLS; j++){
			printf("%d", lista[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
