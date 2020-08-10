//EXERCISE 3-9  Write a function that accepts a 3-digit integer and returns the sum of its digits. Main prgram should input the value of integer, call the function, and finally print the sum returned by the function.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sumdigit(int number){
	int sum=0;
	while(number!=0){
		sum+=number%10;
		number=number/10;
	}
	return sum;
}
int main(void){
	int number, result;
	printf("Enter the 3 digits number: ");
	scanf("%d", &number);
	result = sumdigit(number);
	printf("Sum of digits: %d\n", result);
	
	system("PAUSE");
	return(0);
}
