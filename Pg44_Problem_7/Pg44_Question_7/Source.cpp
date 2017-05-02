/*******************************************
* Pg44_Question_7 *
* Maxwell Stephens *
* 12:30 TTh *
* Pg44_Question_7, 2/2/17 *
*******************************************/
/*
This program is to calculate the number of calories burned per minute for various activities with the variable of bodywieght taken into account.
*/






#include <iostream>	

using namespace std;

int main()
{
	//declare variables
	double weight, METS, Calories;
	
	//ask for weight in lbs
	cout << "Enter subject's weight in pounds" << endl;
	//take input for weight
	cin >> weight;
	//ask for number of mets and give sample mets from the book
	cout << "Enter the number of METS for an activity" << endl;
	cout << "Sample METS:" << endl;
	cout << "Running: 10 METS" << endl;
	cout << "Basketball: 8 METS" << endl;
	cout << "Sleeping: 1 METS" << endl;
	//actually take in the mets
	cin >> METS;
	//equation to determine calories burned/minute w/ conversion for kg taken into account
	Calories = 0.0175 * METS * (weight / 2.2);
	//tell the user a summary of their inputs and then give them the actual amount of calories burned/minute
	cout << "For the choosen activity of " << METS << " METS, and a subject weight of " << endl;
	cout << weight << " lbs, the amount of calories burned/minute is estimated to be " << Calories << "." << endl;



	//standard ending for program
	system("pause");
	return 0;
}


/*

SAMPLE OUTPUT:

Enter subject's weight in pounds
200
Enter the number of METS for an activity
Sample METS:
Running: 10 METS
Basketball: 8 METS
Sleeping: 1 METS
8
For the choosen activity of 8 METS, and a subject weight of
200 lbs, the amount of calories burned/minute is estimated to be 12.7273.
Press any key to continue . . .






Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/