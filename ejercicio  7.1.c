# include <stdio.h>
# define N 5



int main ( void )
{
	int i;
	int a[N];

	printf("acontinuacion ingrese 10 numeros enteros\n");
	for(int x=0; x<N; x++){
		printf("ingrese numero[%d]: ", x);
		scanf("%d", &a[x]);
	}
	
	for(int x=0; x<N; x++){
		printf("numero[%d]: %d\n", x, a[x]);
	}
	
	for(int x=0; x<N; x++){
		if(a[x] < 0){
			a[x] = a[x] * (-1);
		}
	}
	
	printf("arreglo positivo\n");
	
	for(int x=0; x<N; x++){
		printf("numero[%d]: %d\n", x, a[x]);
	}
	
	return 0;
}
