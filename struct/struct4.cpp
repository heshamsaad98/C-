#include <iostream>
#include <string>
using namespace std;

struct nameType
{
	string first;
	string middle;
	string last;
};

struct addressType
{
	string address1;
	string address2;
	string city;
	string state;
	string zip;
};

struct dateType
{
	int month;
	int day;
	int year;
};

struct contactType
{
	string phone;
	string cellphone;
	string fax;
	string pager;
	string email;
};

struct employeeType
{
	nameType name;
	string empID;
	addressType address;
	dateType hireDate;
	contactType contact;
	string deptID;
	double salary;
};

int main()
{
	employeeType emp1;

	emp1.name.first = "hesham";
	emp1.name.middle = "saad";
	emp1.name.last = "mohamed";

	cout<<emp1.name.last<<endl;
}