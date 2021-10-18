/*EXERCISE 4-11  Write a program that will input the lenghts of three sides of a triangle and output whether the triangle is scalene, isosceles or equilateral


*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int s1, s2, s3;
	printf("Enter 1st side: ");
	scanf("%d",&s1);
	printf("Enter 2nd side: ");
	scanf("%d",&s2);
	printf("Enter 3rd side: ");
	scanf("%d",&s3);
	
	if(s1==s2 && s1==s3){
		printf("equilateral");
	}
	else if(s1==s2 || s1==s3 || s2==s3){
		printf("isosceles");
	}
	else{
		printf("scalene");
	}
		
	system("PAUSE");
	return (0);
	
}
