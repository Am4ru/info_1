#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void Generador(int*);
void Pregunta(int*);
void Respuesta(int*);
void Rta_negativa(void);
void Rta_positiva(void);
int Comprobacion(int*, int*);
int Repeticion(void);

/*--------------------------------------------------------------*/
int main(void) {
	srand(time(NULL));
	int num[2], rta;
	printf("En este programa aprenderemos a multiplicar: \n");
	
	do{
		Generador(num);
		do{
		Pregunta(num);
		Respuesta(&rta);
		} while( Comprobacion(num, &rta) == 0);
	} while( Repeticion() == 0);
	return 0;
}
void Generador(int *num){
num[0]= 1 + rand() % 9;
num[1]= 1 + rand() % 9;
}
	
void Pregunta(int *num){
printf("\n ¿Cuánto es %d x %d? : ", num[0], num[1]);
	}
		
void Respuesta(int *rta){
scanf("%d", rta);
	}
			
int Comprobacion(int *num, int *rta){
			if(num[0] * num[1] == *rta){
			Rta_positiva();
			return 1;
			    }
			else{
			Rta_negativa();
			return 0;
				}
			}
				
void Rta_negativa(void){
printf(" No, inténtelo de nuevo \n\n");
		}
					
void Rta_positiva(void){
printf(" ¡Muy bien!\n\n");
		}
						
int Repeticion(void){
int cond;
printf("\n Ingresar '0' para otra multiplicación, ");
printf("'1' para salir:  ");
scanf("%d", &cond);
return cond;
}	
							
							
							
