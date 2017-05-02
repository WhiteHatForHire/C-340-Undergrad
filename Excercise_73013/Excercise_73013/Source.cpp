/*******************************************
* Excercise 73013 *
* Maxwell Stephens *
* 12:30 TTh *
* 4/11/17 *
*******************************************/

/*
Write a program  that reads in an array  of integers.You may assume  that there
are fewer than 50 entries in the array .

Your program  should sort the array  in descending order and print out each
unique value  along with how many times it appears in the array  in two - column
format.Each column should be of width 10 and left justified.
*/


#include <iostream>	
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <functional>
using namespace std;

int main()
{

		//String to be used
		string input = "-12 3 -12 4 1 1 -12 1 -1 1 2 3 4 2 3 -12";

		stringstream ss(input);

		const int SPACING = 3;

		const size_t SIZE = 50;
		int myArray[SIZE] = { 0 };

		int count = -1;

		//fills the array with integers
		while (ss >> myArray[++count]);//NULL statement

									   //create pointers to the beginning and end of the array
		int *beginning_limit = myArray;
		int *ending_limit = myArray + count;


		//Sorts the array
		sort(beginning_limit, ending_limit, greater<int>());

		int current = myArray[0];
		count = 1;


		//counts the number of each value in the array
		while (++beginning_limit != ending_limit)
		{

			if (current != *beginning_limit)
			{
				cout << setw(SPACING) << current << setw(SPACING) << count << endl;
				current = *beginning_limit;
				count = 0;
			}

			++count;
		}

		//outputs the final value
		cout << setw(SPACING) << current << setw(SPACING) << count << endl;

		system("pause");
		return 0;
	
}


/*

SAMPLE OUTPUT:








Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/