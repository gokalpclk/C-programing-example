//EXERCISE 3-10  Write a program that inputs the flight time in seconds and sends it to a function that computes and outputs the hours, minutes and seconds of the flight time
/* Sample Run
		Enter the flight time in seconds:4215
		The flight time is 1 hour 10 minutes and 15 seconds.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void flightTime(int flightSeconds){
	int hour, minutes, seconds;
	hour=flightSeconds/3600;
	flightSeconds=flightSeconds%3600;
	minutes = flightSeconds/60;
	seconds = flightSeconds%60;
	printf("The flight time is %d hour %d minutes and %d seconds.\n", hour, minutes, seconds);
}
int main(void){
	int flightSeconds;
	printf("Enter the flight time in seconds: ");
	scanf("%d", &flightSeconds);
	flightTime(flightSeconds);
	
	system("PAUSE");
	return(0);
}
