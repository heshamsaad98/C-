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
	cout <<"Feet = " << feet << "\t" << "Inches = " << inches << endl;
}
