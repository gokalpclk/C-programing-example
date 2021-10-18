//EXERCISE 4-1  Type in the program below. Compile and execute to understand use of if statement


/*EX4-1.cpp
	IF() ELSE STATEMENT*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num1, num2, num3;
	printf("Enter 3 integer values into num1, num2, and num3:");
	scanf("%d%d%d", &num1, &num2, &num3);
	if(num1<0){
		printf("%dx%dx%d=%d\n",num1,num2,num3,num1*num2*num3);
	}
	else{
		printf("%d+%d+%d=%d\n",num1,num2,num3,num1+num2+num3);
	}
	system("PAUSE");
	return (0);
	
}
