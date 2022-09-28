// Application6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Distance.h"

int main()
{
    Distance d1;
    Distance d2 (5, 3.5);
    Distance d3(d2);
    d3.print();
    d3.setDistance(7, 4.25);
    Distance d4 = d3;
    d4.print();
}
