//EXERCISE 3-13  Rewrite the exercise 2-13 so that the cots for carpeting a room should be computed in a function. This function should accpt the room lenght, the room width, and carpet price per square meter. Then it should return the total cost for carpeting a room.

#include <stdio.h>
#include<stdlib.h>
#define installation 7.5
double calculate(double lenght,double width,double price){
	return (width*lenght)*installation+(width*lenght)*price;
}
int main(void){
	double lenght, width, price, totalPrice;
	printf("Enter the room lenght:");
	scanf(" %lf", &lenght);
	printf("Enter the room width:");
	scanf(" %lf", &width);
	printf("Enter the carpet price/square meter:");
	scanf(" %lf", &price);
	printf("Total cost is %.2f$\n", calculate(lenght, width, price));
	system("PAUSE");
	return(0);
}
