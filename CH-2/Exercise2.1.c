//EXERCISE 2-1  Type in and run the following program
#include <stdio.h>
#include<stdlib.h>
#define pi 3.14159226
int main(void){
	double radius, area;
	printf("ENTER RADIUS:");
	scanf(" %lf", &radius);
	area = pi * radius * radius;
	printf("THE RADIUS: %f AND AREA OF CIRCLE: %f\n", radius, area);
	system("PAUSE");
	return(0);
}

