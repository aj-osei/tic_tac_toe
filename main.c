#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];           // 2d array of the game board
const char PLAYER = 'X';    // PLAYER is set to X
const char COMPUTER = 'O';       // computer is set to O



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

    while(winner == ' ' && checkFreeSpaces() != 0){
        printBoard();

        playerMove();
        winner = checkWinner();
        if(winner != ' ' || checkFreeSpaces() = 0;){
            break;
        }

        computerMove();
        winner = checkWinner();
        if(winner != ' ' || checkFreeSpaces() = 0;){
            break;
        }
    }
    
    return 0;
}

//reset the 2d character array
void resetBoard(){                              // nested for loops in order to clear the board's row and column
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] = ' ';
        }

    }
}  

//used to print 2d charatcer array
void printBoard(){
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");

}

// check if there is any spaces to move
int checkFreeSpaces(){
    int freeSpaces = 9;

    for(int i = 0; i < 3; i++){                 //nested for loop to check if there is any free space available!
        for(int j = 0; j < 3; j++){
            if(board[i][j] != ' '){
                freeSpaces --;

            }

        }

    }
    return freeSpaces;
}

// for when its the player turn to move
void playerMove(){                                                  // this function uses a do-while loop in order to have user continue action until the board is empty
    int x;
    int y;

    do{
   
    printf("Enter row #(1 - 3): ");
    scanf("%d", &x);
    x--;

    printf("Enter column #(1 - 3): ");
    scanf("%d", &y);
    y--;

    if(board[x][y] != ' '){
        printf("Invalid move!\n")

    } else{
        board[x][y] =  PLAYER;
        break;
    }
    } while (board[x][y] != ' ');


} 

// for when it's the computer turn to move
void computerMove(){

    // creates a seed based on current time

    srand(time(0));
    int x;
    int y;

    if(checkFreeSpaces() > 0){
        do{
            x = rand() % 3;
            y = rand() % 3;
        }while(board[x][y] != ' ');

        board[x][y] = COMPUTER;

    } else {
        printWinner(' ');
    }

}  

// used to check who won
char checkWinner(){
    // check rows
    for (int i = 0; i < 3; i++){
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2]){
            return board[i][0];

        }

    }
    // check columns
    for(int i = 0; i < 3; i++){
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i]){
            return board [0][i];

        }

    }
    //check diagonals
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2]){
        return board [0][0];
    }
    // check other diagonal
    if(board[0][2] == board[1][1] && board[0][2] == board[2][0]){
        return board [0][2];
    }

    return ' ';
} 

// used to print the player who won
void printWinner(char winner){
    if (winner == PLAYER){
        printf("YOU HAVE WON!")

    }else if(winner == COMPUTER){
        printf("YOU LOST!")
    } else{
        printf("IT IS A DRAW!")
    }
}     
