#include "ticTacToeProject.h"
#include<iostream>

using namespace std;

void ticTacToeProject::printBoard()
{
    for (int i = 0; i < boardsize; i++)
        for (int j = 0; j < boardsize; j++)
        {
            cout << "\t" << playBoard[i][j] << "\t";
            if (j == 2)
                cout << endl << endl;
        }
}

//void ticTacToeProject::resetBoard()
//{
//}

bool ticTacToeProject::checkLocation(int position)
{
    int counter = 0;
    int countMatch = position;
    
    for (int i = 0; i < boardsize; i++)
        for (int j = 0; j < boardsize; j++)
        {
            counter++;
            if (counter == countMatch)
            {
                if (playBoard[i][j] == 'X' || playBoard[i][j] == 'O')
                    return false;
            }
        }
    return true;
}    


bool ticTacToeProject::checkWinner()
{
    //Determine if X is winning
    if(playBoard[0][0] == 'X' && playBoard[0][1] == 'X' && playBoard[0][2] == 'X')
        return true;
    if(playBoard[1][0] == 'X' && playBoard[1][1] == 'X' && playBoard[1][2] == 'X')
        return true;
    if(playBoard[2][0] == 'X' && playBoard[2][1] == 'X' && playBoard[2][2] == 'X')
        return true;
    if(playBoard[0][0] == 'X' && playBoard[1][0] == 'X' && playBoard[2][0] == 'X')
        return true;
    if(playBoard[0][1] == 'X' && playBoard[1][1] == 'X' && playBoard[2][1] == 'X')
        return true;
    if(playBoard[0][2] == 'X' && playBoard[1][2] == 'X' && playBoard[2][2] == 'X')
        return true;
    if(playBoard[0][0] == 'X' && playBoard[1][1] == 'X' && playBoard[2][2] == 'X')
        return true;
    if(playBoard[2][0] == 'X' && playBoard[1][1] == 'X' && playBoard[0][2] == 'X')
        return true;

    //Determine if X has won
    if(playBoard[0][0] == 'O' && playBoard[0][1] == 'O' && playBoard[0][2] == 'O')
        return true;
    if(playBoard[1][0] == 'O' && playBoard[1][1] == 'O' && playBoard[1][2] == 'O')
        return true;
    if(playBoard[2][0] == 'O' && playBoard[2][1] == 'O' && playBoard[2][2] == 'O')
        return true;
    if(playBoard[0][0] == 'O' && playBoard[1][0] == 'O' && playBoard[2][0] == 'O')
        return true;
    if(playBoard[0][1] == 'O' && playBoard[1][1] == 'O' && playBoard[2][1] == 'O')
        return true;
    if(playBoard[0][2] == 'O' && playBoard[1][2] == 'O' && playBoard[2][2] == 'O')
        return true;
    if(playBoard[0][0] == 'O' && playBoard[1][1] == 'O' && playBoard[2][2] == 'O')
        return true;
    if(playBoard[2][0] == 'O' && playBoard[1][1] == 'O' && playBoard[0][2] == 'O')
        return true;
    
    return false;
}

void ticTacToeProject::setX(int position)
{
    int counter = 0;
    int countMatch = position;

    for (int i = 0; i < boardsize; i++)
        for (int j = 0; j < boardsize; j++)
        {
            counter++;
            if (counter == countMatch)
            playBoard[i][j] = 'X';
        }
}

void ticTacToeProject::setO(int position)
{
    int counter = 0;
    int countMatch = position;

    for (int i = 0; i < boardsize; i++)
        for (int j = 0; j < boardsize; j++)
        {
            counter++;
            if (counter == countMatch)
                playBoard[i][j] = 'O';
        }
}

ticTacToeProject::ticTacToeProject()
{
    
        boardsize = 3; //Defines the board size for 
        gamesPlayed = 0;
    
}
