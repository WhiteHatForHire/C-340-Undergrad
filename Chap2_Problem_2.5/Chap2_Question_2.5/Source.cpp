/*******************************************
* Chap2_Problem_2.5 *
* Maxwell Stephens *
* 12:30 TTh *
* Chap2_Problem_2.5, 2/14/17 *
*******************************************/
/*
2.5 Buoyancy
A program that inputs the weight (in pounds) and radius (in feet) of a sphere and outputs
whether the sphere will sink or float in water.
*/






#include <iostream>

#include <math.h>
using namespace std;
#define _USE_MATH_DEFINES
#define WATERBUOYANCY 62.4
int main()
{
	//declare vars
	double weight, radius, volume, density, buyantForce;
	//ask for and take in weight
	cout << "Input weight of the sphere in pounds." << endl;
	cin >> weight;
	//ask for and take in radius
	cout << "Input radius of the sphere in feet." << endl;
	cin >> radius;
	//calculate volume of user's sphere
	volume = ((4.0 / 3.0) * (3.14159265359)) * (pow(radius, 3.0));
	//calculate density
	density = (weight / volume);
	//calculate buyant force to be compared with WATERBUOYANCY (which is 62.4)
	buyantForce = density * volume * 9.8;
	//conditional to give output of will float or will sink
	if (buyantForce <= WATERBUOYANCY)
		cout << "The sphere will float in water." << endl;

	else
		cout << "The sphere will sink in water." << endl;

	system("pause");
	return 0;
}



/*

SAMPLE OUTPUT:








Self-Evaluation:
4: Works perfectly, code properly documented
I believe I earned 4 points.
*/