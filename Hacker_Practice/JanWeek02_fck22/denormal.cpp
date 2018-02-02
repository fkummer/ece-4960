#include <math.h>
#include <stdio.h>
int main(){
	double x = 1.234567890123456;
	int i = 1;
	printf("x:%f\n", x);
	x = x*pow(10.0, (-1.0*307.0));

	for(i=1; i<20; i++){
		x /= 10.0;
		printf("x = %.64f\n", x);
	}

	return 1;
}


