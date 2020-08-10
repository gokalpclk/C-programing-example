//EXERCISE 3-6  Consider the exercise 3-4. Write a function named area that recives the sides of a tiangle, computes and returns its area as the function value. Main program should input the lenghts of a triangle and call the functions and display its area.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double area(double a, double b, double c){
	double s, herons;
	s = (a+b+c)/2.0;
	herons = sqrt(s*(s-a)*(s-b)*(s-c));
	return herons;
	
	
}
int main(void){
	double a, b, c, result;
	printf("Enter the first side: ");
	scanf("%lf", &a);
	printf("Enter the second side: ");
	scanf("%lf", &b);
	printf("Enter the third side: ");
	scanf("%lf", &c);
	result = area(a, b, c);
	printf("Area: %f\n", result);
	
	system("PAUSE");
	return(0);
}
