/*******************************************
* Chap2_Problem_2.3 *
* Maxwell Stephens *
* 12:30 TTh *
* Chap2_Problem_2.3, 2/14/17 *
*******************************************/
/*
This program calculates how many bars of chocolate you can buy with an amount of money
with the condition that every bar comes with a coupon, and 7 coupons grants an extra bar.
The program outputs how many bars you will be able to buy and the leftover coupons.
*/






#include <iostream>	

using namespace std;

int main()
{
	//declare vars
	double nDollars, coupons = 0, totalBars = 0;
	//ask for dollars
	cout << "Please enter how much money you would like to spend on chocolate bars\n";
	//get dollars
	cin >> nDollars;
	//while loop to calculate bars and coupons, based on starting money
	while (nDollars > 0)
	{
		//incrementation/decrementation
		nDollars--;
		totalBars++;
		coupons++;
		//if statement to account for the 7 coupon situation, adds a dollar to represent another bar and rerun the loop once more
		//this allows the coupon from that bar to be added
		if (coupons == 7)
		{
			coupons-=7;
			nDollars++;
		}
	}
	//output to the user of the end result, bars purchased and coupons left
	cout << "You were able to buy " << totalBars << " chocolate bars with your spending money.\n";
	cout << "You also have " << coupons << " coupons left\n";


	system("pause");
	return (0);
}


/*

SAMPLE OUTPUT:








Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/