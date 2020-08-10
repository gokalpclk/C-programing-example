//EXERCISE 3-11  Write a program that interactively reads four integer values (x1, y1, x2, y2) representing the coordinates of the two points in a plane. Calculate the distance between the points using the formula below and print out the result.
//DIST=sqrt((x2-x1)^2+(y2-y1)^2)
//Your program should use a function that accepts the cordinates of the two points and returns the distance between theese points.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double distance(int x1, int y1,int x2, int y2){
	return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
int main(void){
	int x1, y1, x2, y2;
	double dist;
	printf("Enter the x1: ");
	scanf("%d", &x1);
	printf("Enter the y1: ");
	scanf("%d", &y1);
	printf("Enter the x2: ");
	scanf("%d", &x2);
	printf("Enter the y2: ");
	scanf("%d", &y2);
	dist = distance(x1,y1,x2,y2);
	printf("Distance: %.2f\n", dist);
	
	system("PAUSE");
	return(0);
}
