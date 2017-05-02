/*******************************************
* Programming excercise 73002 *
* Maxwell Stephens *
* 12:30 TTh *
* 73002, 2/21/17 *
*******************************************/
/*

Cryptarithmetic puzzles are mathematical equations written using letters.Each letter
can be a digit from 0 to 9, but no two letters can be the same digit.For example,
SEND + MORE = MONEY

SEND 9567
+ MORE + 1085
-------- = > ------ -
MONEY 10652

A solution to the puzzle is : S = 9, R = 8, O = 0, M = 1, Y = 2, E = 5, N = 6, D = 7.

Write a program  to find a solution to the following cryptarithmetic puzzle :
TOO + TOO + TOO + TOO = GOOD
Use a nested loop for each unique letter to systematically assign  the digits from 0 - 9
to each letter.In the loop body, test that each variable  is unique and that the equation
is satisfied.Then, print out the values  for each letter.
HINT : The equation is satisfied if (1000 * G) - (400 * T) + (66 * O) + D = 0.
*/
#include <iostream>
using namespace std;

int main()
{
	//declare vars
	int T, O, G, D;
	//for loops, many nested to go through each letter until the equation, or proof, provided in the else if statement is correct
	for (T = 0; T <= 9; T++)
	{
		for (O = 0; O <= 9; O++)
		{
			for (G = 0; G <= 9; G++)
			{
				for (D = 0; D <= 9; D++)
				{
					//if d==g or d==o ect if any one of these is true then continue
					if ((D == G) || (D == O) || (D == T) || (G == O) || (G == T) || (O == T))
						continue;
					//else if to find the solution, if all these ae true you know the cypher is correct. Really interesting code here.
					else if (400 * T + 40 * O + 4 * O == 1000 * G + 100 * O + 10 * O + D)
					{
						cout << "T = " << T << endl
							<< "O = " << O << endl
							<< "G = " << G << endl
							<< "D = " << D << endl;
						break;
					}
				}
			}
		}
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
