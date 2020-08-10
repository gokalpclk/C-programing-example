//EXERCISE 3-2  Type in the program below to input the coefficients a, b and c of a quadratic equation given by 
// ax^2+bx+c=0
//A function named discriminant will accept theese coefficients, determine and print the roots, and return the discriminant, to the main. Test your program for (a=1, b=2 and c=1), (a=1, b=1, c=-12) and (a=2, b=3, c=6)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>		/*Required library for mathematical functions*/

/*
	FUNCTION PROTOTYPE
*/
double discriminant(double a, double b, double c);

int main(void){
	double a, b, c, disc;
	printf("Enter coefficients a, b and c>");
	scanf("%lf%lf%lf", &a, &b, &c);
	disc = discriminant(a, b, c);
	printf("Discriminant = %f\n", disc);
	system("PAUSE");
	return(0);
}

/*
	FUNCTION CODE
*/
double discriminant(double a, double b, double c){
	double d, root1, root2;
	d = pow(b,2)-4.0*a*c;
	root1 = (-b-sqrt(d))/(2.0*a);
	root2 = (-b+sqrt(d))/(2.0*a);
	printf("Root1=%f, and Root2=%f\n", root1, root2);
	return(d);
}
