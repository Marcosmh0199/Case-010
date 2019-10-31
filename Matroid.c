#include "Matroid.h"

bool isPair(int pCurrentElement){
	return pCurrentElement % 2 == 0;
}

void functionIsPair(Matroid pMatroid[], int matroidQuantity){
	#pragma omp parallel for
	for(int currentMatroid = 0; currentMatroid < matroidQuantity; currentMatroid++){
		int length  = (int)( sizeof(pMatroid[currentMatroid].setS) / sizeof(pMatroid[currentMatroid].setS[0]) );	
		int pairQuantity = 0;
		#pragma omp parallel for
		for(int currentNumber = 0; currentNumber < length; currentNumber++){
			int number = pMatroid[currentMatroid].setS[currentNumber];
			if(isPair(number)){
				pMatroid[currentMatroid].setI[pairQuantity] = number;
				printf("%d ",number);
			}
		}
		printf("\n");
	}
	printf("FIN PAR \n");
}
	
bool isOdd(int pCurrentElement){
	return pCurrentElement % 2 == 1;
}
	
void functionIsOdd(Matroid pMatroid[], int matroidQuantity){
	#pragma omp parallel for
	for(int currentMatroid=0; currentMatroid < matroidQuantity; currentMatroid++){
		int length  = (int)( sizeof(pMatroid->setS) / sizeof(pMatroid->setS[0]) );	
		int oddQuantity = 0;
		#pragma omp parallel for
		for(int currentNumber = 0; currentNumber < length; currentNumber++){
			int number = pMatroid[currentMatroid].setS[currentNumber];
			if(isOdd(number)){
				pMatroid[currentMatroid].setI[oddQuantity] = number;
				printf("%d ",number);
			}
		}
		printf("\n");
	}
	printf("FIN Impar \n");
}
	
bool isBig(int pCurrentElement){
	return pCurrentElement > 100;
}

void functionBig(Matroid pMatroid[], int matroidQuantity){
	#pragma omp parallel for
	for(int currentMatroid=0; currentMatroid < matroidQuantity; currentMatroid++){
		int length  = (int)( sizeof(pMatroid->setS) / sizeof(pMatroid->setS[0]) );
		int bigQuantity = 0;
		#pragma omp parallel for
		for(int currentNumber = 0; currentNumber < length; currentNumber++){
			int number = pMatroid[currentMatroid].setS[currentNumber];
			if(isBig(number)){
				pMatroid[currentMatroid].setI[bigQuantity] = number;
				printf("%d ",number);
			}
		}
		printf("\n");
	}
	printf("FIN Mayor \n");
}

int* interseccion(int numeros1[], int numeros2[]) {
	
	int lengthNumeros1 = (int)( sizeof(&numeros1) / sizeof(&numeros1[0]) );
	int lengthNumeros2 = (int)( sizeof(&numeros2) / sizeof(&numeros2[0]) );
	int max= lengthNumeros1 ^ ((lengthNumeros1 ^ lengthNumeros2) & -(lengthNumeros1 < lengthNumeros2));  
	int interAux[max];
	int index = 0;
	
	#pragma omp parallel for
	for(int i=0; i < lengthNumeros1; i++){
		for(int j=0; j < lengthNumeros2; j++){
			if(numeros1[i] == numeros2[j]){
				interAux[index++] = numeros1[i];
			}
		}
	}
	
	int interseccion[index-1];
	for(int u=0; u < index-1; u++){
		interseccion[u] = interAux[u];
	}
	
	int *i = interseccion;
	
	return i;
}


