/*******************************************
* Programming excercise 70804 *
* Maxwell Stephens *
* 12:30 TTh *
* 70804, 2/17/17 *
*******************************************/
/*
A program that finds the temperature, as an integer, that is the same in both Celsius and Fahrenheit. 
*/


#include <iostream>
using namespace std;


 
int main()
{
	//declare vars
	int fahrenheit;
	int celsius;
	//set celcius to 100, as requested in the problem
    celsius = 100;
	//set fahenheit to the equivelency in degrees F of the 100 celcius (in this case, 212)
	fahrenheit = ((celsius - 32) * 5 / 9);
	//while loop that will continue decrementing celcius until the fahrenheit and celcius values are perfectly equivilent, in this case -40 degrees.
	while (celsius != -40)
	{
		fahrenheit = ((celsius - 32) * 5 / 9); //redo the conversion
		//cout << celsius << " degrees C= " << fahrenheit << " degrees F\n"; //display output
		celsius--; //decrement
	}
	fahrenheit = ((celsius - 32) * 5 / 9); //since the loop ends before it gets to -40, a recalulation is needed
	cout << "***** " << celsius << " degrees C= " << fahrenheit << " degrees F" << " **** " << endl; //as well as an additional output statement
	//this would not be needed with a small adjustment of the while loop, but was done this way to practice different approaches with the same result
	system("pause");
	return 0;
}



/*

SAMPLE OUTPUT:






















Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/