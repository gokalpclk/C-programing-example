//EXERCISE 1-5 Write a program that prints the number 1 to 4 on the same line. Write the program using the following methods:
//(a) Using one printf statement with no place holders.
//(b) Using one printf statement with four place holders.
//(c) Using four printf statements.
#include <stdio.h>
#include<stdlib.h> //Required library for system ("PAUSE") FUNCTÝON
int main(void){
	//a
	printf("1 2 3 4");
	
	//space
	printf("\n");
	
	//b
	printf("%d %d %d %d", 1, 2, 3, 4);
	
	//space
	printf("\n");
	
	//c
	printf("1 ");
	printf("2 ");
	printf("3 ");
	printf("4");
}

