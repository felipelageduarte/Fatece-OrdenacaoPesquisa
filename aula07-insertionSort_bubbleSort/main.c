#include<stdio.h>
#include "vector.h"
#include "sort.h"

int main(int argc, char *argv[]){
	
	int n = 15;
	int *v;
	
	printf("\n--> Insertion Sort:\n");
	v  = newRandVector(n);	
	printVector(v,n);
	v = insertionSort(v,n);
	printVector(v,n);
	freeVector(v);
	
	printf("\n--> Bubble Sort:\n");
	v = newRandVector(n);	
	printVector(v,n);
	v = bubbleSort(v,n);
	printVector(v,n);
	freeVector(v);
	return 0;
}
