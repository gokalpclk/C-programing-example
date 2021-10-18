/*EXERCISE 4-9  Rewrite the program in exercise 4-7 by using switch statement

*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num;
	printf("Enter an integer: ");
	scanf("%d",&num);
	switch(num){
		case num<=9:
		case num>=0:
			printf("it is %d",num);
			break;
		case num==10:
			printf("it is A");
			break;
		case num==11:
			printf("it is B");
			break;
		case num==12:
			printf("it is C");
			break;
		case num==13:
			printf("it is D");
			break;
		case num==14:
			printf("it is E");
			break;
		case num==15:
			printf("it is F");
			break;
		default:
			printf("invalid input");
			
	}
		
	system("PAUSE");
	return (0);
	
}
