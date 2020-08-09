//EXERCISE 2-10  Write a C program that will read in a Fahrenheit temperature (F) as a decimal number and display its equivalent Celsius temperature (C) using the formula
// C=(F-32)/1.8
//Test your program for F=32, and F=105 values
#include <stdio.h>
#include<stdlib.h>
int main(void){
	int f;
	double C;
	printf("Enter the temperature in Fahrenheit: ");
	scanf("%d", &f);
	C=(f-32)/1.8;
	printf("%d Fahrenheit equal to %.2f Celsius ", f, C);
	system("PAUSE");
	return(0);
}

