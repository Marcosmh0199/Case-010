#include "Matroid.h"

bool isPair(int pCurrentElement){
	return pCurrentElement % 2 == 0;
}

void functionIsPair(struct Matroid *pMatroid){
	int length  = (int)( sizeof(pMatroid->setS) / sizeof(pMatroid->setS[0]) );	
	int pairQuantity = 0;
	for(int currentNumber = 0; currentNumber < length; currentNumber++){
		if(isPair(pMatroid->setS[currentNumber])){
			pMatroid->setI[pairQuantity++] = pMatroid->setS[currentNumber];
		}
	}
}
	
bool isOdd(int pCurrentElement){
	return pCurrentElement % 2 == 1;
}
	
void functionIsOdd(struct Matroid *pMatroid){
	int length  = (int)( sizeof(pMatroid->setS) / sizeof(pMatroid->setS[0]) );	
	int oddQuantity = 0;
	for(int currentNumber = 0; currentNumber < length; currentNumber++){
		if(isOdd(pMatroid->setS[currentNumber])){
			pMatroid->setI[oddQuantity++] = pMatroid->setS[currentNumber];
		}
	}
}
	
bool isBig(int pCurrentElement){
	return pCurrentElement > 100;
}

void functionBig(struct Matroid *pMatroid){
	int length  = (int)( sizeof(pMatroid->setS) / sizeof(pMatroid->setS[0]) );
	int bigQuantity = 0;
	for(int currentNumber = 0; currentNumber < length; currentNumber++){
		if(isBig(pMatroid->setS[currentNumber])){
			pMatroid->setI[bigQuantity++] = pMatroid->setS[currentNumber];
		}
	}
}

int* interseccion(int numeros1[], int numeros2[]) {
	
	int lengthNumeros1 = (int)( sizeof(&numeros1) / sizeof(&numeros1[0]) );
	int lengthNumeros2 = (int)( sizeof(&numeros2) / sizeof(&numeros2[0]) );
	int max= lengthNumeros1 ^ ((lengthNumeros1 ^ lengthNumeros2) & -(lengthNumeros1 < lengthNumeros2));  
	int interAux[max];
	int index = 0;
	
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


