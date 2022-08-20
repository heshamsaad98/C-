// Application2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
    Car c1("Toyta", 2020, "Black");
    cout << "Tis Car made by " << c1.getMaker() << endl;
    cout << "This Car model is " << c1.getModel() << endl;

    Car c2("Fait", 2021, "Yello");
    cout << "Tis Car made by " << c2.getMaker() << endl;
    cout << "This Car model is " << c2.getModel() << endl;
} 
