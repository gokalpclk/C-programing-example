//EXERCISE 3-8  Write a function that receives three real numbers from the main and  returns the average of the numbers. Main program should input the numbers, call the function, and print the average value returned from the function.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double average(double a, double b, double c){
	double average;
	average = (a+b+c)/3;
	return average;
	
	
}
int main(void){
	double a, b, c, result;
	printf("Enter the first number: ");
	scanf("%lf", &a);
	printf("Enter the second number: ");
	scanf("%lf", &b);
	printf("Enter the third number: ");
	scanf("%lf", &c);
	result = average(a, b, c);
	printf("Average: %.2f\n", result);
	
	system("PAUSE");
	return(0);
}

