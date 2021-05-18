//Consider the exercise 3-15. Write a function named purple that inputs two arguments, of type double and integer values from the user. The purple function outputs 'g' if the multiplication of these arguments are greater than 50.0, or outputs 's'
//if the multiplication is smaller than 50.0, or outputs 'e' if the multiplication is equal to 50.0. Main program should only call the purple function.
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

void purple(){
	double realNum;
	int intNum;
	printf("Enter a real number: ");
	scanf(" %lf", &realNum);
	printf("Enter an integer: ");
	scanf(" %d", &intNum);
	if(realNum*intNum>50.0){
		printf("The resultant character: %c\n", 'g');
	}
	else if(realNum*intNum<50.0){
		printf("The resultant character: %c\n", 's');
	}
	else if(realNum*intNum==50.0){
		printf("The resultant character: %c\n", 'e');
	}
}


int main(void){
	purple();
	system("PAUSE");
	return(0);
}
