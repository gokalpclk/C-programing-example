//EXERCISE 4-3  Type in the program below, compile and run


/*EX4-3.cpp
	SWITCH STATEMENT*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	char symbol;
	printf("Enter a character value into symbol: ");
	scanf("%c",&symbol);
	
	switch(symbol){
		case 'y':
		case 'Y':
			printf("Yes!\n");
			break;
		case 'n':
		case'N':
			printf("No!\n");
			break;
		default:
			printf("Maybe!\n");
	}
	
	system("PAUSE");
	return (0);
	
}
