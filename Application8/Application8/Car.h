#pragma once
#include <iostream>
using namespace std;

class Car
{
private:
	string maker;
	int model;
	string color;
	static int counter;

public:
	void setMaker(string m);
	string getMaker();
	void setModel(int m);
	int getModel();
	int getCarscount();

	Car();
	Car(string m, int mo, string c);
	~Car();
};

