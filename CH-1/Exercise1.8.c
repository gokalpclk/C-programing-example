//EXERCISE 1-8 Write a program that displays the following output. You should use at least one placeholder for each line.
/* Output is
Atilim University 1996!!!

Year of 2014,

6/2=3.000000
7/2=3.500000

2.5*3=7.500000
4.152*6=24.912000

9.87152/5.69=56.168949 Lost fractions...
*/

#include <stdio.h>
#include<stdlib.h>
int main(void){
	printf("Atilim University %d!!!\n",1996);
	printf("\nYear of %d,\n",2014);
	printf("\n%d/%d=%f", 6, 2, (6.0/2.0));
	printf("\n%d/%d=%f\n", 7, 2, (7.0/2.0));
	printf("\n%f*%d=%f", 2.5, 3, (6.0*2.0));
	printf("\n%f*%d=%f\n", 4.152, 6, (4.152*6.0));
	printf("\n%f/%f=%f ", 9.87152, 5.69, (9.87152/5.69));
	printf("Lost fractions...\n");
	system("PAUSE");
	return(0);
}

