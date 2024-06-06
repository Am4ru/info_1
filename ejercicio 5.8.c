#include <stdio.h>

int n1, n2;

int main(int argc, char *argv[]) {

	
	printf("ingrese numero 1: ");
	scanf("%d", &n1);
	printf("ingrese numero 2: ");
	scanf("%d", &n2);
	
	if(n1 > n2){
		printf("es mayor %d que %d ", n1 ,n2);
		printf("la suma es: %d", n1 + n2 );
	}else if (n1 < n2){
		printf("es mayor num2 %d que num1 %d ",n2 ,n1);
		printf("el producto es: %d", n1 * n2);
	}else if(n1 == n2){
		printf("son iguales");
	}
	
	return 0;
}

