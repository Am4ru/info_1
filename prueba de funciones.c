#include <stdio.h>
void imprimir_nashe(void){
	printf("tu mama en tanga\n");
}
int div (int a, int b){
	return a/b;
}
int ingresar_valor(void){
	int num;
	printf("ingrese un num: ");
	scanf("%d", &num);
	return num;
}
	int main(void){
		int num1, num2, resultado;
		num1 = ingresar_valor();
		num2 = ingresar_valor();
		imprimir_nashe();
		
		resultado = div(num1, num2);
		printf("la suma es: %d \n", resultado);
		return 0;
	}
