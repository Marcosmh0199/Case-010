#include <stdbool.h>
#include <stdio.h>
#include "DinamicArray.h"
struct Matroid{
	varray *setS;
	varray *setI;
};

void initializeArray(struct Matroid *pMatroid);

void functionPair(struct Matroid *pMatroid);

bool validatePair(int pCurrentElement);

bool validateOdd(int pCurrentElement);

void functionOdd(struct Matroid *pMatroid);

bool validateVowel(char pCurrentElement);

void functionVowel(struct Matroid *pMatroid);
