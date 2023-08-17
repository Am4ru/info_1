#include <stdio.h>
void imprime_mayor (int num1, int num2){
	if (num1 > num2){
		printf("el num1 es mayor que num2: %d", num1);
	}else{
		printf("el num2 es mayor que num1: %d", num2);
	}
}
	
	int suma (int y, int x){
		
		int sum = 0;
		sum = y+x;
		
		return sum;
	}

int main(int argc, char *argv[]) {
	
int num_1, num_2;
int sumita;

printf("ingrese los numeros a comparar: ");
scanf("%d %d",&num_1, &num_2);
imprime_mayor(num_1, num_2); 
sumita = suma(num_1, num_2);
printf ("suma: %d", sumita);

	
	return 0;
}

