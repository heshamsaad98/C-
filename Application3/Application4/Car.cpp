#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(string mk, int md, string c) : maker(mk), model(md), color(c)
{
	cout << "The Car maker, model and color are intailized" << endl;
}
void Car::setMaker(string m)
{
	maker = m;
}

string Car::getMaker()
{
	return maker;
}

void Car::setModel(int n)
{
	model = n;
}

int Car::getModel()
{
	return model;
}

void Car::setColor(string c)
{
	color = c;
}

string Car::getColor()
{
	return color;
}
Car::~Car()
{
	cout << "The object life time ended" << endl;
}
