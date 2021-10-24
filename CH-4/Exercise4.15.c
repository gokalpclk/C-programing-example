/*EXERCISE 4-15 Write a program that prompts user to enter an integer and checks whether it is an even or odd integer. The output a suitable message as shownin sample runs below:

Sample run-1:
Enter an integer: 16
16 is an EVEN integer

Sample run-2:
Enter an integer: 295
295 is an ODD integer
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num;
	printf("Enter an integer: ");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("%d is EVEN integer.",num);
	}
	else{
		printf("%d is ODD integer.",num);
	}
	printf("\n");

	
		
	system("PAUSE");
	return (0);
	
}
