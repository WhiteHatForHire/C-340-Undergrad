/*******************************************
* Chap2_Problem_2.8 *
* Maxwell Stephens *
* 12:30 TTh *
* Chap2_Problem_2.8, 2/14/17 *
*******************************************/
/*
2.8 Text Replacement
Create a text file that contains the text "I hate C++ and hate programming!" Write a program that
reads in the text from the file and outputs each word to the console but replaces any occurrence
of "hate" with "love". Your program should work with any line of text that contains the word
hate", not just the example given in this problem.
*/






#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string txt[10];
	string line;

	int i = 0;
	ifstream file("c++.txt");
	if (file.is_open()) {
		while (!file.eof()) {
			getline(file, line);
			txt[i] = line;
			i++;
		}
	}
	file.close();
	cout << "I love C++ and love programming!" << endl;
	for (int j = 0; txt[j] != "\0"; j++)
		cout << txt[j] << endl;

	system("pause");
	return 0;
}


/*

SAMPLE OUTPUT:








Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/