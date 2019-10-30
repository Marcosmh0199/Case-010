#include <stdbool.h>
#include <stdio.h>
typedef struct Matroid{
	int setS[10];
	int setI[10];
} Matroid;

bool isPair(int pCurrentElement);

void functionIsPair(struct Matroid *pMatroid);

bool isOdd(int pCurrentElement);

void functionIsOdd(struct Matroid *pMatroid);

bool isBig(int pCurrentElement);

void functionBig(struct Matroid *pMatroid);
