/*******************************************
* Pg44_Question_6 *
* Maxwell Stephens *
* 12:30 TTh *
* Pg44_Question_6, 2/9/17 *
*******************************************/
/*
This program is to calculate the amount an employee is paid in normal pay and overtime, and the taxes/fees deducted from gross pay, and net pay.
*/



#include <iostream>	
#include <iomanip>

using namespace std;
#define NORMALPAYRATE 16.78
#define OVERTIMEPAYRATE 25.17
int main()
{
	double GrossPay, NetPay, SocialSecurity, FederalIncome,
		StateIncome, UnionDues, Dependants, Hours, ExtraDependantFee;


	cout << "Enter number of hours worked in a week" << endl;
	cin >> Hours;
	if (Hours > 40)
		GrossPay = (Hours - 40) * OVERTIMEPAYRATE + 40 * NORMALPAYRATE;
	else
		GrossPay = Hours * NORMALPAYRATE;
	cout << "Enter number of dependants" << endl;
	cin >> Dependants;
	SocialSecurity = 0.06 * GrossPay;
	FederalIncome = 0.14 * GrossPay;
	StateIncome = 0.05 * GrossPay;
	UnionDues = 10;
	if (Dependants > 3)
		ExtraDependantFee = 35;
	else
		ExtraDependantFee = 0;
	NetPay = GrossPay - SocialSecurity - FederalIncome - StateIncome - UnionDues - ExtraDependantFee;
	cout << "Weekly Pay and Taxes Rundown:" << endl;
	cout << "Gross Pay:          $" << left  << GrossPay << endl;
	cout << "Social Security Tax $" << left  << SocialSecurity << endl;
	cout << "Federal Income Tax: $" << left << FederalIncome << endl;
	cout << "State Income Tax:   $" << StateIncome << endl;
	cout << "Union Dues:         $" << UnionDues << endl;
	cout << "Extra Dependant Fee:$" << ExtraDependantFee << endl;
	cout << "Net Pay:            $" << NetPay << endl;



	system("pause");
	return 0;


}

/*

SAMPLE OUTPUT:

Enter number of hours worked in a week
40
Enter number of dependants
2
Weekly Pay and Taxes Rundown:
Gross Pay:          $671.2
Social Security Tax $40.272
Federal Income Tax: $93.968
State Income Tax:   $33.56
Union Dues:         $10
Extra Dependant Fee:$0
Net Pay:            $493.4
Press any key to continue . . .





Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/