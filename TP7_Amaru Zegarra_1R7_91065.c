#include <stdio.h>
#define COLS 2

void cargar(float arr[][COLS], int num);

void ordenar_precios(float arr[][COLS], int num);

void imprimir(float arr[][COLS], int num);

void imprimir_caro_barato(float arr[][COLS], int num);


int main(int argc, char *argv[]) {
	
	int tam;
	
	printf("ingrese el tamaño: ");
	scanf("%d", &tam);
	
	float lista [tam][COLS];
	
	cargar(lista, tam);
	imprimir(lista, tam);
	ordenar_precios(lista, tam);
	imprimir_caro_barato(lista, tam);
	
	return 0;
}

void cargar(float arr[][COLS], int num){
	int codigos;
	float precios;
	
	for(int i=0; i<num; i++){
		for(int j=0; j<COLS; j++){
			if(j == 0){
				printf("ingrese codigo: ");
				scanf("%d", &codigos);
				arr [i][j] = codigos;
			}else{
				printf("ingrese precio: ");
				scanf("%f", &precios);
				arr[i][j] = precios;
			}
		}
	}
	
}
	
void ordenar_precios(float arr[][COLS], int num){
	int temp;
	
	for (int i = 0; i < num; i++){
		for (int j = 0; j < num-1; j++){
			if (arr[j][1] > arr[j+1][1]){
				temp = arr[j][1];
				arr[j][1] = arr[j+1][1];
				arr[j+1][1] = temp;
				
				temp = arr[j][0];
				arr[j][0] = arr[j+1][0];
				arr[j+1][0] = temp;
			}
		}
	}
}
	
void imprimir(float arr[][COLS], int num){
	printf ("codigos  precios");
	printf("\n");
	
	for(int i=0; i<num; i++){
		for(int j=0; j<COLS; j++){
			if(j == 0){
				printf("%.0f\t", arr[i][j]);
			}else{
				printf("%.2f\t", arr[i][j]);
				printf("\n");
			}
		}
	}
	
}

void imprimir_caro_barato(float arr[][COLS], int num){
	printf("producto mas caro:\n");
	printf("codigo: %0.f\n",arr[num -1][0]);
	printf("precio: %.2f\n",arr[num -1][1]);
	
	printf("producto mas barato:\n");
	printf("codigo: %0.f\n",arr[0][0]);
	printf("precio: %.2f\n",arr[0][1]);
	printf("\n");
	
	int i=1;
	
	while(i<=3){
		printf("producto mas caros:\n");
		printf("codigo: %0.f\n",arr[num -i][0]);
		printf("precio: %.2f\n",arr[num -i][1]);
		
		i+=1;
	}
	
	printf("\n");
	
	int j=0;
	
	while(j<=2){
		printf("producto mas baratos:\n");
		printf("codigo: %0.f\n",arr[j][0]);
		printf("precio: %.2f\n",arr[j][1]);
		
		j+=1;
	}
	
}
