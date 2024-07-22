#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num1;
	int num2;
	int pot = 1;
	int cond;
	int i = 0;
	
	do{
		printf("ingrese base: ");
		scanf("%d", &num1);
		printf("ingrese exponente: ");
		scanf("%d", &num2);
		
		if (num1>=0 && num2>=0){
			
			while(num2 > i){
				pot = pot * num1;
				i++;
			};
			
			cond = 1;
		}else{
			cond = 0;
		}
	}while(cond == 0);
	
	printf("la potencia es: %d", pot);
	return 0;
}

