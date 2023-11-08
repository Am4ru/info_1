#include <stdio.h>

struct punto_2D{
	int x;
	int y;
};

struct punto_3D{
	int x;
	int y;
	int z;
};

int main(int argc, char *argv[]) {
	
	struct punto_2D punto1 = {1, 4};
	struct punto_3D punto2 = {3, 7, 21};
	
	printf("%d, %d, %d", punto1);
	
	return 0;
}

