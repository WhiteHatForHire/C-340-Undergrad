#include <iostream>
#include <fstream>
using namespace std;


/*
Write a program  that prompts the user to enter the number of liters of
gasoline consumed by the user's car and the number of miles traveled by
the user's car. Write a function that accepts the liters and miles traveled
and calculates and returns the number of miles per gallon the car delivered.
Use a constant  global variable  to hold the number of liters per gallon. One
liter is 0.264179 gallons.

Your program  should allow the user to continuously perform this calculation.
At the end of each calculation, ask the user to enter 'Y' or 'y' to perform
another calculation or any other character  to quit.
*/

//define constant
const double LITERSINGALLONS = 0.264179;

//function identifier
double mpgFunc(double liters, double miles);

int main() {
	
	//define vars
	double liters = 0,
		   miles = 0,
		   mpg = 0;
	char answer;
	bool looping = true;
	//loop
	while (looping == true) {

	//heading
	cout << "********MAX'S MPG-O-MATIC********" << endl << endl << endl;
	//ask for liters
	cout << "Please enter the number of liters of gasoline consumed by your vehicle\n";
	//take in liters
	cin >> liters;
	//ask for miles
	cout << "Please enter the number of miles traveled on the gas used\n";
	//take in miles
	cin >> miles;

	//call function mpgFunc and print it to the user
	cout << mpgFunc(liters, miles) << " Miles per Gallon" << endl;
	//read in y/n
	cout << "Do another calculation? Y/N" << endl;
	cin >> answer;
	//exit loop using bool looping
	if (answer == 'y' || answer == 'Y') {
		looping == true;
	}
	else {
		looping == false;
		return 0;
	}

	}//end of loop

	
	system("pause");
	return 0;
}


double mpgFunc(double liters, double miles) {
	double result;
	result = miles / (0.264179*liters);
	return result;
}