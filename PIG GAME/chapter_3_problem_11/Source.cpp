/*******************************************
* Chap3_Problem_3.11 *
* Maxwell Stephens *
* 12:30 TTh *
* Chap3_Problem_3.11, 5/2/17 *
*******************************************/
/*

/*
Simulated game of pig
*/
#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;
//function prototypes

int roll();
int main() {
	srand(time(NULL));
	bool mainLoop = true;
	bool playerTurn = true;
	bool compTurn = false;
	int dice;
	string answer;
	int humanTotalScore = 0, tempScore = 0, compTotalScore = 0;
	cout << setw(40) << "Welcome to Max's PIG game!\n";
	cout << "******************************************************\n";
	cout << "Try to get over 100 points before your opponent\nIf you roll a '1', you lose your turn and the points banked\n";
	cout << "You have the option to roll again if you roll a '2' through '6'\nOR you can hold, thus banking your points so far.\nIf you don't bank you don't keep the points!!!\n\n\n";
	while (mainLoop == true)
	{
		if (compTotalScore >= 100)
		{
			cout << "\n\nComputer wins\n";
			mainLoop = false;
			break;
		}
		if (humanTotalScore >= 100)
		{
			cout << "\n\nYou win!!!\n";
			mainLoop = false;
			break;
		}
		
		if (compTotalScore > humanTotalScore)
		{
			cout << "\n\nComputer has the lead!!\n" << compTotalScore << " to " << humanTotalScore << endl << endl;
		}
		if (compTotalScore < humanTotalScore)
		{
			cout << "\n\nYou have the lead!!\n" << humanTotalScore << " to " << compTotalScore << endl << endl;
		}
		if (compTotalScore == humanTotalScore)
		{
			cout << "\n\nThe match is tied!!\n" << "Score is " << humanTotalScore << "'s" << endl << endl;
		}


		tempScore = 0;
		while (playerTurn == true)
		{
			dice = roll();
			cout << setw(25) << "You rolled a " << dice << endl;

			if (dice == 1) {
				tempScore = 0;
				cout << "***ROLLED A ONE*** BANKABLE SCORE LOST\n\tCOMPUTER'S TURN\n";
				playerTurn = false;
				compTurn = true;
				system("pause");
			}
			else if (dice == 2 || 3 || 4 || 5 || 6)
			{
				tempScore += dice;
				cout << "Roll agian (enter 'r') or Hold (enter 'h')?\n";
				cout << "\tBankable score = " << tempScore << endl;
				cin >> answer;
				if (answer == "r")
				{
				}
				else if (answer == "h")
				{
					humanTotalScore += tempScore;
					cout << "Points banked = " << tempScore << endl <<
						"Total points = " << humanTotalScore << endl;
					playerTurn = false;
					compTurn = true;
				}
				else if (answer != "h" || "r")
				{
					cout << "Invalid entry, auto-choice of 'hold' chosen\n\n";
					humanTotalScore += tempScore;
					cout << "Points banked = " << tempScore << endl <<
						"Total points = " << humanTotalScore << endl;
					playerTurn = false;
					compTurn = true;
				}
				
				
			}
		}
		/////////////////////////////////////////////////////////////////////////
		//Computer turn logic
		/////////////////////////////////////////////////////////////////////////
		tempScore = 0;
		while (compTurn == true)
		{
			dice = roll();
			cout << setw(25) << "Computer rolled a " << dice << endl;
			if (dice == 1) {
				tempScore = 0;
				playerTurn = true;
				compTurn = false;
				
			}
			else if (dice == 2 || 3 || 4 || 5 || 6)
			{
				tempScore += dice;
				if (tempScore >= 20)
				{
					compTotalScore += tempScore;
					cout << "Computer banked = " << tempScore << " points" << endl <<
						"Computer total points = " << compTotalScore << endl;
					playerTurn = true;
					compTurn = false;
					
				}
				else 
				{
				}
			}
		}
	}
	cout << endl;
	cout << "*************************************************" << endl;
	cout << setw(20) << "GAME OVER\n";
	cout << "*************************************************" << endl;
	system("pause");
	return 0;
}

int roll()
{
	return rand() % 6 + 1;
}
/*

SAMPLE OUTPUT:









Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/
