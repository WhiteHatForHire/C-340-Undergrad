/*
Write a program  that prompts the user to enter the average rainfall for each
month of the year. Then, prompt the user to enter the actual amount of rainfall
for each month of this year. Finally, print out a table, formatted to be left
justified with a width of 20 spaces for each column, that displays the average
amount of rainfall, the actual amount of rainfall, and the difference between  the two
for each month of the year. Your program  should use arrays  to hold the values  for
average monthly rainfall, actual monthly rainfall, and month name .

*/
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
	
	string months[12] =
	{ "January", "February", "March", "April",
	 "May", "June", "July", "August", "September",
	 "October", "November", "December" };
	double averageRainfall[12];
	double actualRainfall[12];

	for (int i = 0; i < 12; i++) {
		cout << "Enter the average monthly rainfall for " << months[i] << " in inches." << endl;
		cin >> averageRainfall[i];
	}
	for (int i = 0; i < 12; i++) {
		cout << "Enter this year's actual rainfall for " << months[i] << " in inches." << endl;
		cin >> actualRainfall[i];
	}
	
	cout << left << setw(15) << "Month" << setw(25) << "Average Rainfall" << setw(30) 
		 << "This Year's Rainfall" << setw(10) << "Difference" << endl;
	for (int i = 0; i < 12; i++) {
		cout << left << setw(15) << months[i] << setw(25) << averageRainfall[i] << setw(30)
			<< actualRainfall[i] << setw(10) << averageRainfall[i] - actualRainfall[i] << endl;
	}
	














	system("pause");
	return 0;
}