#include "sort.h"

int *insertionSort(int *vector, int n){
	int key, j, i;

	for (j = 1; j < n; j++) {
		key = vector[j];
		i = j - 1;
		while (i >= 0 && vector[i] > key) {
			vector[i+1] = vector[i];
			i--;
		}
		vector[i+1] = key;
	}
	return vector;
}

int *bubbleSort(int *vector, int n){
	int i, j;
	int aux;
	
	for (i = 0; i < n-1; i++) {
		for (j = n-1; j >= i+1; j--) {
			if (vector[j] < vector[j-1]) {
				aux = vector[j];
				vector[j] = vector[j-1];
				vector[j-1] = aux;
			}
		}
	}

	return vector;
}	
