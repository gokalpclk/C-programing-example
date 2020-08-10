//EXERCISE 3-3  Consiider the exercide 2-6. Complete the following program where the function out_salaries accepts the current salary and outputs the compounded salary for each of the three years.
/*
#include <stdio.h>
#include <stdlib.h>
#define PER1 0.10
#define PER2 0.09
#define PER3 0.07

void out_salaries(double salary){
	salary = ____________;
	printf("Firs year salary: %.2f\n salary", salary);
	salary=salary+salary*PER2;
	printf("Second year salary: %.2f\n", salary);
	salary=salary+salary*___;
	printf("_______________________________", salary);
}
int main(void){
	char name[21];
	double current_salary;
	
	printf("Enter your name: ")
	gets(_____);
	printf("Enter your current salary: ")
	scanf(_____,_____);
	_________________;
	system("PAUSE");
	return(0);
}
*/

#include <stdio.h>
#include <stdlib.h>
#define PER1 0.10
#define PER2 0.09
#define PER3 0.07

void out_salaries(double salary){
	salary = salary+salary*PER1;
	printf("Firs year salary: %.2f\n salary", salary);
	salary=salary+salary*PER2;
	printf("Second year salary: %.2f\n", salary);
	salary=salary+salary*PER3;
	printf("Third year salary: %.2f\n", salary);
}
int main(void){
	char name[21];
	double current_salary;
	
	printf("Enter your name: ");
	gets(name);
	printf("Enter your current salary: ");
	scanf("%lf", &current_salary);
	out_salaries(current_salary);
	
	system("PAUSE");
	return(0);
}
