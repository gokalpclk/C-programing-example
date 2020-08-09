//EXERCISE 2-12		Write a program that inputs three integer numbers and outputs then in reverse order.
//Enter an integer: 150093
//Number in reverse order: 9360150
#include <stdio.h>
#include<stdlib.h>
int main(void){
	int number, reversedNumber = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    printf("Reversed number = %d", reversedNumber);
	system("PAUSE");
	return(0);
}

