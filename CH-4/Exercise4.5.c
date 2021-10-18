//EXERCISE 4-5  Write a program which inputs the side of a square, than a character. If the character is 'P', output the perimeter, if it is 'A', output the area, otherwise output an error message

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
	
	
	if(c=='p'||c=='P')
			printf("Perimeter: %.2lf", side*4);
	else if(c=='a'||c=='A')
			printf("Area: %2.lf",pow(side,2));
	else
			printf("invalid option");
	
	
	printf("\n");
	system("PAUSE");
	return (0);
	
}
