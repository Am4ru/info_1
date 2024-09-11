#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n1;
	
	printf("ingrese una calificacion a evaluar: ");
	scanf("%d", &n1);
	
	if(n1>=90){
		printf("calificacion A");
	}else if (n1>=80 && n1<90){
		printf("calificacion B");
	}else if(n1>=70 && n1<80){
		printf("calificacion C");
	}else if(n1>=60 && n1<70){
		printf("calificacion D");
	}else if(n1<60){
		printf("calificacion F");
	}
	
	return 0;
}

