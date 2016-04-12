#include "vector.h"

//funcao que aloca dinamicamente o vetor de dados na memoria heap
int *newVector(int n){
	return (int *)malloc(n * sizeof(int));
}

//funcao que libera a memoria heap previamente alocada
void freeVector(int *v){
	free(v);
}

//funcao que sorteia numeros aleatorios e preenche o vetor de dados
int *fillVector(int *v, int n){
	int i;
    //seed do numero aleatorio
	srand(time(NULL));

	//para cada elemento do vetor, sorteia um numero no intervalo [0,10000]
	for(i = 0; i < n; ++i){
        //fornece uma posicao aleatoria dentro do meu tab
        v[i] = rand()%10000;
	}
	return v;	
}

//funcao que cria um vetor de tamanho n com numeros aleatorios
int *newRandVector(int n){
	int *v = newVector(n);
	v = fillVector(v,n);
	return v;
}

int *getExeVector(int *n){
	(*n) = 9;
	int *v = newVector(9);
	v[0] = 7;
	v[1] = 5;
	v[2] = 8;
	v[3] = 4;
	v[4] = 9;
	v[5] = 2;
	v[6] = 3;
	v[7] = 6;
	v[8] = 1;
	return v;
}

void printVector(int *v, int n){
	int i;
	printf("[");
	for(i = 0; i < n; ++i){
		printf("%d",v[i]);
		if(i != n-1) printf(",");
	}
	printf("]\n"); 
}
