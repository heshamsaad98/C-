#include "Distance.h"
#include <iostream>
using namespace std;

Distance::Distance() : feet(0), inches(0)
{
}

Distance::Distance(int f, float i) : feet(f), inches(i)
{
}

void Distance::setDistance(int f, float i)
{
	feet = f;
	inches = i;
}

void Distance::print()
{
	cout << "Feet = " << feet << "\t" << "Inches = " << inches << endl;
}

Distance Distance::add_distance(Distance d2)
{
	Distance result;
	result.feet = feet + d2.feet;
	result.inches = inches + d2.inches;

	return result;
}

