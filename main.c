#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];           // 2d array of the game board
const char PLAYER = 'X';    // PLAYER is set to X
const char COMPUTER = 'O'       // computer is set to O



void resetBoard();          //reset the 2d char array
void printBoard();          //used to print 2d char array
int checkFreeSpaces();      // check if there is any spaces to move
void playerMove();          // for when its the player turn to move
void computerMove();        // for when it's the computer turn to move
char checkWinner();         // used to check who won
void printWinner(char);         // used to print the player who won


int main(){

    char winner = ' ';

    resetBoard();
    return 0;
}

//reset the 2d character array
void resetBoard(){                              // nested for loops in order to clear the board's row and column
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] = ' ;'
        }

    }
}  

//used to print 2d charatcer array
void printBoard(){

}

// check if there is any spaces to move
int checkFreeSpaces(){

}

// for when its the player turn to move
void playerMove(){

} 

// for when it's the computer turn to move
void computerMove(){

}  

// used to check who won
char checkWinner(){

} 

// used to print the player who won
void printWinner(char winner){

}         