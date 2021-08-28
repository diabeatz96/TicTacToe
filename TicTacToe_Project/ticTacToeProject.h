#pragma once

class ticTacToeProject
{
public:

    void printBoard();
    void resetBoard();
    
    bool checkLocation(int);
    bool checkWinner();

    void setX(int);
    void setO(int);

    ticTacToeProject();


private:
    char playBoard[3][3]= {{'1', '2' ,'3'},
                             {'4', '5', '6'},
                             {'7', '8', '9'} };
    int boardsize = 3; //Defines the board size for 
    int gamesPlayed = 0;
};
