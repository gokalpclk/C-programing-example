//EXERCISE 2-4 Type in the following program, correct the errors, recompile and run:

/* EX2-4.CPP DOLLAR TO TURKISH LIRA CONVERSION */
/*
#include <stdio.h>
#include<stdlib.h>
#defin conversion_rate 540000.0            <-----

int main(void){
	int dollar;
	double tl;
	printf("ENTER DOLLAR AMOUNT: ");
	scanf(" %d", dollar);                  <------
	tl = conversion_rate * dollar;
	printf("VOW %d DOLLARS MAKE %10.0f  TURKISH LIRAS!\n",dollar, tl);
	
	
	system("PAUSE");
	return(0);
}*/


#include <stdio.h>
#include<stdlib.h>
#define conversion_rate 540000.0

int main(void){
	int dollar;
	double tl;
	printf("ENTER DOLLAR AMOUNT: ");
	scanf(" %d", &dollar);
	tl = conversion_rate * dollar;
	printf("VOW %d DOLLARS MAKE %10.0f TURKISH LIRAS!\n",dollar, tl);
	
	
	system("PAUSE");
	return(0);
}

