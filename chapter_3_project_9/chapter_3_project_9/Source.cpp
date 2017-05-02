/*******************************************
* Chap3_Problem_3.9 *
* Maxwell Stephens *
* 12:30 TTh *
* Chap3_Problem_3.9, 5/2/17 *
*******************************************/
/*






/*
In the game of craps, a "pass line" bet proceeds as follows. The first roll of the two, six-sided dice in a craps round is called the "come out roll". The bet
immediately wins when the come out roll is 7 or 11, and loses when the come out roll is 2, 3, or 12. If 4, 5, 6, 8, 9, or 10 is rolled on the come out roll
 that number becomes "the point". The player keeps rolling the dice until either 7 or the point is rolled.
 If the point is rolled first, then the player wins the bet. If the player rolls a 7 first, then the player loses.
 Write a program that plays craps using those rules so that is simulates a game. Instead of the wager the program should calculate
 whether the player would win or lose. Create a a function that simulates rolling the two dice and returns the sum. Add a loop so that the program plays 10,000 games. 
 Add counters that count how many times the player wins and how many times the player loses. At the end of 10,000 gmaes compute the probability of winning as wins / (wins + losses), and 
 output this value. Over the long run who wins more, you or the house?
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	//declare vars
	int rollA, rollB, sum;
	int point;
	double wins=0, losses=0;
	int gameCount;
	//establish random through time
	srand(time(0));
	for (int i = 0; i < 10000; i++)
	{
		//first roll
		rollA = rand() % 6 + 1;
		rollB = rand() % 6 + 1;
		sum = rollA + rollB;
		if (sum == 7 || sum == 11) {
			wins++;
			//cout << "Win \n";
		}
		else if (sum == 2 || sum == 3 || sum == 12) {
			losses++;
			//cout << "Loss \n";
		}
		else if (sum == 4 || sum == 5 || sum == 6 || sum == 8 || sum == 9 || sum == 10)
		{
			point = sum;
			bool loop = true;
			while (loop == true)
			{
				rollA = rand() % 6 + 1;
				rollB = rand() % 6 + 1;
				sum = rollA + rollB;
				if (sum == point)
				{
					wins++;
					//cout << "Point win\n";
					loop = false;
				}
				else if (sum == 7)
				{
					losses++;
					//cout << "Point loss\n";
					loop = false;

				}
			}
		}
		
	}
	cout << "Wins = " << wins << endl;
	cout << "Losses = " << losses << endl;
	cout << "Win probability: " << (wins / (wins + losses)) * 100 << "%\n";

	

	system("pause");
	return 0;
}
/*

SAMPLE OUTPUT:









Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/
