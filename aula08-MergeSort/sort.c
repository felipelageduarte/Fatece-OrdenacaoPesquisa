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

void merge(int *A, int p, int q, int r){
	int i, j, k;
	
	int n1 = q - p + 1;
	int n2 = r - q;
	
	int *L = (int *)malloc((n1 + 1) * sizeof(int)); 
	int *R = (int *)malloc((n2 + 1) * sizeof(int));
	
	for(i = p  , j = 0; i <= q; ++i, ++j) L[j] = A[i];  
	for(i = q+1, j = 0; i <= r; ++i, ++j) R[j] = A[i];
	
	L[n1] = INT_MAX;  
	R[n2] = INT_MAX;

	for(k = p, i = 0, j = 0; k <= r; ++k){
		if(L[i] <= R[j]){
			A[k] = L[i];
			i++;
		} else {
			A[k] = R[j];
			j++;
		}
	}	

	free(L);
	free(R);
}

void mergeSort2(int *A, int p, int r){
	if(p < r){
		int q = p+ ((r-p) / 2);
		mergeSort2(A, p, q);
		mergeSort2(A, q+1, r);
		merge(A, p, q, r);
	}
}

int *mergeSort(int *vector, int n){
	mergeSort2(vector,0,n-1);	
	return vector;
}	
