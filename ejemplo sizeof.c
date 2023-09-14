#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char nombre[] = "hola, mundo!";
	int tem [] = {1, 2, 3, 4, 5, 6, 7};
	printf("%ld\n", sizeof(tem)/ sizeof(int));
	
	printf("%s", nombre);
	
	return 0;
}

