/*
Name: John Carroll
Date: 12/12/18
Purpose: Part A(7) of assignment: multi-dimentional array.
*/

#include<stdio.h>
#include<time.h>
#define SIZE1 3
#define SIZE2 5

int main(void){
	// reseed Number generator
	srand(time(NULL));
	
	//variables
	int array[SIZE1][SIZE2], r,c; // r and c are to cycle throw the loops.
	
	printf("%s %5s %5s %5s\n", "Row", "Column","Value", "Double");
	for(r=0;r<SIZE1;r++){
		for(c=0;c<SIZE2;c++){
			array[r][c]= rand()%101; //Generated a random number between 0 and 100. 
			printf("%3d %5d %6d ",r, c, array[r][c]); //displays row and column of array and displays value in that element
			array[r][c] = array[r][c]*2;// doubles and stores the new value. 
			printf("%6d\n", array[r][c]);//prints new value. 
		}
	}
	
	//end
	getchar();
	return 0;
}

