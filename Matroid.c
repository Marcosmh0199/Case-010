#include "Matroid.h"
void initializeArray(struct Matroid *pMatroid){
	varray_init(&pMatroid->setI);
	varray_init(&pMatroid->setS);
}

bool validatePair(int pCurrentElement){
	return pCurrentElement % 2 == 0;
}

void functionPair(struct Matroid *pMatroid){
	int pairs[118];
	int pairQuantity = 0;
	for(int currentIndex = 0; currentIndex < (int)varray_length(pMatroid->setS); currentIndex++){
		int currentNum = *(int*)(varray_get(pMatroid->setS, currentIndex));
		if(validatePair(currentNum)){
			printf("CurrentNum %i \n",currentNum);
			pairs[pairQuantity] = currentNum;
			void *ptrVoid = &pairs[pairQuantity];
			varray_push(pMatroid->setI,ptrVoid);
			pairQuantity++;
		}
	}		
}
	
bool validateOdd(int pCurrentElement){
	return pCurrentElement % 2 == 1;
}
	
void functionOdd(struct Matroid *pMatroid){
	int odds[118];
	int oddQuantity = 0;
	for(int currentIndex = 0; currentIndex < (int)varray_length(pMatroid->setS); currentIndex++){
		int currentNum = *(int*)(varray_get(pMatroid->setS, currentIndex));
		if(validateOdd(currentNum)){
			printf("CurrentNum %i \n",currentNum);
			odds[oddQuantity] = currentNum;
			void *ptrVoid = &odds[oddQuantity];
			varray_push(pMatroid->setI,ptrVoid);
			oddQuantity++;
		}
	}
}
	
bool validateVowel(char pCurrentElement){
	return pCurrentElement == 'a' || pCurrentElement == 'e' || pCurrentElement == 'i' || pCurrentElement == 'o' || pCurrentElement == 'u';
}

void functionVowel(struct Matroid *pMatroid){
	int vowels[118];
	int vowelQuantity = 0;
	for(int currentIndex = 0; currentIndex < (int)varray_length(pMatroid->setS); currentIndex++){
		char currentChar = *(char*)(varray_get(pMatroid->setS, currentIndex));
		if(validateVowel(currentChar)){
			printf("CurrentChar %c \n",currentChar);
			vowels[vowelQuantity] = currentChar;
			void *ptrVoid = &vowels[vowelQuantity];
			varray_push(pMatroid->setI,ptrVoid);
			vowelQuantity++;
		}
	}
}


