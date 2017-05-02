
/*******************************************
* Chap2_Problem_3.3 *
* Maxwell Stephens *
* 12:30 TTh *
* Chap2_Problem_3.3, 5/2/17 *
*******************************************/
/*

/*
Enhance your program from the previous excercise (project 2) by having it also print out the
estimated price of the item in one and in two years from the time of the calculation.
The increase in cost over one year is estimated as the inflation rate times the price
at the start of the year. Define a second function to determine the estimated cost of an item in a specified number of years,
given the current price of the item and the inflation rate as arguments.
*/


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


double estimatedCost(double, double, double);
double inflation(double, double);
int main() {
	string input;
	bool repeat = true;
	double itemPast, itemFuture;

	while (repeat == true)
	{
		cout << "Enter the past price of the item \n";
		cin >> itemPast;
		cout << "Enter the current price for the item \n";
		cin >> itemFuture;
		inflation(itemPast, itemFuture);
		cout << "The inflation rate is ";
		cout << inflation(itemPast, itemFuture) << "%\n";
		cout << "In one year the price will be\n";
		cout << estimatedCost(itemFuture, inflation(itemPast, itemFuture), 1) << "$ \n";
		cout << "In two years the price will be\n";
		cout << estimatedCost(itemFuture, inflation(itemPast, itemFuture), 2) << "$ \n";
		cout << "Do another? Y/N \n";
		cin >> input;
		if (input != "Y" && input != "y") {
			repeat = false;
		}
	}






	system("pause");
	return 0;
}

double inflation(double itemPast, double itemFuture) {
	double inflation;
	double rounded;
	inflation = itemFuture / itemPast * 100;
	rounded = floor(inflation * 100 + 0.5) / 100;
	return rounded;
}
double estimatedCost(double itemFuture, double rate, double years) {
	return (itemFuture * rate / 100) * years;
}
/*

SAMPLE OUTPUT:








Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/