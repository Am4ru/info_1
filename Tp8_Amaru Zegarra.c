#include <stdio.h>
#include <conio.h>

#define N 5
#define M 10


void introduccion(){
	
	printf ("Bienvenido!\n");
	printf ("En la siguiente encuesta se le mostraran 5 problematicas. Por favor, califiquelas del 1 al 10 segun su importancia\n");
}
	void impretemas (char*temas[]){
		for (int i=0; i<N; i++){
			printf("\n%s\n",temas[i]);
		}
	}
		
		
		
	void carga(int respuestas[N+1][M],char *temas[]){
			int  num;
			for (int j=0; j<M; j++){
				float suma = 0,prom ;
				for (int i=0; i<N; i++){
					printf("\nPor favor, califique la problematica %d \n",i+1);
					scanf("%d", &num);
					suma+= (float)num;
					respuestas[i][j] = num;
				}
				prom=(suma/M);
				respuestas[j][N] = prom;
				printf("\nSiguente\n");
				impretemas(temas);
			}
		}
	
			
	void impretabla (char *temas[], int respuestas[N][M]){
				printf("|        Resultados        |\n\n");
				printf("|        Temas         |");
				for (int i=0; i < M; i++){
					printf("%8d |", i + 1);	
				}
				printf("Promedio|\n");
				
				for (int j=0; j<N; j++){
					printf("|%-22s|", temas[j]);
					
					for (int i=0; i<M; i++){
						int aux = respuestas[j][i];
						printf("%8d |", aux);
					}
					float promedio = respuestas[j][N];
					printf("%0.2f    |\n", promedio);
				}
			}
	
				
	void comparadormax (int respuestas[N][M],char *temas[]){
					int max=0,x;
					int sumatoria[N];
					for (int i=0; i<N; i++){
						int suma =0;
						for(int j=0; j<M; j++){
							suma+= respuestas[i][j];
						}
						sumatoria[i]=suma;
					}
					for (int i =0; i<N; i++){
						if (sumatoria[i]>max)
							max = sumatoria[i];
					}
					for (int i =0; i<N; i++){
						if (sumatoria[i]==max)
							x=i;
					}	
					printf ("\nLa problematica con mas puntos es: %s con %d puntos\n",temas[x],max);
				}
		
					
					
		void comparadormin (int respuestas[N][M],char *temas[]){
						int min,x;
						int sumatoria[N];
						for (int i=0; i<N; i++){
							int suma =0;
							for(int j=0; j<M; j++){
								suma+= respuestas[i][j];
							}
							sumatoria[i]=suma;
							min = sumatoria[0];
						}
						for (int i =0; i<N; i++){
							if (sumatoria[i]<min)
								min = sumatoria[i];
						}
						for (int i =0; i<N; i++){
							if (sumatoria[i]==min)
								x=i;
						}	
						printf ("\nLa problematica con menos puntos es: %s con %d puntos\n",temas[x],min);
					}
						
						
		int main(void) {
							
		char *temas[] = {"1 - Corrupcion","2 - Pandemia por COVID-19","3 - Guerras en medio oriente","4 - Resecion economica Argentina","5 - Maltrato hacia la mujer"};
		int respuestas[N][M]={0};
		introduccion();
		impretemas(temas);
		carga(respuestas,temas);
		impretabla(temas, respuestas);
		comparadormax(respuestas,temas);
		comparadormin(respuestas,temas);
							
							
							
	return 0;
}
						
						
