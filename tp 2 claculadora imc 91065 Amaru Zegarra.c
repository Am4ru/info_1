#include <stdio.h>

int main(void){
	int numero1;
	int numero2;
	float div;
	
	printf("ingrese su altura: ");
	scanf("%d",&numero1);
	printf("ingrese su peso: ");
	scanf("%d",&numero2);
	
	div = (float) numero2 /(numero1*numero1);
	printf("el resultado es: %f\n" ,div);
	
	if(div <= 18.5) {
		printf("su peso es menor coma mas \n");
	}
	if(div > 18.5 && div <= 24.9) {
		printf("su peso es normal chango \n");
	}
	if(div >= 24.9 && div <= 29.9) {
		printf("esta en sobrepeso chango :v \n");
	}
	if(div >= 30) {
		printf("esta obeso chango \n");
	}
	return 0;
}

