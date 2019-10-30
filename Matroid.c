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

int* interseccion(int numeros1[10], int numeros2[10], int size1, int size2) {
	int max=0;
	
	if(size1 >= size2){
		max = size1;
	} else{
		max = size2;	
	}
	
	int interAux[max];
	int index = 0;
	
	for(int i=0; i < size1; i++){
		for(int j=0; j < size2; j++){
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

int main(){	
	Matroid pairMatroid;
	Matroid oddMatroid;
	Matroid bigMatroid;
	Matroid pairOddMatroid;
	Matroid mixMatroid;
	int pair= 0;
	int odd = 0;
	int big = 100;
	int pairOdd = 0;
	int mix = 96;
	for(int index = 0; index < 10; index++ ){
		pairMatroid.setS[index] = pair +=2;
		oddMatroid.setS[index] = odd += 2;
		bigMatroid.setS[index] = big++;
		pairOddMatroid.setS[index] = pairOdd++;
		mixMatroid.setS[index] = mix++;
	}
	functionIsPair(&pairMatroid);
	for(int i = 0; i < 10; i++){
		printf("%d \n",pairMatroid.setI[i]);
	}
	Matroid testA[] = {pairMatroid, oddMatroid, bigMatroid};
	Matroid testB[] = {pairMatroid, oddMatroid, bigMatroid, pairOddMatroid, mixMatroid};
	return 1;
}


