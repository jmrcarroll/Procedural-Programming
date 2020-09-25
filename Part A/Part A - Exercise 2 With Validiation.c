/*
Name: John Carroll
Date: 12/12/18
Purpose: Part A(2) of assignment: N to N+10 in increments of 1.
*/

#include<stdio.h>
#include<strings.h>
#include<math.h>
#define LOOPLENGTH 11 

int collectInt();

int main(void){
	//Variables
	int input,x;
	//collects user Input
	input = collectInt();
	
	for (x = 0; x <LOOPLENGTH; x++){
		printf(" %3d ",input+x); //prints the input + the current elincrement of the loop.
	}	
	
	//end 
	getchar();
	return 0;

}

int collectInt(){
	//variables
	char input[10];
	int check = 0, integer = 0,length, i, charint;
	
	do{
		printf("Please enter the value of which you would like the sequence to start from.\n(Note only valid integer values are accepted)\n");
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
