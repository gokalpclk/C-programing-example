//EXERCISE 2-8  Write a program to compute and display the value of R using the formula
//	1/R=1/R1+1/R2+1/R3
//The value of R1, R2 and R3 should be entered using the scanf procedure.
#include <stdio.h>
#include<stdlib.h>
int main(void){
	int  r1, r2, r3;
	double r;
	printf("Enter R1:");
	scanf(" %d", &r1);
	printf("Enter R2:");
	scanf(" %d", &r2);
	printf("Enter R3:");
	scanf(" %d", &r3);
	r=(r1*r2*r3)/(r2*r3+r1*r3+r2*r1);
	printf("R=%.2f\n",r);
	system("PAUSE");
	return(0);
}

