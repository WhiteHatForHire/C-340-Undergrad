/*******************************************
* Chap2_Problem_3.2 *
* Maxwell Stephens *
* 12:30 TTh *
* Chap2_Problem_3.2, 5/2/17 *
*******************************************/
/*
A program to gauge the rate of inflation for the past year. The program asks for the price of an item
(such as a hot dog) both one year ago and today. It estimates the inflation rate as the difference in price
diveded by the year ago price. The program allows the user to repeat this calculation as often as the user wishes.
The inflation rate is be a value of type double giving the rate as a percentage, for example 5.3 for 5.3%.

*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



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

/*

SAMPLE OUTPUT:








Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/