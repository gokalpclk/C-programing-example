//EXERCISE 3-12  Write a program to read a real number x and send this number to a function named FRACT. This function should output the whole part and the fractional part of the number in question. For example, if x=456.98, the WholePart=456.00 adn FracPart=0.98. Test your program different x values. 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void FRACT(double value){
	double whole,frac;
	frac = modf(value, &whole);
	printf("WholePart: %f\nFracPart: %f\n", whole, frac);
}
int main(void){
    double value;
	printf("Enter the value: ");
	scanf("%lf", &value);
	FRACT(value);

	system("PAUSE");
    return (0);
}
