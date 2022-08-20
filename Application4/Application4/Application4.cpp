// Application4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

int main()
{
    Calculator c1;
    cout << "this is version 1: " << c1.add(3, 7) << endl;
    cout << "this is version 2: " << c1.add(3, 7, 10) << endl;
    cout << "this is version 3: " << c1.add("hello", "world") << endl;
}
