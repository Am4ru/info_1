#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int c;
	int cal;
	float tl , prom;
	
	tl = 0;
	c = 1;
	
	// incializacion de la operacion 
		
		while ( c <= 10 ) {
			
			printf ( "introduzca la calificacion: " );
				scanf ( "%d" , &cal );
					tl = tl + cal;
						c = c+1;
		}
		
		prom =  tl / 10;
		
		printf ( "el promedio del grupo es %f\n" , prom );
	
	return 0;
}

