#include <stdbool.h>
#include <stdio.h>
#include "DinamicArray.h"
int size = 10;


struct Matroid{
	//aqui van los dinamic array
	int setS[10];
	int setI[10];
};

	//Mae si se pasa de saico, ajuste estas funciones para que no sean con arrays normales, sino
	//con los dinamic array si logra probarlos y adaptarlos al matroid
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
	
	int main(){
		
		//Pruebe acá los dinamic array, usted vera como XD 
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

