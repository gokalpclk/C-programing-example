//EXERCISE 2-2  Modify Ex2-1 and run the program
#include <stdio.h>
#include<stdlib.h>

#define pi 3.14159226
int main(void){
	double radius, area;
	
	printf("ENTER RADIUS:");
	scanf(" %lf", &radius);
	area = pi * radius * radius;
	printf("THE RADIUS: %4.2f AND AREA OF CIRCLE: %8.5f\n", radius, area);
	
	system("PAUSE");
	return(0);
}

