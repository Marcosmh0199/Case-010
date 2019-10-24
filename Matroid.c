#include <stdbool.h>
#include <stdio.h>

int size = 10;

struct Matroid{
	int setS[10];
	int setI[10];
};

	bool validatePair(struct Matroid pMatroid,int pCurrentElement){
		if(pMatroid.setS[pCurrentElement] % 2 == 0){
			return true;
		}
		return false;
	}

	void functionPair(struct Matroid pMatroid){
		int indexSetI = 0;
		for(int currentElement = 0; currentElement < size; currentElement++){
			if(validatePair(pMatroid,currentElement)){
				pMatroid.setI[indexSetI] = pMatroid.setS[currentElement];
				indexSetI++;
			}
		}
	}
	
	bool validateOdd(struct Matroid pMatroid,int pCurrentElement){
		if(pMatroid.setS[pCurrentElement] % 2 == 1){
			return true;
		}
		return false;
	}
	
	void functionOdd(struct Matroid pMatroid){
		int indexSetI = 0;
		for(int currentElement = 0; currentElement < size; currentElement++){
			if(validateOdd(pMatroid,currentElement)){
				pMatroid.setI[indexSetI] = pMatroid.setS[currentElement];
				indexSetI++;
			}
		}
	}
	
	bool greaterThan(struct Matroid pMatroid, int pCurrentElement){
		if(pMatroid.setS[pCurrentElement] > 100){
			return true;
		}
		return false;
	}
	
	void functionGreaterThan(struct Matroid pMatroid){
		int indexSetI = 0;
		for(int currentElement = 0; currentElement < size; currentElement++){
			if(greaterThan(pMatroid,currentElement)){
				pMatroid.setI[indexSetI] = pMatroid.setS[currentElement];
				indexSetI++;
			}
		}
	}
	
	int * getIntersection(int array1[], int array2[]){
		int repetidos[size];
		int ptrRepetidos = 0;
		
		for(int index=0; index < sizeof(array1); index++){
			for(int puntero=0; puntero < sizeof(array2); puntero++){
				if(array1[index] == array2[puntero]) {
					repetidos[ptrRepetidos] = array1[index];
					ptrRepetidos++;
				}
			}
		}
		
		return repetidos;
	}
	
	int main(){
		struct Matroid m;
		int pair = 2;
		int odd = 1;
		for(int currentIndex = 0; currentIndex < size; currentIndex++){
			m.setS[currentIndex] = pair;
			pair+=2;
		}
		
		printf("Hola Mundo!");
		return 1;
	}

