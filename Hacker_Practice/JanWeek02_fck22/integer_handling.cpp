#include <stdio.h>

int main(){
	long i = 1;
	int factorial = 1;

	printf("Counting Up:\n");
	for(i = 2; i<20; i++){
		factorial *= i;
		printf("i = %d, factorial = %d\n",i, factorial);
	}

	printf("\nCounting Down:\n");
	for(i = 20; i>1; i--){
		factorial /= i;
		printf("i = %d, factorial = %d\n",i, factorial);
	}

	return 1;
}
