#ifndef VECTOR_H
#define VECTOR_H

	#include <stdio.h>
	#include <stdlib.h>
	#include <time.h>

	int *newVector(int n);
	void freeVector(int *v);
	int *fillVector(int *v, int n);
	int *newRandVector(int n);
	void printVector(int *v, int n);

#endif
