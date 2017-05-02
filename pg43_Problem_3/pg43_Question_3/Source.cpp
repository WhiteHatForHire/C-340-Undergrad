/*******************************************
* Pg43_Question_2 *
* Maxwell Stephens *
* 12:30 TTh *
* Pg43_Question_2, 2/2/17 *
*******************************************/
/*
This program is to implement 6 month pay increase for workers, output retroactive pay, new annual and monthly salaries.
*/






#include <iostream>	

using namespace std;

int main()
{
	//declaration of variables
	double previousSalary, retroactivePayDue, newAnnualSalary, newMonthlySalary;
	double const payIncrease = 0.076;

	//ask for, then take in old salary
	cout << "Please type employee's previous annual salary." << endl;

	cin >> previousSalary;
	//calculate retroactive pay
	retroactivePayDue = (previousSalary / 2) * payIncrease;
	

	//calculate new annual salary 
	newAnnualSalary = previousSalary * (1 + payIncrease);
	

	//calculate new monthly salary
	newMonthlySalary = newAnnualSalary / 12;

	//print all required information to user
	cout << "Employee Salary Data:" << endl;
	cout << "Retroactive pay due: $ " << retroactivePayDue << "     New annual salary: $ " << newAnnualSalary << "     New monthly salary: $" << newMonthlySalary << endl;





	system("pause");
	return 0;
}


/*

SAMPLE OUTPUT:

Please type employee's previous annual salary.
100000
Employee Salary Data:
Retroactive pay due: $ 3800     New annual salary: $ 107600     New monthly salary: $8966.67
Press any key to continue . . .






Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/