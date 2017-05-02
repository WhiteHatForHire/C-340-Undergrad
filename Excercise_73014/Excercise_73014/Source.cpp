/*
Simple addition calculator using arrays
*/




#include <iomanip>
#include <fstream>
#include <iostream>
using namespace std;


int main() {
	//declare vars
	char num1[20];
	char num2[20];
	int int1;
	int int2;
	int intArray[20];
	//get first number
	cout << "Enter the first number" << endl;
	cin >> num1;
	//get second number
	cout << "Enter the second number" << endl;
	cin >> num2;
	//convert to int using atoi
	int1 = atoi(num1);
	//convert to int using atoi again
	int2 = atoi(num2);
	//store sum in array
	intArray[1] = int1 + int2;
	//print sum
	cout << "Sum of the numbers = " << intArray[1] << endl;
	system("pause");
	return 0;
}