#include <iostream>
#include <fstream>
using namespace std;


/*
Write a program  that prompts the user to enter a date (ex. 3/20/2015) and outputs
the day of the week corresponding to that date.

You should use the following functions in your implementation:
bool isLeapYear(int  year);
This function should return true  if year is a leap year and false  if it is not. Here
is pseudocode to determine a leap year:
leap_year = ((year divisible by 400) or (year divisible by 4 and year not divisible by 100))

int  getCenturyValue(int  year);
This function should take the first two digits of the year (i.e., the century), divide
by 4, and save the remainder. Subtract the remainder from 3 and return this
value  multiplied by 2. For example, the year 2008 becomes (20/4) = 5 remainder
0. 3 - 0 = 3. Return 3 * 2 = 6.

int  getYearValue(int  year);
This function computes a value  based  on the years since the beginning of the
century. First, extract the last two digits of the year. For example, 08 is extracted
for 2008. Next, factor in leap years. Divide the value  from the previous step by 4
and discard the remainder. Add the two results together and return this value . For
example, from 2008 we extract 08. Then (8/4) = 2 remainder 0. Return 2 + 8 = 10.

int  getMonthValue(int  month, int  year);
This function should return a value  based  on the following table and will require
invoking the isLeapYear function:
MONTH RETURN VALUE
January 0 (6 if year is a leap year)
February 3 (2 if year is a leap year)
March 3
April 6
May 1
June 4
July 6
August 2
September 5
October 0
November 3
December 5

Your main function should compute the day of the week using this formula:
(day of month) + (getMonthValue) + (getYearValue) + (getCenturyValue)
Then, divide this sum  by 7 and save the remainder. The value  of the remainder
corresponds to the day of the week.
Sunday = 0
Monday = 1
Tuesday = 2
Wednesday = 3
Thursday = 4
Friday = 5
Saturday = 6
Print the corresponding day in English.
*/
//function identifiers
const int JANUARY = 1;
const int FEBRUARY = 2;
const int MARCH = 3;
const int APRIL = 4;
const int MAY = 5;
const int JUNE = 6;
const int JULY = 7;
const int AUGUST = 8;
const int SEPTEMBER = 9;
const int OCTOBER = 10;
const int NOVEMBER = 11;
const int DECEMBER = 12;

// Returns true if the given year is a leap year
bool isLeapYear(int year);
// Returns a value computed from the century of the year
int getCenturyValue(int year);
// Returns a value computed based on the years since the beginning of the century.
int getYearValue(int year);
// Returns a value for month
int getMonthValue(int month, int year);
int main() {
		int month = 0, day = 0, year = 0, dayOfWeek = 0;
		cout << "Please enter a day: \n";
		cin >> day;
		cout << "Please enter a year: \n";
		cin >> year;
		cout << "Please enter a month: \n";
		cin >> month;
		cout << endl;
		
		
		// Compute the day of the week
		dayOfWeek = day + getMonthValue(month, year) + getYearValue(year) + getCenturyValue(year);

		dayOfWeek = dayOfWeek % 7;

		cout << "\nThe date " << month << "/" << day << "/" << year
			<< " is a ";

		if (dayOfWeek == 0)
		{
			cout << "Sunday.";
		}
		else if (dayOfWeek == 1)
		{
			cout << "Monday.";
		}
		else if (dayOfWeek == 2)
		{
			cout << "Tuesday.";
		}
		else if (dayOfWeek == 3)
		{
			cout << "Wednesday.";
		}
		else if (dayOfWeek == 4)
		{
			cout << "Thursday.";
		}
		else if (dayOfWeek == 5)
		{
			cout << "Friday.";
		}
		else if (dayOfWeek == 6)
		{
			cout << "Saturday.";
		}
		cout << endl;
		
		system("pause");
		return 0;
	
}

	

	// Returns true if the given year is a leap year 

	bool isLeapYear(int year)

	{
		return (((year % 400) == 0) || (((year % 4) == 0)
			&& ((year % 100) != 0)));

	}

	// Returns a value computed from the century of the year 

	int getCenturyValue(int year)

	{
		int century;
		int remainder;
		century = year / 100;
		remainder = (century % 4);
		return ((3 - remainder) * 2);
	}

	// Returns a value computed based on the years since 
	// the beginning of the century. 
	int getYearValue(int year)

	{
		int sinceCentury;
		sinceCentury = year % 100;
		return (sinceCentury + (sinceCentury / 4));
	}

	// Returns a value (from a table) for the given month 

	int getMonthValue(int month, int year)
	{
		int result = 0;
		if (month == JANUARY)
		{
			if (isLeapYear(year))
			{
				result = 6;
			}
			else
			{
				result = 0;
			}
		}
		if (month == FEBRUARY)
		{
			if (isLeapYear(year))
			{
				result = 2;
			}
			else
			{
				result = 3;
			}

		}
		else if (month == MARCH)

		{
			result = 3;
		}

		else if (month == APRIL)

		{
			result = 6;
		}

		else if (month == MAY)

		{
			result = 1;
		}

		else if (month == JUNE)

		{
			result = 4;
		}

		else if (month == JULY)

		{
			result = 6;
		}

		else if (month == AUGUST)

		{
			result = 2;
		}

		else if (month == SEPTEMBER)

		{
			result = 5;
		}

		else if (month == OCTOBER)

		{
			result = 0;
		}

		else if (month == NOVEMBER)

		{
			result = 3;
		}

		else if (month == DECEMBER)

		{
			result = 5;
		}

		return result;

	}

	