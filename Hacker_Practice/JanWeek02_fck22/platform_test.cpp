#include <stdio.h>
#include <math.h>
#include <float.h>

double testSet[9] = { 1.0, -1.0, DBL_MAX, -1.0*DBL_MAX, 1/INFINITY, -1*(1/INFINITY), INFINITY, -1.0*INFINITY, INFINITY/INFINITY};

int isNegativeZero(double x){
	double calc = 1/x;
	return calc == -1.0*INFINITY;

}

int isPositiveZero(double x){
	double calc = 1/x;
	return calc == INFINITY;
}

int isINF(double x){
	return x == INFINITY;
}

int isNINF(double x){
	return x == -1.0*INFINITY;
}

int isNaN(double x){
	//NaN is not equal to itself, so a normal comparison wont work
	//But if x != x, then it should be NaN, so we can check if it isnt equal
	//instead.
	return 0 == (x == x);
}

int main(){
	printf("Begin Negative Zero Testing\n\n");
	for(int i = 0; i < 9; i++){
		printf("Testing: %f, isNegZero = %d\n\n", testSet[i], isNegativeZero(testSet[i]));
	}

	printf("\n\nBegin Positive Zero Testing\n\n");
	for(int i = 0; i < 9; i++){
		printf("Testing: %f, isPositiveZero = %d\n\n", testSet[i], isPositiveZero(testSet[i]));
	}

	printf("\n\nBegin INF Testing\n\n");
	for(int i = 0; i < 9; i++){
		printf("Testing: %f, isINF = %d\n\n", testSet[i], isINF(testSet[i]));
	}

	printf("\n\nBegin NINF Testing\n\n");
	for(int i = 0; i < 9; i++){
		printf("Testing: %f, isNINF = %d\n\n", testSet[i], isNINF(testSet[i]));
	}

	printf("\n\nBegin Nan Testing\n\n");
	for(int i = 0; i < 9; i++){
		printf("Testing: %f, isNaN = %d\n\n", testSet[i], isNaN(testSet[i]));
	}
}
