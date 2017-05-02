/* Write a program  that assigns  passengers seats in an airplane.Assume  the airplane
has 7 rows of 4 seats:
1 A B C D
2 A B C D
3 A B C D
4 A B C D
5 A B C D
6 A B C D
7 A B C D

Your program  should display the available seats in the airplane and ask the user to enter
a row number and seat letter.If that seat is open, tell the user what their seat number
is and update the available seats by placing an 'X' in the occupied seat.If the seat is
already  occupied, inform the user with relevant output .

Your program  should allow the user to continue booking seats until  they quit the program
or there are no empty seats left. */

#include <iostream>
#include <string>
using namespace std;
int main() {
	int rowNumber;
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
		cout << "Enter seat letter: ";
		cin >> seatLetter;
		seatLetter = toupper(seatLetter);
		cout << "Your seat is " << rowNumber << seatLetter << endl;

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
		planeArray[rowNumber][columnNumber] = "X";

		//display available seats
		cout << "Available seats:" << endl;
		for (int i = 0; i < 7; i++) {
			for (int z = 0; z < 5; z++) {
				cout << planeArray[i][z] << " ";
			}
			cout << endl;
		}

		cout << "Would you like to book another seat?" << endl;
		cout << "Enter Y for yes and anything else to quit: ";
		cin >> answer;

		if (answer == "Y" || answer == "y") {
			keepBooking = true;
		}
		else {
			keepBooking = false;
		}




	}//end loop



	system("pause");
	return 0;
}

