/*EXERCISE 4-13 Edirne Water & Gas Supply Company bills its resident for water, and sanitation every mount. The water charge is calculated as follows:

Amount(cubic meter)				Rate(per cubic meter)
Less than	25					145.000TL
25-100							2.500.000TL + 120.000 for each cubic meter over 25
More than 100					3.000.000TL + 140.000  for each cubic meter over 100

The santiation charge is 2.000.000 TL per mount. Write a program to read the amount of consumption in cubic meters; and the display a statemnt with appropriate charges and messages.


*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int water;
	double charge=0.0;
	printf("Enter theamount of water: ");
	scanf("%d",&water);
		if(water<25){
			charge=water*145;
		}
		else if(water>=25&&water<=100){
			water=water-25;
			charge=2500+(water*120);
		}
		else if(water>100){
			water=water-100;
			charge=3000+(water*140);
		}
		printf("Santitation charge per mounth:		2000TL\n");
		printf("%d cubic meters transaction:		%.2lfTL\n",water, charge);
		printf("______________________________________________\n");
		printf("Total					%.2lfTL",charge+2000);

	
	printf("\n");

	
		
	system("PAUSE");
	return (0);
	
}
