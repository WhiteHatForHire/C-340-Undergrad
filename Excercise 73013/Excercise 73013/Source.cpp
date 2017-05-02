/*Write a program  that reads in an array  of integers.You may assume  that there
are fewer than 50 entries in the array .

Your program  should sort the array  in descending order and print out each
unique value  along with how many times it appears in the array  in two - column
format.Each column should be of width 10 and left justified.
*/

#include<iostream>
using namespace std;
int main()
{
	int numbers[50];
	int num;
	int i;
	do
	{
		cout << "Enter number of integers you want to input(1-50) : ";
		cin >> num;
		if (num <= 0 || num>50)
			cout << endl << "Invalid number, try again." << endl;
	} while (num <= 0 || num>50);
	cout << endl << "Enter " << num << " numbers : " << endl;
	//getting user input
	for (i = 0; i<num; i++)
	{
		cin >> numbers;
	}
	//sorting user input for easy comparinson and count
	for (i = 0; i<num; i++)
	{
		for (int j = 0; j<num - i - 1; j++)
		{
			if (numbers[j]>numbers[j + 1])
			{
				int temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
			}
		}
	}


	int number;
	int count = 0;
	int count2 = 0;
	//displaying result
	cout << endl << "N\tCount" << endl;
	for (i = 0; i<num; i++)
	{
		number = numbers;
		for (int j = 0; j<num; j++)
		{
			//counting distinct values
			if (number == numbers[j])
			{
				count2++;
				count = j;
			}
		}

		cout << endl << numbers << "\t" << count2;
		i = count;

		count2 = 0;
	}

	cout << endl;
	system("pause");
	return 0;
}