//EXERCISE 2-3 Type in and run the following program for different input values. In each case examine the output.

/******************************************************************************************
Prints integers, floating- point values in a variety of ways.
******************************************************************************************/

#include <stdio.h>
#include<stdlib.h>

int main(void){
	int num_a;
	double num_b;
	
	printf("enter an integer: ");
	scanf("%d", &num_a);
	printf(" 5 10 15 20 25 30 35 40\n");
	printf("-+-+-+-+-+-+-+-+\n");
	printf("%10d\n\n", num_a);
	
	printf("enter a real: ");
	scanf("%lf", &num_b);
	printf(" 5 10 15 20 25 30 35 40\n");
	printf("-+-+-+-+-+-+-+-+\n");
	printf("%10.4f\n\n", num_b);
	
	printf("enter a real: ");
	scanf("%lf", &num_b);
	printf(" 5 10 15 20 25 30 35 40\n");
	printf("-+-+-+-+-+-+-+-+\n");
	printf("%15.8e\n\n", num_b);
	
	
	system("PAUSE");
	return(0);
}

