#include<stdio.h>
#include "vector.h"
#include "sort.h"

int main(int argc, char *argv[]){
	
	int n = 10;
	int *v;

	printf("vetor original: ");
	v  = newRandVector(n);	
	printVector(v,n);

	printf("------------------------------------------------------------------\n");	
	
	printf("insertion sort: ");
	v = insertionSort(v,n);
	printVector(v,n);
	freeVector(v);
	
	v = newRandVector(n);	
	v = bubbleSort(v,n);
	printf("   bubble sort: ");
	printVector(v,n);
	freeVector(v);
	
	v = newRandVector(n);	
	v = mergeSort(v,n);
	printf("    merge sort: ");
	printVector(v,n);
	freeVector(v);
	
	v = newRandVector(n);	
	v = quickSort(v,n);
	printf("    quick sort: ");
	printVector(v,n);
	freeVector(v);
	return 0;
}
