/*
Name: John Carroll
Date: 12/12/18
Purpose: Part A(2) of assignment: N to N+10 in increments of 1.
*/

#include<stdio.h>
#define LOOPLENGTH 11 

int main(void){
	//Variables
	int input,x;
	//collects user Input
	printf("Input an integer: \n");
	scanf("%d",&input);
	
	for (x = 0; x <LOOPLENGTH; x++){
		printf("%3d",input+x); //prints the input + the current elincrement of the loop.
	}	
	
	//end 
	getchar();
	return 0;

}
