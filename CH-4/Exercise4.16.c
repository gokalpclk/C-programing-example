/*EXERCISE 4-16 Rewrite the program in exercide 4-15 by using switch statement


*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num;
	printf("Enter an integer: ");
	scanf("%d",&num);
	
	switch(num%2){
	case 0:
		printf("%d is EVEN integer.",num);
		break;
	case 1:
		printf("%d is ODD integer.",num);
		break;	printf("%d is ODD integer.",num);
	}
	printf("\n");

	
		
	system("PAUSE");
	return (0);
	
}
