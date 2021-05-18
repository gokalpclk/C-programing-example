//Write a function which is named as purple that receives two arguments, of type double and integer values from the main function. The purple function returns 'g' if the multiplication of these arguments are greater than 50.0, or return 's'
//if the multiplication is smaller than 50.0, or returns 'e' if the multiplication is equal to 50.0. Main program should input the values, call the purple function, and print the value returned from the function
/*
Sample run-1:
Enter a real number: 3.5
Enter an integer: 10
The resultant character: s

Sample run-2:
Enter a real number: 11.22
Enter an integer: 6
The resultant character: g

Sample run-3:
Enter a real number: 10.0
Enter an integer: 5
The resultant character: e

*/
#include <stdio.h>
#include<stdlib.h>
#include <math.h>

char purple(double realNum, int intNum){
	if(realNum*intNum>50.0){
		return 'g';		
	}
	else if(realNum*intNum<50.0){
		return 's';
	}
	else if(realNum*intNum==50.0){
		return 'e';
	}
}


int main(void){
	double realNum;
	int intNum;
	printf("Enter a real number: ");
	scanf(" %lf", &realNum);
	printf("Enter an integer: ");
	scanf(" %d", &intNum);
	printf("The resultant character: %c\n", purple(realNum, intNum));
	system("PAUSE");
	return(0);
}
