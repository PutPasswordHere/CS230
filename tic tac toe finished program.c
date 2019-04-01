#include<stdio.h>
char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };/*global array*/
int monitor;
int counter = 0;

void displayGrid()
{
	 printf(" %c | %c |%c \n", square[1], square[2], square[3]);// to show the numbers for player 1 and 2
	 
	 printf(" %c | %c |%c \n", square[4], square[5], square[6]);
	 
	 printf(" %c | %c |%c \n", square[7], square[8], square[9]);

}


int check(char color)
{
	int status = 0;
	int col, row;
	
	
	for (row = 0; row < 3; row++)
	for (col = 0; col < 3; col++)
	{
		if (square[1] == square[2] && square[2] == square[3])// these are all the ways player 1 or 2 can win tic tac toe
		
		return 1;
	
	 	else if (square[4] == square[5] && square[5] == square[6])
	 	return 1;
	 
	    else if (square[3] == square[5] && square[5] == square[7])
	    return 1;
	    
	    else if (square[3] == square[6] && square[6] == square[9])
	    return 1;
	        
	    else if (square[1] == square[5] && square[5] == square[9])
	    return 1;
	        
	    else if (square[2] == square[5] && square[5] == square[8])
	    return 1;
	        
	    else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	        
	    else if (square[4] == square[5] && square[5] == square[6])
	    return 1;
	        
	    else if (square[7] == square[8] && square[8] == square[9])
	    return 1;
		else
		
		
		if (counter < 2) 
		counter = 0;
	}
	if (counter >= 2)
	
	status = 1;
}


int main()
{
	char player1 = 'x';// declaring the players and what they need to play
	char player2 = 'o';
	int choice;
	
	
	displayGrid();
	do
{
		printf("Player 1: Enter the number (1 through 9): ");
		scanf("%d", &choice);
	

        if (choice == 1 && square[1] == '1')
            square[1] = player1; /* this makes sure each one of the players choices goes to the number in the player chose*/
            
        else if (choice == 2 && square[2] == '2')
            square[2] = player1;
            
        else if (choice == 3 && square[3] == '3')
            square[3] = player1;
            
        else if (choice == 4 && square[4] == '4')
            square[4] = player1;
            
        else if (choice == 5 && square[5] == '5')
            square[5] = player1;
            
        else if (choice == 6 && square[6] == '6')
            square[6] = player1;
            
        else if (choice == 7 && square[7] == '7')
            square[7] = player1;
            
        else if (choice == 8 && square[8] == '8')
            square[8] = player1;
            
        else if (choice == 9 && square[9] == '9')
            square[9] = player1;
            
        else
        {
            printf("Invalid move\n "); //if the player enters a number that has already been played or enters a number out of the numbers range.

        }
        
		displayGrid(); // show the grid here
		monitor = check(player1);// see if any of the 8 ways to win are met
		if (monitor != 1); 
		else printf("player 1 wins\n"); 
		if (monitor !=1);
		else return 1;// if one of the 8 ways are met player 1 wins
		system ("PAUSE");
	{
	
		printf("Player 2: Enter the number (1 through 9): ");
		scanf("%d", &choice);
		if (choice == 1 && square[1] == '1')
            square[1] = player2;
            
        else if (choice == 2 && square[2] == '2')
            square[2] = player2;
            
        else if (choice == 3 && square[3] == '3')
            square[3] = player2;
            
        else if (choice == 4 && square[4] == '4')
            square[4] = player2;
            
        else if (choice == 5 && square[5] == '5')
            square[5] = player2;
            
        else if (choice == 6 && square[6] == '6')
            square[6] = player2;
            
        else if (choice == 7 && square[7] == '7')
            square[7] = player2;
            
        else if (choice == 8 && square[8] == '8')
            square[8] = player2;
            
        else if (choice == 9 && square[9] == '9')
            square[9] = player2;
            
        else
        {
            printf("Invalid move\n "); 

        }
		displayGrid();
		monitor = check(player2);
	}
}
while (monitor != 1);
printf("player 2 wins\n");
system("PAUSE");
}

