#include <stdio.h>


int main (void){
int contador = 0;
float promedio = 0.0;
int nota;

while (contador<10){
printf("ingrese la nota: ");
scanf("%d", &nota);

promedio += nota;
contador += 1;
}

promedio = promedio / contador;
printf("el promedio es: %f\n", promedio);

return 0;
}