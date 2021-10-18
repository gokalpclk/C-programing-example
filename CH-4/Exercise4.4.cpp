//EXERCISE 4-4 The store manager has asked you to wrire a computer  program to produce a bill for a customer. The store has a limited number of items and these are as follows

/*
Item		Item Code		Unit Price
______________________________________
Table		t/T				$25
Chair		c/C				$18

A discount is allowed for large oreders. This discount depends on the customer@s bill and it is as follows:

Bill		Discount rate
_________________________
$0-$499		0%
$500-$999	1.5%
$1000-$1499	2%
over $1500	3$

The program shold input
	*the item code,
	*the number of item sold
The program should compute and output the customer's bill. Also, display an arror message for an incorrect item code

Complate the following C program


Sample execution is:
Enter the code of the item: T
Enter the number of tables sold: 50
The bill: $11225.00



#include <stdio.h>
#include <stdlib.h>

int main(void){
	char code;
	int number_item;
	double bill=0.0;
	
	printf("Enter the code of the item: ");
	
	scanf(__,___);
	switch(___){
		case ___:
		case ___:
			printf(___________________________________);
			scanf("%d", &number_item);
			bill=________________;
			break;
		case ___:
		case ___:
			printf("Enter the number of chair sold: ");
			scanf("%d", &number_item);
			bill=number_item*18.0;
			break;
		default:
			printf(______________________);
	}
	
	if(bill>1500)
		bill__________;
	else if(bill>1000)
		bill=_________;
	else if(bill>500)
		bill=__________;
	
	
	printf("_________________________);
	
	system("PAUSE");
	return (0);
	
}
*/


#include <stdio.h>
#include <stdlib.h>

int main(void){
	char code;
	int number_item;
	double bill=0.0;
	
	printf("Enter the code of the item: ");
	
	scanf("%c",&code);
	switch(code){
		case 't':
		case 'T':
			printf("Enter the number of tables sold: ");
			scanf("%d", &number_item);
			bill=number_item*25.0;
			break;
		case 'c':
		case 'C':
			printf("Enter the number of chair sold: ");
			scanf("%d", &number_item);
			bill=number_item*18.0;
			break;
		default:
			printf("Invalid code of item");
	}
	
	if(bill>1500)
		bill=bill*0.97;
	else if(bill>1000)
		bill=bill*0.98;
	else if(bill>500)
		bill=bill*0.985;
	
	
	printf("The bill $%.2lf:\n", bill);
	
	system("PAUSE");
	return (0);
	
}
