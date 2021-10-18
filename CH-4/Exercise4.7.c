/*EXERCISE 4-7  Write a program that inputs a number between 0 and 15. The program  shold display the number itself if it is between 0 and 9.
It should write 'A' if the number 10; 'B' if the number is 11; 'C' if the number is 12; 'D' if the number is 13; 'E' if the number is 14; 'F'if the number is 15.
Also it should write an appropriate mesage for input number that is out of given range 0 and 15.

Sample run:
Enter An integer (0-15): 12
it is C

In your program only use simple if structure

*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num;
	printf("Enter an integer: ");
	scanf("%d",&num);
	if(num>=0&&num<=9)
		printf("it is %d",num);
	else if(num==10)
		printf("it is A");
	else if(num==11)
		printf("it is B");
	else if(num==12)
		printf("it is C");
	else if(num==13)
		printf("it is D");
	else if(num==14)
		printf("it is E");
	else if(num==15)
		printf("it is F");
	else
		printf("invalid input");
		
	system("PAUSE");
	return (0);
	
}
