/*******************************************
* Chap2_Problem_2.9 *
* Maxwell Stephens *
* 12:30 TTh *
* Chap2_Problem_2.9, 2/14/17 *
*******************************************/
/*
2.9 File Reading
Create a text file that contains 10 integers with one integer per line. You can enter any 10
integers that you like in the file. Then write a program that inputs a number from the keyboard
and determines if any pair of the 10 integers in the text file adds up exactly to the number typed
in from the keyboard. If so, the program should output the pair of integers. If no pair of integers
adds up to the number then the program should output “No pair found.”
*/






#include <iostream>	
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int inputNum;
	bool found = false;
	int numbersi[10];
	string line;
	int numbers[10];
	ofstream inputFile;
	inputFile.open("2_9.txt");
	cout << "Enter 10 integers" << endl;
	if (inputFile.fail() == 1) 
	{
		cout << "Input error: read file" << endl;
	}
	else 
	{
		for (int i = 0; i < 10; i++)
		{
			cin >> numbers[i];
			inputFile << numbers[i];
			inputFile << endl;
		}
		ifstream inputfile("2_9.txt");
		if (inputfile.is_open())
		{
			for (int i = 0; i < 10; i++) {
				inputfile >> numbersi[i];
			}
			inputfile.close();
		}

		inputFile.close();
		cout << "enter an integer to check \n";
		cin >> inputNum;
		cout << endl;
		for (int i = 0; i < 10; i++)
		{
			for (int x = 0; x < 10; x++)
			{
				if (inputNum == numbersi[i] + numbersi[x])
				{
					cout << "Sum possibility found " << numbersi[i] << " + " << numbersi[x] 
						<< " = " << inputNum << endl;
					bool found = true;
				}
			}
		}
	}	if (found == false) {
		cout << "No pair found \n";
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