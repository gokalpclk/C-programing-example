/*EXERCISE 4-10  Write a program that will add, subtract, multiply and divide  numbers. Input will consist a character ('+' forr addition,  '-' for subtraction, '*' for multiplication and '/' for division) and two numbers.

Your program should:
	a.Check for division by zero.
	b.Check for proper operation symbol.
	c.Print the result

*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num1, num2;
	char operation;
	printf("Enter an operational symol(+,-,*,/): ");
	scanf("%c",&operation);
	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);
	if(operation=='/'&&num2==0)
		printf("Error!!! Division by zero");
	else{
		switch(operation){
			case '+':
				printf("%d+%d is %d", num1,num2,num1+num2);
				break;
			case '-':
				printf("%d-%d is %d", num1,num2,num1-num2);
				break;
			case '*':
				printf("%d*%d is %d", num1,num2,num1*num2);
				break;
			case '/':
				printf("%d/%d is %d", num1,num2,num1/num2);
				break;
			default:
				printf("Invalid operation");
				
		}
	}
		
	system("PAUSE");
	return (0);
	
}
