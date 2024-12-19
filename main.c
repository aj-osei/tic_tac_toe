#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

void resetBoard();          //reset the 2d character array
void printBoard();          //used to print 2d charatcer array
int checkFreeSpaces();      // check if there is any spaces to move
void playerMove();          // for when its the player turn to move
void computerMove();        // for when it's the computer turn to move
char checkWinner();         // used to check who won
void printWinner(char);         // used to print the player who won


int main(){
    return 0;
}