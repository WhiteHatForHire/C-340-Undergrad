/*******************************************
* Chap3_Problem_3.9 *
* Maxwell Stephens *
* 12:30 TTh *
* Chap3_Problem_3.9, 5/2/17 *
*******************************************/
/*


/*
Simulated game of craps
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
	//for loop to play the game
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
		
	}//end game loop
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
