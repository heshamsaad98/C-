#include <iostream>
#include <string>
using namespace std;

struct employee
{
	int empno;
	string fname;
	string lname;
	float salary;
	float bonus;
	float net_salary;
};

int main()
{
	employee e1, e2;
	e1.empno = 10;
	e1.fname = "hesham";
	e1.lname = "saad";
	e1.salary = 3000;
	e1.bonus = 500;
	e1.net_salary = e1.salary + e1.bonus;
	
	e2 = e1;
	cout<<e2.fname<<" "<<e2.lname<<endl;

	if(e1.salary == e2.salary && e1.bonus == e2.bonus)
	{
		cout<<"struct"<<endl;
	}
}