//EXERCISE 3-1  Heron's formula for computing the area of a triangle with sides a, b and c is
// sqrt(s*(s-a)*(s-b)*(s-c))
//where s=(a+b+c)/2
//Write a function named area that reads the sides of a triangle, computes and displays its area. Main program should only call the function area

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void area(){
	double s, a, b, c, herons;
	printf("Enter the first side: ");
	scanf("%lf", &a);
	printf("Enter the second side: ");
	scanf("%lf", &b);
	printf("Enter the third side: ");
	scanf("%lf", &c);
	s = (a+b+c)/2.0;
	herons = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area: %f\n", herons);
	
}
int main(void){
	area();
	system("PAUSE");
	return(0);
}

