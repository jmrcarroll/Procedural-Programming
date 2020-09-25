	/*
Name John Carroll
Date 11/01/2019
 Purpose Times table application
*/

#include<stdio.h>
#include<math.h>
#include<strings.h>

//Initialise functions
int collectInt();

int main(void){
	//Variables
	int subject, i;
	do{
		//request input form user
		printf("Input a subject value for its multiples between 1 and 12.\nValues accepted must be between 1 and 500.\n");
		subject = collectInt();
		//Check if values are inside or outside of range.
		if(subject>=1 && subject<=500){
			for(i = 1; i<13; i++){
				//calculate and display product
				printf("%d * %d = %d\n", i, subject, i*subject);
			}
		}else if (subject == 0){
			//displays exit message 
			printf("Exitting program");
		} else {
			//display error message
			printf("Values entered are outside of the range");
		}
	}while(subject != 0); //exit program if user inputs 0.
	//end
	getchar();
	return 0;
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
