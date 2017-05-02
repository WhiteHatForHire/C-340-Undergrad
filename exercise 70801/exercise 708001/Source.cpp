/*******************************************
* Programming excercise 70801 *
* Maxwell Stephens *
* 12:30 TTh *
* 70801, 2/2/17 *
*******************************************/
/*
This program allows the user to enter a time in seconds and then outputs 
how far an object would drop if it is in freefall for that length of time. Assume  no 
friction or resistance from air and a constant  acceleration of 32 feet per second due to gravity.
*/
#include <iostream>
using namespace std;

int main()
{
	//creation of int variables x and y
	int x, y;
	//request for time in seconds
	cout << "Enter a time in seconds." << endl;
	//taking in time in seconds, assigned to x
	cin >> x;
	//equation taking time in seconds (x) and converting it to freefall distance
	y = 0.5 * 32 * x * x;
	//telling the user how long their time is once converted to freefall distance
	cout << "An object in freefall for " << x << " seconds will fall " << y << " feet " << endl;

	system("pause");
	return 0;
}



/*

SAMPLE OUTPUT:

Enter a time in seconds.
12
An object in freefall for 12 seconds will fall 2304 feet
Press any key to continue . . .





Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/