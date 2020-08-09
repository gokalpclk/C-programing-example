//EXERCISE 2-5 Complete the following program. The members of the Atýlým University signed a three-year contract where the salary increments are 10, 9 and 7 percentages respectively.
//The program should input the name of the member and his/her current salary and should output the compounded salary for each of the three years. Define salary increment percentages as named constants.

/********************************************************************************
sample execution is:

Enter your name			 :Ali Temiz
Enter your current salary:100
First year salary		 :110.00
Second year salary		 :119.90
Third year salary		 :128.29

********************************************************************************/
/* 
#include <stdio.h>
#include<stdlib.h>
#_____ PER1 0.10
#define _____ 0.09
#define PER3 _____

__________{
	char name[21];
	double salary;
	
	printf("Enter your name: ");
	gets(_____);
	printf("Enter your current salary: ");
	scanf(_____, _____);
	salary = _______________;
	printf("First year salary: %.2f\n", salary);
	salary = salary * PER2;
	printf("Second year salary: %.2f\n", salary);
	salary = salary * _____;
	printf("_____", salary);
	
	
	system("PAUSE");
	return(0);
}
*/

#include <stdio.h>
#include<stdlib.h>
#define PER1 0.10
#define PER2 0.09
#define PER3 0.07

int main(void){
	char name[21];
	double salary;
	
	printf("Enter your name: ");
	gets(name);
	printf("Enter your current salary: ");
	scanf("%lf", &salary);
	salary=salary+salary*PER1;
	printf("First year salary: %.2f\n", salary);
	salary =salary + salary * PER2;
	printf("Second year salary: %.2f\n", salary);
	salary = salary + salary * PER3;
	printf("Third year salary: %.2f\n", salary);
	
	
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
