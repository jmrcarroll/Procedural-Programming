/*
Name: John Carroll
Date: 12/12/18
Purpose: Part A(5) of assignment: random number printed 8 to a line 
*/

#include<stdio.h> 
#include<time.h>

int main(void){
	//reseed RNG
	srand(time(NULL));
	//variable 
	int nums[20], x;

	/*
	0/8 = 0 
	.: 0% 8 = 0 
	.: would return true in an if statement
	*/
		
	for(x = 1; x<21; x++){
		//generate random number
		nums[x-1]= rand()%101;
		printf("%5d", nums[x-1]); //print random number
		if(x%8 == 0 ){
			printf("\n"); // if the current element is an multiple of 8 print a new line
		}
	}
	//end
	getchar();
	return 0;
}
