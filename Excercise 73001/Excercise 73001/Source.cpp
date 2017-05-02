/*******************************************
* Programming excercise 73002 *
* Maxwell Stephens *
* 12:30 TTh *
* 73002, 2/21/17 *
*******************************************/
/*
A program that determin
*/
#include <iostream>
using namespace std;

int main()
{
	//for loop with nested for loop
	//incrementing i from 2 to 100 to get the correct range
	for (int i = 2; i < 100; i++)
		//nested for loop to test whether or not i is prime
		for (int j = 2; j < i; j++)
		{
			//test to rule out numbers if they equal 0 after being % by j
			if (i % j == 0)
				break;
			//test to see if i is prime by testing if it is equal to 1 plus the non incremented j value in this first case, 2
			else if (i == j + 1)
				//print the value for i that is prime
				cout << i << " \n";

		}

	system("pause");
	return 0;
}



/*

SAMPLE OUTPUT:














Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/
