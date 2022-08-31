#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 36000

int main(void) {
	
	int var = 0;
	int var2 = 1;
	int var3 = 0;
	int var4 [TAM], var5 [TAM];
	int in = 0;
	int frecuencia [6];
	
	srand (time (NULL));
	
	printf("presione 1 para tirar los dados,\n\n");
		printf("presione cualquier otra tecla para salir.\n\n");
		
	scanf("%d", &var2);
		
	if (var2 == 1) {
			for (in = 0; in < 1; in++) {
				var = rand() % 6 + 1;
			printf("el dado cayo en: %d\n" ,var);
		}
		var = 0;
			printf("presione 1 para tirar los dados de vuelta.\n");
				var2 = 0;
			scanf("%d", &var2);
		if (var2 == 1) {
				for (in = 0; in < 1; in++) {
					var3 = rand() % 6 + 1;
				printf("el dado cayo en: %d\n" ,var3);
				
			var3 = 0;
			}
		} else {
			printf("usted ah finalizado el programa.\n");
		}
	}	
	else {
		printf("usted ah finalizado el programa.\n");
	}	

	printf("se ejecuta 36000 veces al tirar 2 veces los dados \n");
		printf("y cuenta cuantas veces toco en un numero que dio la suma\n");
			printf("dos veces que tiro, dio: \n\n");
	
	for (in = 0; in < TAM; in++) {
	var4 [in] = rand() % 6 + 1;
	var5 [in] = rand() % 6 + 1;
	}
	
	for (in = 0; in < TAM; in++) {
	frecuencia[var4 [in] + var5 [in]]++;
	}
	
	for (in = 2; in < 13; in++) 
	printf("las veces que el dado dio ese numero %d: %d\n", in, frecuencia [in]); 
		
	return 0;
}

