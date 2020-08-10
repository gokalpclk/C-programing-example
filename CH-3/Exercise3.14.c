//EXERCISE 3-14  Write a function that recives a positive integer and returns the random numberi simulating a throw of a six-faced die. Main program should input a positive integer, call the function and display the number.
//(Note: That Positive integer passed to the function will be the seed value to be used by the function srand. Then generate the random number by the function rand.)
#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int simulate(int number){
	int die;
	srand(number);
	die = 1+rand()%6;
	return die;
}


int main(void){
	int number, result;
	printf("Enter the positive integer:");
	scanf(" %d", &number);
	result = simulate(number);
	printf("Random number: %d\n",result);
	system("PAUSE");
	return(0);
}
