/*******************************************
* Chap2_Problem_2.6 *
* Maxwell Stephens *
* 12:30 TTh *
* Chap2_Problem_2.6, 2/14/17 *
*******************************************/
/*
/*
A program  that calculates and prints the total grade for n assignments
as a percentage.
*/
#include <iostream>
using namespace std;

int main()
{
	//declare vars
	int n, i;
	double pointsPossible, pointsRecieved, totalBank = 0, resultBank = 0, overallPercentage;
	//ask for assignment number
	cout << "How many assignments are there total?\n";
	//get n
	cin >> n;
	//for loop to loop as many times as n value is
	for (i = 1; i < n + 1; i++)
	{
		//taking in points possible
		cout << "What are the total points possible for assignment " << i << "?\n";
		//get points possible
		cin >> pointsPossible;
		//taking in points recieved
		cout << "How many points were recieved for assignment " << i << "?\n";
		//get points recieved
		cin >> pointsRecieved;
		//add to result bank pointsRecieved
		resultBank += pointsRecieved;
		//add to total bank pointsPossible
		totalBank += pointsPossible;
	}
	//calculate overallPercentage
	overallPercentage = (resultBank / totalBank) * 100;
	//output points recieved out of total points possible and give overallPercentage
	cout << "Your total amount of points is " << resultBank << " out of " << totalBank << " and your final percentage is " << overallPercentage << "%\n";



	system("pause");
	return 0;
}


/*

SAMPLE OUTPUT:








Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/