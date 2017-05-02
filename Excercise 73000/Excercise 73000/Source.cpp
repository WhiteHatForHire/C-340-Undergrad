/*******************************************
* Programming excercise 73000 *
* Maxwell Stephens *
* 12:30 TTh *
* 73000, 2/17/17 *
*******************************************/
/*
This program calculates the inflation for pencils in the future using a for loop to calculate compound inflation.
*/


#include <iostream>
using namespace std;

int main()
{
	//declare vars
	double currentPencils, yearsFuture, inflationPercent, inflationDecimal;
	//heading
	cout << "Pencil Inflation Calculator 2.0 \nBy: Maxwell Stephens" << endl;
	//request pencil current price
	cout << "Please enter the price of pencils currently" << endl;
	//get current price
	cin >> currentPencils;
	//ask for how many years in the future to calculate for
	cout << "Please enter the number of years in the future for\nwhich you would like to know the inflated price" << endl;
	//get years
	cin >> yearsFuture;
	//request inflation rate as a percent
	cout << "Please enter the inflation rate as a percent (like 12.5)" << endl;
	//get rate as percent
	cin >> inflationPercent;
	//convert percent to decimal
	inflationDecimal = inflationPercent / 100;
	//for loop to calculate compound inflation
	for (int i = 0; i < yearsFuture; i++) //for loop iteration logic (loops until it is the correct amount of times through)
	{
		currentPencils += (currentPencils * inflationDecimal); //adds the inflation to original price, loops again
	}
	//displays output of what the inflated price will be
	cout << "In " << yearsFuture << " years, the price of the pencils will be $" << currentPencils << endl;

	system("pause");
	return 0;
}



/*

SAMPLE OUTPUT:






















Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/