#include <stdio.h>

int main(int argc, char *argv[]) {
	
//programa de notas
	
	int note1 = 0;
	int note2 = 0;
	int note3 = 0;

	int suma = 0;
	float promedio = 0;
	
	printf("programa de notas!\n");
	printf("\n");
	
	printf("ingrese nota1: ");
	scanf("%d", &note1);
	printf("ingrese nota2: ");
	scanf("%d", &note2);
	printf("ingrese nota3: ");
	scanf("%d",&note3);
	
	
	suma = note1+note2+note3;
	promedio = suma/3;
	printf("\n");
	printf("promedio es: %3f\n", promedio);
	printf("\n");
	
	
	//programa de descuentos
	
	int valor = 0;
	float descuento = 0;
	
	printf("programa de descuento!\n");
	printf("\n");
	
	printf("ingrese su valor de compra: ");
	scanf("%d", &valor);
	
	if(valor >=1000){
		descuento = valor - (valor * 0.20);
	}else{
		descuento = valor;
	}
	
	printf ("su compra final: %f\n", descuento);
	printf("\n");
	
	//programa de numero de 3 cifras
	
	int numero = 0;
	
	printf("programa de 3 cifras!\n");
	printf("\n");
	
	printf("ingrese su numero: ");
	scanf("%d", &numero);
	
	if(numero > 99){
		printf("su numero de 3 cifras es: %d\n", numero);
		printf("\n");
	}else {
		printf("su numero de menos de 3 cifras es: %d\n", numero);
		printf("\n");
	}
	

	//programa de mayor menor igual
	
	int num1;
	int num2;
	int sum;
	int rest;
	
	printf("programa de mayor, menor, igual\n");
	printf("\n");
	
	printf("ingrese numero1: ");
	scanf("%d", &num1);
	printf("ingrese numero2: ");
	scanf("%d", &num2);
	
	if(num1 > num2){
		sum = num1 + num2;
		printf("la suma es: %d", sum);
	}else if (num1 < num2){
		rest = num1 - num2;
		printf("la resta es: %d", rest);
	}else if (num1 == num2) {
		printf("son iguales");
	}
	
	return 0;
}

