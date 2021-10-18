//EXERCISE 4-6  Rewrite a program in exercise 4-5 by using switch statement.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	double side;
	char c, dummy;
	
	printf("Enter the side lenght: ");
	scanf("%lf",&side);
	scanf("%c",&dummy);
	printf("Perimeter(p) || Area(A)): ");
	scanf("%c",&c);
	
	
	switch(c){
		case 'p':
		case 'P':
			printf("Perimeter: %.2lf", side*4);
			break;
		case 'a':
		case 'A':
			printf("Area: %2.lf",pow(side,2));
			break;
		default:
			printf("invalid option");
	}
	
	printf("\n");
	system("PAUSE");
	return (0);
	
}
