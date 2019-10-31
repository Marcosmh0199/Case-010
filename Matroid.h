#include <stdbool.h>
#include <stdio.h>
typedef struct Matroid{
	int setS[10];
	int setI[10];
} Matroid;

bool isPair(int pCurrentElement);

void functionIsPair(Matroid pMatroid[]);

bool isOdd(int pCurrentElement);

void functionIsOdd(Matroid pMatroid[]);

bool isBig(int pCurrentElement);

void functionBig(Matroid pMatroid[]);

int* interseccion(int numeros1[], int numeros2[]);
