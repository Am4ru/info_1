#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int c = 1;
	int cal;
	float tl = 0 , prom;
	
	
	// incializacion de la operacion 
		
		while ( c <= 3 ) {
			
			printf ( "introduzca la calificacion: " );
				scanf ( "%d" , &cal );
					tl = tl + cal;
						c = c+1;
		}
		
		prom =  tl / 3;
		
		printf ( "el promedio del grupo es %f\n" , prom );
	
	return 0;
}

