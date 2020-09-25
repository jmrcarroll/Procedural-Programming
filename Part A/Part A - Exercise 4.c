/*
Name: John Carroll
Date: 12/12/18
Purpose: Part A(4) of assignment: String reversal.
*/

#include<stdio.h>
#include<strings.h>

int main(void){
	//variables
	int length, x;
	char UserInput[20];
	
	//request and take input from the user.
	printf("Input something you would like to have reversed.\n");
	gets(UserInput); 
	length = strlen(UserInput);
	for(x=length-1; x>-1; x--){
		printf("%c", UserInput[x]);
	}
	
	
	
	//end
	getchar();
	return 0;
}
