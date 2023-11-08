#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int num1 = 0;
int num2 = 0;
int resultado = 0;
int rc = 0;
int ri = 0;
int dificultad = 0;
char monitoreo = 0;
int numero(void);
void ejercicio(void);
void bien (void);
void mal (void);
void progreso(void);

int main(){
	srand((unsigned) time(NULL));
	do{
		printf("Niveles de Dificultad -Parte 4");
		printf("\nLos ejercicios anteriores desarrollaron un programa de instrucción asistida por  computadora para ayudar a enseñar a un alumno de primaria la multiplicación.");
		printf("\nIngrese el nivel de dificultad del 1 al 5 (Mientras mas grande el numero, mayor dificultad): ");
		scanf("%d", &dificultad);
		
		do{
			ejercicio();
			if((num1 * num2) == resultado){
				bien();
			}else{
				do{
					mal();
					progreso();
					if(monitoreo){break;}
					printf("\n¿Cuanto es %d por %d?\nResultado: ", num1, num2);
					scanf("%d", &resultado);
					if(!resultado){exit(0);}
				}while((num1 * num2) != resultado);
				if(!monitoreo){bien();}
			}
			progreso();
			if(monitoreo){break;}
		}while((num1 * num2) == resultado);
	}while(monitoreo);
	return 0;
}
	
	void ejercicio(void){
			switch(dificultad){
			case 1:
				num1 = rand() % 9 + 1;
				num2 = rand() % 9 + 1;
				break;
			case 2:
				num1 = rand() % 99 + 1;
				num2 = rand() % 99 + 1;
				break;
			case 3:
				num1 = rand() % 999 + 1;
				num2 = rand() % 999 + 1;
				break;
			case 4:
				num1 = rand() % 999 + 1;
				num2 = rand() % 999 + 1;
				break;
			case 5:
				num1 = rand() % 9999 + 1;
				num2 = rand() % 9999 + 1;
				break;
			
				default:
				printf("\nEl numero de dificultad no es valido. Por favor, ingresar un numero del 1 al 5");
			}
		printf("\n¿Cuanto es %d por %d?\nResultado: ", num1, num2);
		scanf("%d", &resultado);
		if(!resultado){exit(0);}
	}
		
		void bien(void){
			switch (rand() % 4){
			case 0:
				printf("\n¡Muy bien!");
				break;
			case 1:
				printf("\n¡Excelente!");
				break;
			case 2:
				printf("\n¡Buen trabajo!");
				break;
			case 3:
				printf("\n¡Sigue con el buen trabajo!");
				break;
			}
			rc++;
		}
			
			void mal(void){
				switch (rand() % 4){
				case 0:
					printf("\nOh, intentalo de nuevo :c");
					break;
				case 1:
					printf("\nIncorrecto, por favor intente de nuevo");
					break;
				case 2:
					printf("\n¡No te rindas!");
					break;
				case 3:
					printf("\nSigue intentadolo");
					break;
				}
				ri++;
			}
				
				void progreso(void){
					if((rc + ri) == 10){
						if((rc * 10) > 75){
							printf("\n\n¡Felicitaciones, está listo para pasar al siguiente nivel!");
						}else if((rc * 10) < 75){
							printf("\n\nPídale ayuda adicional a su maestro");
						}
						rc = 0;
						ri = 0;
						monitoreo = 1;
					}else if((num1 * num2) == resultado){
						monitoreo = 0;
					}
				}
					
