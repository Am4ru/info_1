#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	


	float num [3] [4];
	char incognitas [3] = {'x', 'y', 'z'};
	int s = 0;
	
	for( int f = 0; f < 3; f++ ) {
		
		//se ingresa los coeficientes para hacer el calculo
		printf("ingresa los numeros de la ecuacion %d:\n", f + 1);
	
	for( int c = 0; c < 4; c++ ) {
		
		scanf( "%f", &num [f] [c] );
		}
	}
	while(s < 3){
		if( num [s] [s] == 1){
		switch(s){
	
			case 0:
			for(int f = 1; f < 3; f++){
			for(int c = 3; c >= 0; c--) num[f][c] -= (num[f][c] * num[f][c]);
			}
				s++;
				break;
			case 1:
			for( int c = 3; c >= 0; c-- ){
				num [s-1][c] -= (num [s][c] * num [s-1][s]);
				num [s+1][c] -= (num [s][c] * num [s+1][s]);
			}
				s++;
				break;
			case 2:
			for( int f = 1; f >= 0; f-- ){
			for(int c = 3;c >= 0; c--) num[f][c] -= (num [s][c] * num [f][s]);
			}
				s++;
				break;
			}
		}else for(int c = 3; c >= 0; c--) num[s][c] /= num[s][s];
	}
	for(int f = 0; f < 3; f++){
		
		//imprime el resultado de la ecuacion
		printf("el resultado es:\n");
		printf("%2c : %.2f\n", incognitas[f], num[f][3]);
	}
	
	return 0;
}
