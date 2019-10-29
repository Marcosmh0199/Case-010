#include <stdbool.h>
#include <stdio.h>
#include "DinamicArray.h"
struct Matroid{
	varray *setS;
	varray *setI;
};

bool validatePair(struct Matroid pMatroid,int pCurrentElement);

bool validateOdd(struct Matroid pMatroid,int pCurrentElement);

void functionOdd(struct Matroid pMatroid);

bool greaterThan(struct Matroid pMatroid, int pCurrentElement);

void functionGreaterThan(struct Matroid pMatroid);
