/*
Name: John Carroll
Date: 12/12/18
Purpose: Part A(3) of assignment: Value Square and Cube display
*/

#include<stdio.h>
#include<strings.h>
#include<math.h>

int collectInt();

int main(void){
	//variables
	int input[2], lb,ub, x, square, cube; //lb and ub stand for lower and upper bounds. x is for the loop
	//take inputs for lower and upper bounds
	input[0] = collectInt();
	input[1] = collectInt();
	//figure out which input is larger and set the upper and lower bounds.
	if(input[0]>input[1]){
		lb = input[1];
		ub = input[0];
	}	else{
		lb = input[0];
		ub = input[1];
	}
	
	printf("Value  Square  Cube\n");
	for(x = lb; x<(ub+1); x++){
		// calc square and cube
		cube = x*x*x;
		square = x*x;
		// display results
		printf("%5d%8d%6d\n",x, square, cube);
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
		printf("Please input an integer value:\n");
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

