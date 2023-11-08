#include <stdio.h>

void bubbleSort(int arr[], int n) {
	int temp;
	int *ptr;
	
	for (int i = 0; i < n - 1; i++) {
		ptr = arr;
		for (int j = 0; j < n - 1 - i; j++) {
			if (*ptr > *(ptr + 1)) {
				// Intercambia los elementos si están en el orden incorrecto
				temp = *ptr;
				*ptr = *(ptr + 1);
				*(ptr + 1) = temp;
			}
			ptr++;
		}
	}
}

int main() {
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	printf("Arreglo sin ordenar:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	
	bubbleSort(arr, n);
	
	printf("\nArreglo ordenado:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
