#include <iostream>
using namespace std;


/*
Write a function that cumputes the average and standard deviation of four scores.
The standard deviation is defined to be the square root of the average of the four
values: (si-1)^2, where a is the average of the four scores s1,s2,s3,s4. The function
will have six parameters and will call two other functions. Embed the function 
in a program that allows you to test the function again and again until you tell the 
program you are finished.
*/
int standardDeviation(int one, int two, int three, int four);
int main() {
	//declare vars
	int score1,
		score2,
		score3,
		score4;
	//get inputs
	cout << "Please enter score 1" << endl;
	cin >> score1;
	cout << "Please enter score 2" << endl;
	cin >> score2;
	cout << "Please enter score 3" << endl;
	cin >> score3;
	cout << "Please enter score 4" << endl;
	cin >> score4;
	//process into function
	cout << standardDeviation(score1, score2, score3, score4);






	system("pause");
	return 0;
}
//function for average and std deviation, and output it.
int standardDeviation(int one, int two, int three, int four)
{
	int average = (one + two + three + four) / 4;
	double standardDeviation = sqrt(average);
	cout << "Average = " << average << endl << endl;
	cout << "Standard deviation = " << standardDeviation << endl << endl << endl;

	return 0;
}