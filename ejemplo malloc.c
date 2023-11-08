#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int *parr;
	
	parr = malloc(sizeof(int));
	
	*parr = 10;
		
		
	printf("%d", *parr);
	
	return 0;
}

