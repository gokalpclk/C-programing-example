//EXERCISE 2-13  Write a program to compute the cost for carpetin a room. Input should consist od the room lenght, room width and carpet price per square meter. The installation cost per square meter is 7.5 dolars. Define 7.5 dolars/m^2.
//Define 7.5 dolars/m^2 as a named constant. The output should be the total cost for carpeting room.
/*Sample run
Enter the room lenght:2.0
Enter the room width:4.0
Enter the carpet price/square meter: 25.0
Total cost is 260.00$
*/
#include <stdio.h>
#include<stdlib.h>
#define installation 7.5
int main(void){
	double lenght, width, price, totalPrice;
	printf("Enter the room lenght:");
	scanf(" %lf", &lenght);
	printf("Enter the room width:");
	scanf(" %lf", &width);
	printf("Enter the carpet price/square meter:");
	scanf(" %lf", &price);
	totalPrice=(width*lenght)*installation+(width*lenght)*price;
	printf("Total cost is %.2f$\n", totalPrice);
	system("PAUSE");
	return(0);
}

