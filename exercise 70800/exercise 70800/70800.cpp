/*******************************************
* Programming excercise 70800 *
* Maxwell Stephens *
* 12:30 TTh *
* 70800, 2/2/17 *
*******************************************/
/*
This program determines whether a meeting room is in violation of fire law regulations regarding
the maximum room capacity. The program  will read in the maximum room capacity and the number of people to attend the meeting.
If the number of people is less than  or equal  to the maximum room capacity, the program  announces that it is legal to
hold the meeting and tells how many additional people may legally attend. If the number of people exceeds the maximum room capacity,
the program  announces that the meeting cannot be held as planned due to fire regulations and tells how many
people must be excluded in order to meet the fire regulations.
*/





#include <iostream>
#include <istream>
#include <fstream>
#include <exception>
#include <memory>
using namespace std;

int main()
{
	//define variables
	int maximumRoomCapacity, numberOfPeople, x;
	//ask for and take in data
	//output values for newly assigned variables
	cout << "Enter the Maximum occupancy for the room." << endl;
	cin >> maximumRoomCapacity;
	cout << "Maximum Occupancy = " << maximumRoomCapacity << endl;
	cout << "Enter the number of occupants of the room." << endl;
	cin >> numberOfPeople;
	cout << "Current Occupancy = " << numberOfPeople << endl;
	//equation to find the number of people needed to leave the room, using variable x to simplify else statement
	x = numberOfPeople - maximumRoomCapacity;

	//if else statement to determine if the room is at/below or over capacity
	if (numberOfPeople <= maximumRoomCapacity)
	{
		cout << "The number of occupants does not exceed the legal maximum." << endl;
		system("pause");
	}

	else
	{
		cout << "ATTENTION: MAXIMUM OCCUPANCY EXCEEDED. THE LAW REQUIRES " << x << " PERSONS TO LEAVE THE ROOM IMMEDIATELY" << endl;
		system("pause");
	}

	return 0;
}

/*

SAMPLE OUTPUT:

Enter the Maximum occupancy for the room.
50
Maximum Occupancy = 50
Enter the number of occupants of the room.
45
Current Occupancy = 45
The number of occupants does not exceed the legal maximum.
Press any key to continue . . .




Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/