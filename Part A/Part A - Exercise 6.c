/*
Name: John Carroll
Date: 12/12/18
Purpose: Part A(6) of assignment: Dice roller.
NOTE: This is not the most memory efficent version possible, this was the first solution that came to my head. look at Exercise 6a for a more memory effective solution. 
*/

#include<stdio.h>
#define SIZE1 300
#define SIZE2 12

int main(void){
	//variables
	int DiceRolls[SIZE1], x,y; // x and y the variable used for for loops in this program.
	
	//reseed RNG
	srand(time(NULL));
	
	for(x= 0; x<SIZE1; x++){
		// roll 2 6 sided dice. 
		DiceRolls[x] = (rand()%6+1)	+ (rand()%6+1);
	}
	for(x = 1; x<SIZE2+1;x++){
		printf("%d\t", x);
		for(y=0; y<SIZE1; y++){
			if(DiceRolls[y] == x){
				printf("*");
			}
		}
		printf("\n");
	}
	
	//end 
	getchar();
	return 0;
}
