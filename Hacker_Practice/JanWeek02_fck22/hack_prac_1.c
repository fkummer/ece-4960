#include <math.h>
#include <stdio.h>

/*
 * Compare 3 methods for calculating the quadratic equation to identify how precision
 * errors in floating point impact the results. Code created on the ecelinux computer
 * which run Linux, compiled using gcc.
 */
int main(){

	double a = 1E-20;
	double b = 1E3;
	double c = 1E3;

	double discr = (b*b) - (4*a*c);

	double x1 = (-1.0*b + sqrt(discr))/(2.0*a);

	double x2 = (-1.0*b - sqrt(discr))/(2.0*a);

	printf("Method 1:\n");
	printf("x1: %f, x2: %f\n", x1, x2);

	double foo = b*(1.0-((2.0*a*c)/(b*b)));
	
	x1 = (-1.0*b + foo)/(2.0*a);

	x2 = (-1.0*b - foo)/(2.0*a);

	printf("\nMethod 2:\n");
	printf("x1: %f, x2: %f\n", x1, x2);

	x1 = -1.0*(c/b);

	x2 = ((-1.0*b)/a)+(c/b);

	printf("\nMethod 3:\n");
	printf("x1: %f, x2: %f\n", x1, x2);

	return 0;
}
