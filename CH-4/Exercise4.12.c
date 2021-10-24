/*EXERCISE 4-12  Write a program to compute the charge for parking. The parking charge of a vehicle is as follows:

Cars:
_____
Less than 2 hours					$2.50 for each hours
2 to 4 hours						$4.50+$2.50 for each hour over 2 
Greater than 4 hours				$8.00+$2.00 for each hour over 4

Turcks:
_______
Less than 5 hours					$5.50 for each hours
Greater than or equal to 5 hours	$25.00+$4.50 for eac hour over 5

The program should input the type of vehicle (C/c for cars, T/t for trucks) and the parking time of the vehicle in minute
The the program should compute and output the charge for parking. Here the time in minutes should be converted to hours. For example, 90 minutes is 90/60=1.5 hours. Also, display an error message for incorrect vehicle type

Enter the type of the vehicle: C
Enter the number of minutes for parking: 150
Total charge: 5.63$

*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	char typeOfCar;
	int totalMinute;
	double charge=0.0;
	printf("Enter th type of the vehicle: ");
	scanf("%c",&typeOfCar);
	printf("Enter the number of minutes for parking: ");
	scanf("%d", &totalMinute);
	if(typeOfCar=='c'||typeOfCar=='C'){
		if(totalMinute<120){
			charge=totalMinute*2.5/60;
		}
		else if(totalMinute>=120&&totalMinute<=240){
			totalMinute=totalMinute-120;
			charge=4.5+(totalMinute*2.25/60);
		}
		else if(totalMinute>240){
			totalMinute=totalMinute-240;
			charge=8.0+(totalMinute*2/60);
		}
		printf("Total charge: %.2fl$", charge);
	}
	else if(typeOfCar=='t'||typeOfCar=='T'){
		if(totalMinute<300){
			charge=totalMinute*5.5/60;
		}
		else if(totalMinute>=300){
			totalMinute=totalMinute-300;
			charge=25.0+(totalMinute*4.5/60);
		}
		printf("Total charge: %.2lf$", charge);
	}
	else{
		printf("Error!!! Invalid type of car");
	}
	
	printf("\n");

	
		
	system("PAUSE");
	return (0);
	
}
