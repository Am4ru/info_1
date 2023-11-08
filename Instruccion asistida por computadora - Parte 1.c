#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int numero(void);
void ejercicio(void);
int Repeticion(void);
int num1 = 0;
int num2 = 0;
int resultado = 0;

int main(){
	srand((unsigned) time(NULL));
	printf("Instruccion Asistida por Computadora - Parte 1");
	printf("\nEl uso de computadoras en la educación se conoce como instrucción asistida por computadora (CAI).");
	do{
		ejercicio();
		if((num1 * num2) == resultado){
			printf("\nMuy bien!");
		}else{
			do{
				printf("\nNo, intentelo de nuevo");
				printf("\n¿Cuanto es %d por %d? \nEl resultado es: ", num1, num2);
				scanf("%d", &resultado);
				if(!resultado){exit(0);} 
			}while((num1 * num2) != resultado);
			printf("\nMuy bien!");
		}
	}while((num1 * num2) == resultado);
	return 0;
}
	
	void ejercicio(void){
		num1 = rand() % 9 + 1;
		num2 = rand() % 9 + 1;
		printf("\n¿Cuanto es %d por %d? \nEl resultado es: ", num1, num2);
		scanf("%d", &resultado);
		if(!resultado){exit(0);} 
	}

			
		
	

		
