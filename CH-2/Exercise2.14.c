//EXERCISE 2-14  Write a program that prompts the user for his/her name, year of birth and current and then prints the user's age.
#include <stdio.h>
#include<stdlib.h>
int main(void){
	int birthDate, year;
	char name[30];
	printf("What is your name? :");
	gets(name);
	printf("Year of birth: ");
	scanf("%d", &birthDate);
	printf("Current year: ");
	scanf("%d", &year);
	printf("%s, you are now %d years old.\n",name, year-birthDate);
	system("PAUSE");
	return(0);
}

