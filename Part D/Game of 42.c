/*
Name: John Carroll
Date: 17/1/19
Purpose: Game of 42
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

//initialise functions
void UserPlay(void);
void CompPlay(void);

//globabl Variables.	I feel sick typing this because I know it is unsafe.
int score, compScore;

int main(void){
	//vars
	char input;
	
	do{
		//reset variables
		input = 0;
		score = 0;
		compScore = 0;
		

		printf("|||||||| GAME OF 42 ||||||||\n");

		do{
			//Get valid input fom user.
			printf("Would you like to play a game? [Y/N] ");
			input = getch();
			input=toupper(input);
			printf("%c\n", input);
		}while(input != 'Y' && input != 'N'); // Loops until the player presses Y or N regardless of case. 
		
		if(input == 'Y'){	
			UserPlay();	//jumps to function containing the game.	
		//Calculate winner if neither player went bust.	
			if(score<=42 && compScore <= 42){
				if(score>compScore){
					printf("The player wins with a score of %d to the computer's %d\n",score, compScore);
				}else if (score == compScore){
					printf("It is a tiee with a score of %d. \n",score);
				} else{
					printf("The player loses with a score of %d to the computer's %d\n",score, compScore);
				}	
			}		
			//Retrun to main screen when user presses to continue
			system("pause");
			system("cls"); 
			
		} else{
			
			printf("Closing application\n"); //informs user that the applicaiton is closing
			
		}
	}while(input != 'N');
	
	//end
	system("Pause");
	return 0;
	
}
void UserPlay(void){
	
	//reseed RNG
	srand(time(NULL));
	
	//Vars
	int random = 0;
	char input2;
	

	printf("The user's score is currently %d\n", score);
	
	do{
		//generate Random Number between 1 and 21
		random = (rand()%21)+1;
		score = score + random;
		
		//Check if player is bust 
		if(score >42){
			printf("PLAYER IS BUST\nScore was: %d. You rolled: %d.\nThis would lead to a score of %d.\n", score-random, random, score);
		}else{
			printf("Your score is: %d. you scored %d in the last round.\nWould you like to play again?\n", score, random);
			input2 = toupper(getch());
			printf("%c\n",input2);
		}
	}while(input2 == 'Y'&& score <=42);
	
	if (score<42){
		//Runs the computer plays sections of code
		CompPlay();
	}	
}
void CompPlay(void){
	
	//variables
	int compRandom = 0;
	
	printf("\n||Computer's turn||'\n");
	
	do{
				//generate Random Number between 1 and 21
		compRandom = rand()%21+1;
		compScore = compScore + compRandom;
		printf("The Computer rolled: %d. The Computer's Score is: %d.\n", compRandom, compScore); //Display random and computer's new score
		sleep(1);
		
	}while(compScore<=32);
		
	if(compScore>42){	
		printf("COMPUTER IS BUST\nScore was: %d. it rolled: %d.\nThis would lead to a score of %d.\n", compScore-compRandom, compRandom, compScore);
	}
}
