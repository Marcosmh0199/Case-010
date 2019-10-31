#include "matroid.h"

int main(){	
	Matroid pairMatroid;
	Matroid oddMatroid;
	Matroid bigMatroid;
	Matroid pairOddMatroid;
	Matroid mixMatroid;
	int pair= 0;
	int odd = 1;
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
	Matroid testA[3] = {pairMatroid, oddMatroid, bigMatroid};
	Matroid testB[5] = {pairMatroid, oddMatroid, bigMatroid, pairOddMatroid, mixMatroid};
	
	//a)
	printf("Parte a) \n\n");
	#pragma omp parallel sections
	
	#pragma omp parallel section
	functionIsPair(testA, 3);
	
	#pragma omp parallel section
	functionIsOdd(testA, 3);
	
	#pragma omp parallel section
	functionBig(testA, 3);
	
	printf("Fin Parte a)----------------------------\n");
	
	printf("\n\nParte b) \n\n");
	
	//Se ajustan los matroids para que todos tengan al menos 1 elemento que sea valido para una misma funcion y que cumpla para la interseccion
	pairMatroid.setS[9] = 101;
	oddMatroid.setS[5] = 101;
	pairOddMatroid.setS[5] = 101;
	mixMatroid.setS[3] = 101;
	
	
	return 1;
}
