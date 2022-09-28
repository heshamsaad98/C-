// Application5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle r1(10, 20);
	cout <<r1.getArea() << endl;
	Rectangle r2;
	cout << r2.getArea() << endl;
}
