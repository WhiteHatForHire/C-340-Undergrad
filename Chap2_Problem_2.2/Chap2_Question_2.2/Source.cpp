/*******************************************
* Chap2_Problem_2.2 *
* Maxwell Stephens *
* 12:30 TTh *
* Chap2_Problem_2.2, 2/14/17 *
*******************************************/
/*
2.2 Installment Loan Time
No down payment, 18 percent / year, payment of $50/month, payment goes first to interest,
balance to principal. Write a program that determines the number of months it will take to pay
off a $1000 stereo. The following code also outputs the monthly status of the loan.
*/






#include <iostream>	

using namespace std;


int main()
{
	//declare vars
	double loanAmount = 1000, rate = .18, payment = 50.0;
	int months = 0;


	//monthly loop, takes the loan amount and subtracts based on payment and interest rate
	while (loanAmount > 0)
	{
		//exception to prevent a negative value
		if (loanAmount < 50)
		{
			months++;
			loanAmount = 0;
		
		}
		else
		{
			loanAmount = loanAmount + (loanAmount * (rate / 12)) - payment;
			months++;
		}
		cout << "After " << months << " months, the amount owed is $" << loanAmount << endl;
	}
	cout << "It took " << months << " months to pay off the 1000 loan" << endl;


	system("pause");
	return 0;
}


/*

SAMPLE OUTPUT:
After 1 months, the amount owed is $965
After 2 months, the amount owed is $929.475
After 3 months, the amount owed is $893.417
After 4 months, the amount owed is $856.818
After 5 months, the amount owed is $819.671
After 6 months, the amount owed is $781.966
After 7 months, the amount owed is $743.695
After 8 months, the amount owed is $704.851
After 9 months, the amount owed is $665.423
After 10 months, the amount owed is $625.405
After 11 months, the amount owed is $584.786
After 12 months, the amount owed is $543.558
After 13 months, the amount owed is $501.711
After 14 months, the amount owed is $459.237
After 15 months, the amount owed is $416.125
After 16 months, the amount owed is $372.367
After 17 months, the amount owed is $327.953
After 18 months, the amount owed is $282.872
After 19 months, the amount owed is $237.115
After 20 months, the amount owed is $190.672
After 21 months, the amount owed is $143.532
After 22 months, the amount owed is $95.6847
After 23 months, the amount owed is $47.12
After 24 months, the amount owed is $0
It took 24 months to pay off the 1000 loan
Press any key to continue . . .







Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/