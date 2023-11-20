#include <stdio.h>
#define TAM 10

void inicializar_arreglo_con_num(int *arreglo, int tam, int num)
{
	for (int i = 0; i < tam; i++){
		arreglo[i] = num;
	}
}

void imprimir_arreglo(int *arreglo, int tam)
{
	for (int i = 0; i < tam; i++){
		printf("%d: %d\n", i, arreglo[i]);
	}
}

int tamanio(int *arreglo){
	return sizeof(arreglo);
}

int main(void) {
	
	int uuid[TAM] = {0};
	int *puid;
	
	puid=&uuid[0];
	
	inicializar_arreglo_con_num(puid, TAM, 30);
	
	imprimir_arreglo(puid, TAM);
	
	printf("tamaño en bytes de arreglo: %d y en bytes: %d\n",sizeof(uuid), tamanio(puid));
	
	
	
	return 0;
}
