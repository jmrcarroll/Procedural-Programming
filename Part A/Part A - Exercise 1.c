/*
Name: John Carroll
Date: 12/12/18
Purpose: Part A(1) of assignment: Minute to hours convertor.
*/

#include<stdio.h>

int main(void){
	//Variables
	int input, hours, mins;
	
	do{
		//requests input from the user. 
		printf("Input an integer number of minutes you'd like converted into hours. use 0 (or less) to exit.\n");
		scanf("%d",&input);
		
		//Checks if user input is above 0
		if (input > 0 ){
			//calc hours and minutes
			hours = input/60; 
			mins = input%60; 
			printf("%d minutes is: %d hours, %d minutes.",input,hours, mins);  //outputs the results.
		} else{ //if less than 0 it's prints this exit message
			printf("Value is less than 1, exiting program. ");
		}
		
	}while (input <= 0); //if the value is 0 or lessat the end of the loop, the loop will exit. 
	
	//end
	getchar();
	return 0;
}
