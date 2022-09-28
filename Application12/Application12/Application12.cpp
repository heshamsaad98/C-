// Application12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#pragma once
#include <iostream>
using namespace std;

class Employee
{
private:
	string name;
	string job;
	float salary;

public:
	Employee() : name("Unknown"), job("Unknown"), salary(0.0)
	{}

	Employee(string n, string j, float s)
	{
		name = n;
		job = j;
		salary = s;
	}

	void set_salary(float s)
	{
		salary = s;
	}

	float get_salary()
	{
		return salary;
	}

	void set_name(string n)
	{
		name = n;
	}

	string get_name()
	{
		return name;
	}

	void set_job(string j)
	{
		job = j;
	}

	string get_job()
	{
		return job;
	}

	void display()
	{
		cout << "Name = " << name << ", job = " << job << ", salary = " << salary << endl;
	}
};
class Student
{
private:
	string name;
	string depatment;
	string research_interest;

public:
	Student(string d, string ra) : depatment(d), research_interest(ra)
	{}

	void set_name(string n)
	{
		name = n;
	}
	void set_depatment(string d)
	{
		depatment = d;
	}

	string get_depatment()
	{
		return depatment;
	}

	void set_research_interest(string ra)
	{
		research_interest = ra;
	}

	string get_research_interest()
	{
		return research_interest;
	}

	void display()
	{
		cout << "Department = " << name << ", research interest = " << research_interest << ", name = " << name << endl;
	}
};
class TechingAssistant : public Student, public Employee
{
public:
	TechingAssistant(string n, string j, float s, string d, string ra) : Employee(n, j, s), Student(d, ra)
	{}

	void display()
	{
		Employee::display();
		Student::display();
	}
};

void main()
{
	TechingAssistant ta("Ahmed", "TA", 5000, "IS", "DataBases");
	ta.set_salary(7000);
	ta.set_research_interest("Data Sience");
	ta.Employee::set_name("Mohamed");
	ta.Student::set_name("Mahmoud");
	ta.display();
}