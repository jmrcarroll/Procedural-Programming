/*
Name: John Carroll
Date: 12/12/18
Purpose: Part A(8) of assignment: Functions: Sum array
*/

#include<stdio.h>
#include<time.h>
#define SIZE 10
int sumArray(int data[], int n);
int main(void){
	//reseed RNG
	srand(time(NULL));
	//variables
	int array[SIZE], x; 
	
	//initialise array and fill with random numbers
	for(x=0;x<SIZE;x++){
		array[x] = rand()%101;
	}

	//display result. 
	printf("The total of the array is: %d\n", sumArray(array, 0));
	printf("The values in this array are:\n");
	for(x=0;x<SIZE;x++){
		printf("%3d\n",array[x]); 
	}
	//end
	getchar();
	return 0;
}

int sumArray(int data[], int n){
	//variable
	int total=0;
//	printf("\nIf\n"); //debug
	for(n=0; n<SIZE; n++){
		total = total + data[n];//calc total
	}
	//end function
	return total;
}
