//EXERCISE 2-9  Write a pseudo-code and then a C program to swap the values of S and R. Display the values of S and R before and after the swap operation. Enter the values of S (6) and R (-8) from the keyboard.
#include <stdio.h>
#include<stdlib.h>
int main(void){
	int S, R, cache;
	printf("Enter the value of S: ");
	scanf("%d", &S);
	printf("Enter the value of R: ");
	scanf("%d", &R);
	printf("Value of S=%d\n Value of R=%d\n",S,R);
	printf("Swap procces is starting\n");
	cache=R;
	R=S;
	S=cache;
	printf("Swap procces is ending\n");
	printf("Value of S=%d\n Value of R=%d\n",S,R);
	system("PAUSE");
	return(0);
}
/*Pseudo-code (We can describe Pseudo Code as the design of an algorithm with some symbols and words without being dependent on any language.)
	-Start
	-Read the first number (S)
	-Read the second number (R)
	-cache=R
	-R=S
	-S=cache
	-End
*/

