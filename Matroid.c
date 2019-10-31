#include "Matroid.h"

bool isPair(int pCurrentElement){
	return pCurrentElement % 2 == 0;
}

void functionIsPair(Matroid pMatroid[]){
	int matroidQuantity = (int)( sizeof(&pMatroid) / sizeof(&pMatroid[0]) );
	for(int currentMatroid; currentMatroid < matroidQuantity; currentMatroid++){
		int length  = (int)( sizeof(pMatroid[currentMatroid].setS) / sizeof(pMatroid[currentMatroid].setS[0]) );	
		int pairQuantity = 0;
		for(int currentNumber = 0; currentNumber < length; currentNumber++){
			int number = pMatroid[currentMatroid].setS[currentNumber];
			if(isPair(number)){
				pMatroid[currentMatroid].setI[pairQuantity] = number;
				printf("%d",number);
			}
		}
		printf("\n");
	}

}
	
bool isOdd(int pCurrentElement){
	return pCurrentElement % 2 == 1;
}
	
void functionIsOdd(Matroid pMatroid[]){
	int matroidQuantity = (int)( sizeof(&pMatroid) / sizeof(&pMatroid[0]) );
	for(int currentMatroid; currentMatroid < matroidQuantity; currentMatroid++){
		int length  = (int)( sizeof(pMatroid->setS) / sizeof(pMatroid->setS[0]) );	
		int oddQuantity = 0;
		for(int currentNumber = 0; currentNumber < length; currentNumber++){
			int number = pMatroid[currentMatroid].setS[currentNumber];
			if(isOdd(number)){
				pMatroid[currentMatroid].setI[oddQuantity] = number;
				printf("%d",number);
			}
		}
		printf("\n");
	}

}
	
bool isBig(int pCurrentElement){
	return pCurrentElement > 100;
}

void functionBig(Matroid pMatroid[]){
	int matroidQuantity = (int)( sizeof(&pMatroid) / sizeof(&pMatroid[0]) );
	for(int currentMatroid; currentMatroid < matroidQuantity; currentMatroid++){
		int length  = (int)( sizeof(pMatroid->setS) / sizeof(pMatroid->setS[0]) );
		int bigQuantity = 0;
		for(int currentNumber = 0; currentNumber < length; currentNumber++){
			int number = pMatroid[currentMatroid].setS[currentNumber];
			if(isBig(number)){
				pMatroid[currentMatroid].setI[bigQuantity] = number;
				printf("%d",number);
			}
		}
		printf("\n");
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
	Matroid testA[] = {pairMatroid, oddMatroid, bigMatroid};
	Matroid testB[] = {pairMatroid, oddMatroid, bigMatroid, pairOddMatroid, mixMatroid};
	return 1;
}


