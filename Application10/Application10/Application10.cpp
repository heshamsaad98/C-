// Application10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Counter.h"
#include "Distance.h"
using namespace std;

int main()
{
    Counter c1(5);
    Counter c2(10);
    Counter c3 = ++c1;
    c3 = c1++;
    cout << c3.get_count() << endl;
    Counter c4 = --c2;
    cout << c4.get_count() << endl;

    Distance d1(3, 4);
    Distance d2(5, 10);
    Distance d3 = d1 - d2;
}

