/*
Name: John Carroll
Date: 12/12/18
Purpose: Part A(6) of assignment: Dice roller. 
*/

#include<stdio.h>
#include<time.h>
#define SIZE1 13
#define SIZE2 300

int main(void){
	//variables
	int DiceRolls[SIZE1]={0} , x,y, total; // x and y the variable used for for loops in this program.
	
	//reseed RNG
	srand(time(NULL));
	
	for(x= 0; x<SIZE2; x++){
		// roll 2 6 sided dice. 
		total = (rand()%6+1)+(rand()%6+1);
		DiceRolls[total]++;
	}
	//total = 0;
	for(x = 1; x<SIZE1;x++){
		printf("%d\t%d\t", x, DiceRolls[x]);
	//	total = total + DiceRolls[x]; // Only here for debug
		for(y=0; y<DiceRolls[x];y++){
			printf("*"); // prints a star for each time element x was rolled. 
		}
		printf("\n");
	}
	//printf("%d", total);
	
	//end 
	getchar();
	return 0;
}
