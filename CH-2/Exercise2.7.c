//EXERCISE 2-7 Write a program that inputs the radius of a circle, and outputs its diameter and circumference.
#include <stdio.h>
#include<stdlib.h>
#define pi 3.14159226
int main(void){
	int radius;
	double diameter, circumference;
	printf("Input the radius: ");
	scanf("%d", &radius);
	diameter=2*radius;
	printf("Diameter=%.1f\n", diameter);
	circumference=2*pi*radius;
	printf("Circumference=%.1f\n", circumference);
	system("PAUSE");
	return(0);
}

