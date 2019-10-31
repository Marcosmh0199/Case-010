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
	
	printf("\n\nParte a) \n\n");
	
	return 1;
}
