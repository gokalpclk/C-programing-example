//EXERCISE 1-2 Exercise 1.1 change all capitals into lower case characters
#include <stdio.h>
#include<stdlib.h> //Required library for system ("PAUSE") FUNCTÝON
int main(void){
	int x, y;
	printf("enter two numbers: ");
	scanf("%d%d", &x, &y);
	printf("the sum of is %d\n", x+y);
	printf("the difference is %d\n", x-y);
	printf("the product is %d\n", x*y);
	printf("the quotient is  %d\n", x/y);
	printf("the modulus is  %d\n", x%y);
	system("PAUSE"); //Pauses the output screen
	return(0);
}

