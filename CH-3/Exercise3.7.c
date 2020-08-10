//EXERCISE 3-7  Write a function that determines and returns the lenght of the hypotenuse of a right-angled triangle when the other two sides are passed to this function. Main program should input the lenghs of the two sides, call the function, and print the hypotenuse value returned from the function.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double hypotenuse(double a, double b){
	double hypotenuse;
	hypotenuse = sqrt((pow(a,2)+pow(b,2)));
	return hypotenuse;
	
	
}
int main(void){
	double a, b, result;
	printf("Enter the first side: ");
	scanf("%lf", &a);
	printf("Enter the second side: ");
	scanf("%lf", &b);
	result = hypotenuse(a, b);
	printf("Hypotenuse: %f\n", result);
	
	system("PAUSE");
	return(0);
}
