//EXERCISE 3-1  Type in and run the following program
//USE OF MATH. LIBRARY FUNCTIONS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>		/*Required library for mathematical functions*/
#define pi 3.1415926
int main(void){
	int i;
	double x, y, z;
	printf("Enter an integer value: ");
	scanf("%d", &i);
	
	/* abs */
	printf("Absolute value of %d=%5d\n", i, abs(i));
	
	/* sqrt, ceil, floor*/
	z = 36.9;
	x = 67.12;
	y = -67.12;
	printf("Square root of %f=%7.4lf\n", z, sqrt(z));
	printf("Ceils of %f and %f are %7.0f and %7.0f\n", x, y, ceil(x), ceil(y));
	printf("Floors of %f and %f are %7.0f and %7.0f\n", x, y, ceil(x), ceil(y));
	
	/* exponentiation with pow */
	printf("%f to the power %f=5f\n", 2.0, 10.0, pow(2.0,10.0));
	
	/* trigonometric and log functions */
	printf("Sin(30)=%7.4f\n", sin(pi*30/180));
	printf("log(100)=%7.4f\n", log10(100));
	system("PAUSE");
	return(0);
}

