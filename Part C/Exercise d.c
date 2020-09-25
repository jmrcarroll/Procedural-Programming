/*
Name John Carroll
Date 11/01/2019
 Purpose Times table application
*/

#include<stdio.h>
#include<strings.h>
#include<math.h>

int main(void){
	//Vars
	int i,j; //i and j are variables for loop control 
	
	//initiate loop 1
	for(i=1;i<=12;i++){
		//initiate loop 2
		for(j=1;j<=12;j++){
			printf("%4d |",i*j); //Calcualte and output product 
		}
		printf("\n"); //Prints a new line after an instance of loop 2 has finished. 
	}
	
	//end
	getchar();
	return 0;
}
