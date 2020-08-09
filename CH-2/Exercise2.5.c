//EXERCISE 2-5 Complete the following C program

/********************************************************************************
purpose: Computes the average of the three grades of a student.
input: The name of the student and three grades(all integer)
output: The name of the student and the arithmetic aveerage of the grades.

********************************************************************************/
/* 
#include _________
#include<stdlib.h>

int main(void){
	char name[31];
	int ____________;
	double _________;
	
	printf("Enter student's name: ");
	gets(_____);
	printf("Enter the first grade: ");
	scanf("_____", &grade1);
	
	printf("Enter the second grade: ");
	scanf("_____", &grade2);
	printf("Enter the third grade: ");
	scanf("_____", &grade3);
	avarage = (__________)/3.0;
	printf("%s, your average is: %f\n",__________);
	
	
	system("PAUSE");
	return(0);
}
*/

#include <stdio.h>
#include<stdlib.h>

int main(void){
	char name[31];
	int grade1, grade2, grade3;
	double average;
	
	printf("Enter student's name: ");
	gets(name);
	printf("Enter the first grade: ");
	scanf("%d", &grade1);
	
	printf("Enter the second grade: ");
	scanf("%d", &grade2);
	printf("Enter the third grade: ");
	scanf("%d", &grade3);
	average = (grade1 + grade2 + grade3)/3.0;
	printf("%s, your average is: %f\n", name, average);
	
	
	system("PAUSE");
	return(0);
}




/********************************************************************************
2. Compile and execute.
Sample execution of this program is:

Enter student's name	: Ahmet Kara
Enter the first grade	: 50
Enter the scond grade	: 60
Enter the third grade	: 60
Ahmet Kara, your average is: 58.333333

3. The statement

system("PAUSE");

is used to halt execution. To understand its function, change this statement to a line comment and execute again.


4. Consider the statement

average = (________)/3.0;

Define the value 3.0 as a named constat by using define directive.

Solution:
--------------------------------------------------------------
#include <stdio.h>
#include<stdlib.h>
#define average 3.0

int main(void){
	char name[31];
	int grade1, grade2, grade3;
	double _average
	
	printf("Enter student's name: ");
	gets(name);
	printf("Enter the first grade: ");
	scanf("%d", &grade1);
	
	printf("Enter the second grade: ");
	scanf("%d", &grade2);
	printf("Enter the third grade: ");
	scanf("%d", &grade3);
	_average = (grade1 + grade2 + grade3)/average;
	printf("%s, your average is: %f\n", name, average);
	
	
	system("PAUSE");
	return(0);
}
--------------------------------------------------------------

****************************************************************************** */
