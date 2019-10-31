#include "matroid.h"

int main() {	
	Matroid pairMatroid;
	Matroid oddMatroid;
	Matroid bigMatroid;
	Matroid pairOddMatroid;
	Matroid mixMatroid;
	int pair= 0;
	int odd = 0;
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
	
	Matroid testA[] = {pairMatroid, oddMatroid, bigMatroid};
	Matroid testB[] = {pairMatroid, oddMatroid, bigMatroid, pairOddMatroid, mixMatroid};
	
	
	//a)
	#pragma omp parallel sections
	
	#pragma omp parallel section
	functionIsPair(testA);
	
	#pragma omp parallel section
	functionIsOdd(testA);
	
	#pragma omp parallel section
	functionBig(testA);
	
	
	return 1;
}
