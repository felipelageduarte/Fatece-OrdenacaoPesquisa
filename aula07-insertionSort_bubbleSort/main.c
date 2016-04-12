#include<stdio.h>
#include "vector.h"

int main(int argc, char *argv[]){
	
	int n = 15;
	int *v = newRandVector(n);	
	printVector(v,n);
	freeVector(v);
	return 0;
}
