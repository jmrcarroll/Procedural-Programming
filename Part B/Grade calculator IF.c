/*
Name John Carroll
date 13/12/2018
purpose Grade calculator using if
*/

#include<stdio.h>
#include<strings.h>
#include<math.h>

int collectInt();

int main(void){
	//variables
	int exam,assignment, avg;
	
	do{
	//collects results from user
	printf("Enter a value for the exam result: ");
	exam = collectInt();
	printf("Enter a value for the assignment result: ");
	assignment = collectInt();
	//checks if in range
	if (exam>100 || exam<0 || assignment>100 || assignment<0){
		printf("One or more values outside of range, please try again.");
	}
	}while(exam>100 || exam<0 || assignment>100 || assignment<0); //loops until the user inputs results that are in range. 
	
	avg = (exam + assignment)/2; //calcs average

	//finds the range the avarage is in
	if(avg<40){
		printf("\nThese marks:%3d & %3d. achieve grade: F\n", exam, assignment);
	} else if (avg<50){
		printf("\nThese marks:%3d & %3d. achieve grade: D\n", exam, assignment);
	} else if (avg<60){
		printf("\nThese marks:%3d & %3d. achieve grade: C\n", exam, assignment);
	} else if(avg<70){
		printf("\nThese marks:%3d & %3d. achieve grade: B\n", exam, assignment);
	} else{
		printf("\nThese marks:%3d & %3d. achieve grade: A\n", exam, assignment);
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
