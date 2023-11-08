#include <stdio.h>
#define filas 3
#define col 4
int main(void) {
	
	int matriz [filas][col]= {
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11}
	};
	
	int i, j;
	
	for(i=0;i<filas;i++){
	
	for(j=0;j<col;j++)
		printf("%d ", matriz[i][j]);
		printf("\n");
	}
	return 0;
}

