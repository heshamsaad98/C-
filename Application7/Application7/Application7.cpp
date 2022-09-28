// Application7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Distance.h"

int main()
{
	Distance obj1(5, 3.5);
	Distance obj2(7, 4.25);
	Distance d3 = obj1.add_distance(obj2);
	d3.print();
}
