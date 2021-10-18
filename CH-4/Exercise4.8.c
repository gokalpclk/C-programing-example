/*EXERCISE 4-8  Rewrite the program in exercise 4-7 by using nested if structure

*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num;
	printf("Enter an integer: ");
	scanf("%d",&num);
	if(num>=0){
		if(num<=9)
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
		else if(num>15)
			printf("invalid input");
			
	}
	else
		printf("invalid input");
		
	system("PAUSE");
	return (0);
	
}
