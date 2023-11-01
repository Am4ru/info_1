#include <stdio.h>
#define TAM 3

/** Función para sumar arreglos
  * operación:  c = a + b
  *  */
void sumar_arreglos(float* arreglo_c,
    const float* arreglo_a,
    const float* arreglo_b,
    const int tam)
{
  for (int i = 0; i < tam; i++){
    arreglo_c[i] = *(arreglo_a+i) + arreglo_b[i];
  }
}

void cargar_arreglo(float* arreglo, int tam);
void imprimir_arreglo(float* arreglo, int tam);
void multiplicar_arreglos(float* arreglo_c,const float* ,const float* ,const int );

int main(void) {

  float a[TAM], b[TAM], c[TAM];

  for (int i = 0; i < TAM; i++){
    printf("Ingrese el elemento a[%d]: ", i);
    scanf("%f", &a[i]);gei
  }

  for (int i = 0; i < TAM; i++){
    printf("Ingrese el elemento b[%d]: ", i);
    scanf("%f", &b[i]);
  }

  sumar_arreglos(c, a, b, TAM);
  printf("Resultado:\n");
  for (int i = 0; i < TAM; i++){
    printf("%f + %f = %f\n", a[i], b[i], c[i]);
  }


  return 0;
}
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h> //RUFFINI
#define TAM 3


void sumar_arreglos(float* arreglo_c,
					const float* arreglo_a,
					const float* arreglo_b,
					const int tam)
{
	for (int i = 0; i < tam; i++){
		*(arreglo_c+i) = *(arreglo_a+i) + *(arreglo_b+i);
	}
}

void multiplicar_arreglos(float* arreglo_c,
					const float* arreglo_a,
					const float* arreglo_b,
					const int tam)
{
	for (int i = 0; i < tam; i++){
		*(arreglo_c+i) = *(arreglo_a+i) * *(arreglo_b+i);
	}
	
}

void cargar_arreglo(float* arreglo, int tam){
	 for (int i = 0; i < tam; i++){
		printf("Ingrese el elemento a[%d]: ", i);
		scanf("%f", (arreglo+i));
	}
	
}

void imprimir_arreglo(float* arreglo, int tam){
	printf("Resultado:\n");
	for (int i = 0; i < tam; i++){
		printf("%f\n", (arreglo+i));
    }
}
int main(void) {
	
	float a[TAM], b[TAM], c[TAM];
	
	cargar_arreglo(a, TAM);
	cargar_arreglo(b, TAM);
	
	sumar_arreglos(c, a, b, TAM);
	imprimir_arreglo(c, TAM);
		
	multiplicar_arreglos(c, a, b, TAM);
	
	imprimir_arreglo(b, TAM);
	
	return 0;
}
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------






#include <stdio.h>
#define TAM 3

/** Función para sumar arreglos
  * operación:  c = a + b
  *  */
  void cargar_arreglo(float* a,float* b, int tam){

 for (int i = 0; i < TAM; i++){
    printf("Ingrese el elemento a[%d]: ", i);
    scanf("%f", a+i);
  }

  for (int i = 0; i < TAM; i++){
    printf("Ingrese el elemento b[%d]: ", i);
    scanf("%f", b+i);
  }
}

void sumar_arreglos(float* arreglo_c,
    const float* arreglo_a,
    const float* arreglo_b,
    const int tam)
{
  for (int i = 0; i < tam; i++){
    *(arreglo_c+i) = *(arreglo_a+i) + *(arreglo_b+i);
  }
}














void imprimir_arreglo(float*c, int tam){

 printf("Resultado:\n");
  for (int i = 0; i < TAM; i++){
    printf("%f\n", *( c+i));
  }
  
  }



void multiplicar_arreglos(float* a,float* b ,float* c ,int tam){
    for (int i = 0; i < tam; i++){
    *(c+i) = *(a+i) * *(b+i);
  }
}
    
    
    





int main(void) {

  float a[TAM], b[TAM], c[TAM];

 cargar_arreglo(a, b, TAM);

  sumar_arreglos(c, a, b, TAM);
  
  imprimir_arreglo(c, TAM);
  
 multiplicar_arreglos(a,b,c,TAM );
  
   imprimir_arreglo(c, TAM);

  return 0;
}
