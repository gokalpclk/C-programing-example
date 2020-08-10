//EXERCISE 3-5  Consider the exercise 3-4. Write a function named area that recives the sides of a tiangle, computes and display its area. Main program should input the lenghts of a triangle and call the functions area.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void area(double a, double b, double c){
	double s, herons;
	s = (a+b+c)/2.0;
	herons = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area: %f\n", herons);
	
}
int main(void){
	double a, b, c;
	printf("Enter the first side: ");
	scanf("%lf", &a);
	printf("Enter the second side: ");
	scanf("%lf", &b);
	printf("Enter the third side: ");
	scanf("%lf", &c);
	area(a, b, c);
	
	system("PAUSE");
	return(0);
}
