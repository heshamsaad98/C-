#pragma once
#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	string gender;
	float age;

public:
	Person()
	{
		name = "unknown";
		gender = "unknown";
		age = 0;
	}

	Person(string n, string g, float a)
	{
		name = n;
		gender = g;
		age = a;
	}

	void set_age(float a)
	{
		age = a;
	}
	float get_age()
	{
		return age;
	}

	void set_name(string n)
	{
		name = n;
	}

	string get_name()
	{
		return name;
	}

	void set_gender(string g)
	{
		gender = g;
	}

	string get_gender()
	{
		return gender;
	}

	void display()
	{
		cout << "The Person Basic data " << endl;
		cout << name << " " << gender << " " << age << endl;
	}

	friend void print(Person p);
};

void print(Person p)
{
	cout << "The Basic Data of person" << endl;
	cout << "name: " << p.name << ", age: " << p.age << ", gender: " << p.gender << endl;
}

int main()
{
	Person x("Ahmed", "Male", 30);
	print(x);
}
