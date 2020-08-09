//EXERCISE 1-1 Type in the following program
#include <stdio.h>
#include<stdlib.h> //Required library for system ("PAUSE") FUNCTÝON
int main(void){
	int x, y;
	printf("ENTER TWO NUMBERS: ");
	scanf("%d%d", &x, &y);
	printf("THE THE SUM IS %d\n", x+y);
	printf("THE DIFFERENCE IS %d\n", x-y);
	printf("THE PRODUCT IS %d\n", x*y);
	printf("THE QUOTIENT IS %d\n", x/y);
	printf("THE MODULUS IS %d\n", x%y);
	system("PAUSE"); //Pauses the output screen
	return(0);
}
/*
3. Compiling and executing a program
	*From the main menu, select Execute+CompileRun to Compile and Run your program.
	*Or alternatively, press F9.
	*Correct syntax errors (if any) and recompile.
*/

/*
4. Saving program files
	*Use File+SaveAs from the main menu.
	*Type in MYFIRST (or any other filename.cpp extension will be automatically appended).
*/

/*
5. Leaving Dev-C++
	*Activate File pull-down menu.
	*Chose Exit (or type letter x).
*/
