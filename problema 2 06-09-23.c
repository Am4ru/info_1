#include <stdio.h>

void incrementar_arreglo(int a[]){
	a[1]++;
	printf("%d\n", a[1]);
}

int main(int argc, char *argv[]) {

	int temp[10] = {5,4,9};
	printf("temp : %d\n", temp[0]);
	incrementar_arreglo(temp);
	printf("temp: %d\n", temp[0]);
	printf("temp: %d\n", temp[1]);
	
	return 0;
}

