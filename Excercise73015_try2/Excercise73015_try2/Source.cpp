/*******************************************
* Excercise 73015 *
* Maxwell Stephens *
* 12:30 TTh *
* 4/19/17 *
*******************************************/

/*
A program that allows a user to book 28 seats on a flight.
There are 7 rows and 4 columns of seats.
After the flight is booked the program tells the user the flight is full.
*/


#include <iostream>
#include <string>
using namespace std;
int main() {
	int rowNumber;
	int totalBookings = 0;
	int maxBookings = 28;
	int columnNumber;
	char seatLetter;
	bool keepBooking = true;
	string answer;
	string planeArray[7][5] = {
		{ "1", "A", "B", "C", "D" },
		{ "2", "A", "B", "C", "D" },
		{ "3", "A", "B", "C", "D" },
		{ "4", "A", "B", "C", "D" },
		{ "5", "A", "B", "C", "D" },
		{ "6", "A", "B", "C", "D" },
		{ "7", "A", "B", "C", "D" }
	};


	while (keepBooking == true) {
		
		//display available seats
		cout << "Available seats:" << endl;
		for (int i = 0; i < 7; i++) {
			for (int z = 0; z < 5; z++) {
				cout << planeArray[i][z] << " ";
			}
			cout << endl;
		}
		//get user seat choice
		cout << "Enter row number: ";
		cin >> rowNumber;
		rowNumber = rowNumber - 1;
		cout << "Enter seat letter: ";
		cin >> seatLetter;
		seatLetter = toupper(seatLetter);
		cout << "Your seat is " << rowNumber + 1 << seatLetter << endl;

		if (seatLetter == 'A') {
			columnNumber = 1;
		}
		else if (seatLetter == 'B') {
			columnNumber = 2;
		}
		else if (seatLetter == 'C') {
			columnNumber = 3;
		}
		else if (seatLetter == 'D') {
			columnNumber = 4;
		}

		//assign seat
		if (planeArray[rowNumber][columnNumber] != "X") {
			planeArray[rowNumber][columnNumber] = "X";
			totalBookings++;
		}

		//display available seats
		cout << "Available seats:" << endl;
		for (int i = 0; i < 7; i++) {
			for (int z = 0; z < 5; z++) {
				cout << planeArray[i][z] << " ";
			}
			cout << endl;
		}

		
		
		//quit logic
		
		if (totalBookings >= 28) {
			cout << "PLANE BOOKED" << endl;
			cout << "Exit? Y/N";
			cin >> answer;

			if (answer == "Y" || answer == "y") {
				keepBooking = true;
			}
			else {
				keepBooking = false;
			}
		}

		//continue/quit logic

		cout << "Would you like to book another seat?" << endl;
		cout << "Enter Y for yes and anything else to quit: ";
		cin >> answer;

		if (answer == "Y" || answer == "y") {
			keepBooking = true;
		}
		else {
			keepBooking = false;
		}
		

		cout << "total bookings: " << totalBookings << endl;
		

	}//end loop



	
	return 0;
}

