/*
Name John Carroll
Date 11/01/2019
 Purpose Times table application
*/

#include<stdio.h>
#include<strings.h>
#include<math.h>

//Initialise functions
void timeTables(int start, int end);
int collectInt();

int main(void){
	//Variables
	int start, end;
	
	//Get user inputs
	printf("Input the value for the start: ");
	start = collectInt();
	printf("Input the value for the end: ");
	end = collectInt();
	
	//Chekc if values are in range.
	if(end>start && end<=500 && start>0){
		timeTables(start, end); //correct input order and BOTH within range
	} else if (start>end&& start<=500 && end>0){
		printf("Maximum value is larger than minimum.\nCorrecting error.\n\n");
		timeTables(end, start);	//Incorrect Input order but BOTH within range.
	}else{
		//at least one value is outside of the range. 
		printf("At least one of the inputted values is outside of the range.");
		
	}
	
	//end
	getchar();
	return 0;
}

void timeTables(start, end){
	//variables
	int i,j;
	
	for(i=start;i<=end;i++){
		for(j=1;j<=12;j++){
			printf("%4d |",i*j); //Calculate and display result. 
		}
		printf("\n"); //print new line after each loop of j.
	}
	//end function
}

int collectInt(){
	//variables
	char input[10];
	int check = 0, integer = 0,length, i, charint;
	
	do{
		gets(input); // gets an input form the user until newline is endere
		length = strlen(input);
//		printf("%d\n", length);//debug
		//loops through and checks if the string is full of "digits" 
		for(i = 0; i<length;i++){
			if (input[i]<48||input[i]>57){
				printf("Positive integer values not entered\n");//If a non numeric character is entered it forces the loop to go around again.
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
