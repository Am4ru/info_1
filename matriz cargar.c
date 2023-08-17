#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i, j, val, val2;
	
	
		
		
		do{
			printf("ingrese 'm' filas: ");
			scanf("%d", &val);
			
			printf("ingrese 'n' columnas: ");
			scanf("%d", &val2);
			
			for(i = 0; i<val ; i++){
				for(j = 0; j<val2 ; j++){
					printf("%4d " , i*j);
				}
				printf("\n");
			}
		} while (val < 0 || val2 < 0);
		
	
	
	
	return 0;
}

