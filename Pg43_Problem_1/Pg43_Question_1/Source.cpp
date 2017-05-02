/*******************************************
* Pg43_Question_1 *
* Maxwell Stephens *
* 12:30 TTh *
* Pg43_Question_1, 2/2/17 *
*******************************************/
/*
This program is a Metric-English Units Conversion program that takes a weight of a package in ounces
and outputs it in metric tons. It also tells the user the number of boxes of that particular
cereal needed to yeild one ton.
*/






#include <iostream>	

using namespace std;

int main()
{

	//declare variables
	double weightOunces, weightTons, numberOfBoxes;
	

	//request input of package weight
	cout << "Enter package weight in ounces" << endl;
	//take in weight in ounces and print out the value to check
	cin >> weightOunces;
	cout << "You entered " << weightOunces << " ounces." << endl;

	//convert ounces to tons, assigned to weight tons, give output feedback describing conversion

	weightTons = weightOunces / 35273.92;
	cout << weightOunces << " ounces " << " is equal to " << weightTons << " tons." << endl;

	//calculate no. of boxes needed for a ton of cereal
	numberOfBoxes = 35273.92 / weightOunces;
	//output how many boxes = a ton
	cout << "The number of boxes you would need to yield one metric ton of cereal is " << numberOfBoxes << " boxes." << endl;






	system("pause");
	return 0;
}


/*

SAMPLE OUTPUT:

Enter package weight in ounces
152
You entered 152 ounces.
152 ounces  is equal to 0.00430913 tons.
The number of boxes you would need to yield one metric ton of cereal is 232.065 boxes.
Press any key to continue . . .





Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/