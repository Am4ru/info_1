#include <stdio.h>

int main(int argc, char *argv[]) {
	int num;
	
	printf("ingrese el numero: ");
	scanf("%d", &num);
	
	if	(num >= 100){
		printf("su numero es de 3 cifras: %d", num); 
	}else{
		printf("su num es menos de 3 cifras: %d", num);
	}
	return 0;
}

