//EXERCISE 2-11  Write a program to conver a time given in hours, minutes and seconds to seconds.
#include <stdio.h>
#include<stdlib.h>
int main(void){
	int hours, minutes, seconds, totalSeconds;
	printf("Enter hours:");
	scanf(" %d", &hours);
	printf("Enter minutes:");
	scanf(" %d", &minutes);
	printf("Enter seconds:");
	scanf(" %d", &seconds);
	totalSeconds=hours*3600+minutes*60+seconds;
	printf("it is %d seconds.\n", totalSeconds);
	system("PAUSE");
	return(0);
}

