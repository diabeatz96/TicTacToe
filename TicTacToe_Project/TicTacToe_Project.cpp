#include<iostream>
#include<string>
#include"ticTacToeProject.h"

using namespace std;

int main()
{
	string player1 = "";
	string player2 = "";
	int playerAnswer;
	ticTacToeProject newBoard;

	
	cout << "Hi! Are you ready to play a game of tic-tac-toe?" << endl;
	cout << "Player one enter your name: ";
	cin >> player1;
	cout << "Player two enter your name: ";
	cin >> player2;
	cout << "Welcome " << player1 <<  " and " << player2 << " to the tic toe game! " << endl;
	
	cout << "RULES:\n 1.) Each player will get a turn starting with player 1.\n 2.) To select where to \"Mark\" you will type in number 1-9 (this will be clear on the board)\n 3.) Whoever can get three in a row without being blocked by another player wins! " ;
	cout << endl << endl << endl;
	
	
	while(newBoard.checkWinner() != true) {
		
		cout << "CURRENT PLAYER : " << player1 << endl << endl;
		newBoard.printBoard();
		cout << "Please type a number 1-9. Those will be the only valid inputs: " ;
		cin >> playerAnswer;
		if (newBoard.checkLocation(playerAnswer) == false || (playerAnswer < 1 || playerAnswer > 9))
		{
			while((playerAnswer < 1 || playerAnswer > 9) || newBoard.checkLocation(playerAnswer) == false) {
				cout << "Please type in a correct number or an unused position position: ";
				cin >> playerAnswer;
				if (newBoard.checkLocation(playerAnswer) == false)
					playerAnswer = 0;
			}
		}
		
		newBoard.setX(playerAnswer);
		
		if (newBoard.checkWinner() == true)
			break;
		
		cout << "CURRENT PLAYER : " << player2 << endl << endl;
		newBoard.printBoard();
		cout << "Please type a number 1-9. Those will be the only valid inputs: ";
		cin >> playerAnswer;
		if (newBoard.checkLocation(playerAnswer) == false || (playerAnswer < 1 || playerAnswer > 9))
		{
			while(playerAnswer < 1 || playerAnswer > 9 || newBoard.checkLocation(playerAnswer) == false) {
				cout << "Please type in a correct number or an unused position position: ";
				cin >> playerAnswer;
				if (newBoard.checkLocation(playerAnswer) == false)
					playerAnswer = 0;
			}
		}
		
		newBoard.setO(playerAnswer);
		newBoard.checkWinner();
		
		
	}
	
	cout << endl << "Thanks for playing the best version of tic-tac-toe in existence!" << endl;
	cout << "Here is your current board to view the winner: " << endl;
	newBoard.printBoard();

	
}