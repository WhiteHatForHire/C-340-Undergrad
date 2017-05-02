/*******************************************
* Chap2_Problem_2.1 *
* Maxwell Stephens *
* 12:30 TTh *
* Chap2_Problem_2.1, 2/14/17 *
*******************************************/
/*
This program to estimates the future cost of an item based on the current inflation rate and
the current cost of the item. 
*/






#include <iostream>	

using namespace std;

int main()
{
	//declare vars
	double originalCost, futureCost, inflationRate, inflationPercent, newTotal;
	int years;

	//ask for current cost of item
	cout << "What is the current cost for the item?" << endl;
	//get current cost
	cin >> originalCost;
	//ask for inflation rate as percent
	cout << "What is the inflation rate as a percent?" << endl;
	//get inflation percent
	cin >> inflationPercent;
	//convert inflation percent to inflation rate
	inflationRate = inflationPercent / 100;
	//ask for how many years to calculate the inflation for in the future
	cout << "How many years in the future would you like to know the future value of the item?" << endl;
	//take in years
	cin >> years;
	

	//loop to compute the estimated cost based on the compounded inflation rate

	while (years > 0)
	{
		originalCost = (originalCost * inflationRate) + originalCost;
		years--;
	}
	cout << "The adjusted compound inflation price is $" << originalCost << endl;

	system("pause");
	return 0;

}


/*

SAMPLE OUTPUT:

What is the current cost for the item?
150000
What is the inflation rate as a percent?
2
How many years in the future would you like to know the future value of the item?
20
The adjusted compound inflation price is $222892
Press any key to continue . . .



Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/