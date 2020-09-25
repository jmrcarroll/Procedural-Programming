/*
Name: John Carroll
Date: 12/12/18
Purpose: Part A(3) of assignment: Value Square and Cube display
*/

#include<stdio.h>

int main(void){
	//variables
	int input[2], lb,ub, x, square, cube; //lb and ub stand for lower and upper bounds. x is for the loop
	//take inputs for lower and upper bounds
	printf("Please input an integer value:\n");
	scanf("%d", &input[0]);
	printf("Please input an integer value:\n");
	scanf("%d", &input[1]);
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


