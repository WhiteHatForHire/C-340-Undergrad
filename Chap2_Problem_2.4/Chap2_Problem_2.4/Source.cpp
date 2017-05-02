/*******************************************
* Chap2_Problem_2.4 *
* Maxwell Stephens *
* 12:30 TTh *
* Chap2_Problem_2.4, 2/14/17 *
*******************************************/
/*
a program that finds and prints all of the prime numbers between 3 and 100.
*/






#include <iostream>	

using namespace std;

int main()
{
	//outer for loop
	for (int i = 3; i < 100; i++)
	{
		//inner for loop
		//increment int j while it is less than i
		for (int j = 2; j < i; j++)
		{
			//inner for loop if statement using modulo to test for a non prime
			if (i % j == 0)
				//breaks if non prime
				break;
			//if not non prime, then i must be prime
			else if (i == j + 1)
				//output that i is prime
				cout << i << " is prime\n";
		}//end inner loop
	}//end outer loop

	system("pause");
	return(0);
}


/*

SAMPLE OUTPUT:








Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/