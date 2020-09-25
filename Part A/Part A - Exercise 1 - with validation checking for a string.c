/*
Name: John Carroll
Date: 12/12/18
Purpose: Part A(1) of assignment: Minute to hours convertor.
*/

#include<stdio.h>
#include<string.h>
#include<math.h>

int collectInt();

int main(void){
	//Variables
	int integer, hours, mins;
	
	do{
		//requests input from the user. 
		printf("Use 0 (or less) to exit.\n");
		integer = collectInt();
		
		//Checks if user input is above 0
		if (integer > 0 ){
			//calc hours and minutes
			hours = integer/60; 
			mins = integer%60; 
			printf("%d minutes is: %d hours, %d minutes.\n",integer,hours, mins);  //outputs the results.
		} else{ //if less than 0 it's prints this exit message
			printf("Value is less than 1, exiting program. ");
		}
		
	}while (integer > 0); //if the value is 0 or lessat the end of the loop, the loop will exit. 
	
	//end
	getchar();
	return 0;
}

int collectInt(){
	//variables
	char input[10];
	int check = 0, integer = 0,length, i, charint;
	
	do{
		printf("Input an integer number of minutes you'd like converted into hours.\n");
		gets(input); // gets an input form the user until newline is endere
		length = strlen(input);
//		printf("%d\n", length);//debug
		//loops through and checks if the string is full of "digits" 
		for(i = 0; i<length;i++){
			if (input[i]<48||input[i]>57){
				printf("Integer values not entered\n");//If a non numeric character is entered it forces the loop to go around again.
				check = 1;
				break;
			}else{
				charint = input[i]-'0'; //for converting a char to an int the lowest value must be subtracted from the current character.
				integer = integer + (input[i]-'0')*pow(10,(length-(i+1))); //this creates the full integer value in base10.
				check = 0; 
			}
		}
	}while (check !=0);
	//end function
	return integer;
}

