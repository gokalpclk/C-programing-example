//EXERCISE 4-2  Type in the following program. Compile and run.


/*EX4-2.cpp
	NESTED IF STRUCTURE*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	char ch1, ch2, ch3;
	printf("Enter 3 character values into ch1, ch2, and ch3:");
	scanf("%c%c%c", &ch1, &ch2, &ch3);
	if(ch1==ch2)
		if(ch2==ch3)
			printf("all initials are same!\n");
		else
			printf("first two initials are the same!\n");
	else if(ch2==ch3)
		printf("last two initials are the same!\n");
	else if(ch1==ch3)
		printf("first and last initials are the same!\n");
	else
		printf("all initials are different!\n");
		
	system("PAUSE");
	return (0);
	
}
