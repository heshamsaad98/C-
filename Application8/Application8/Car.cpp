#include "Car.h"

int Car::counter = 0;

void Car::setMaker(string m)
{
	maker = m;
}

string Car::getMaker()
{
	return maker;
}

void Car::setModel(int m)
{
	model = m;
}

int Car::getModel()
{
	return model;
}

int Car::getCarscount()
{
	return counter; 
}

Car::Car() : maker("Toyota"), model(2019), color("White")
{
	counter++;
}

Car::Car(string m, int mo, string c): maker(m), model(mo), color(c)
{
	counter++;
}

Car::~Car()
{
	counter--;
}
