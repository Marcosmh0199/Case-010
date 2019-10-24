#include <stdbool.h>
struct Matroid{
	int size;
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
		for(int currentElement = 0; currentElement < pMatroid.size; currentElement++){
			if(validatePair(pMatroid,currentElement)){
				pMatroid.setI[indexSetI] = pMatroid.setS[currentElement];
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
		for(int currentElement = 0; currentElement < pMatroid.size; currentElement++){
			if(validateOdd(pMatroid,currentElement)){
				pMatroid.setI[indexSetI] = pMatroid.setS[currentElement];
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
		for(int currentElement = 0; currentElement < pMatroid.size; currentElement++){
			if(validateOdd(pMatroid,currentElement)){
				pMatroid.setI[indexSetI] = pMatroid.setS[currentElement];
			}
		}
	}
	
	int main(){
		struct Matroid m;
		printf("Hola Mundo!");
		return 1;
	}

