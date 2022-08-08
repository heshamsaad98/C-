#include <iostream>
#include <string>
using namespace std;

typedef struct 
{
	int sno;
	string name;
	float gba;
	float marks[3];
}student;

int main()
{
	student x[5];
	x[0].sno = 120;
	x[0].name = "hesham";
	x[0].gba = 3.79;

	cout<<x[0].name<<endl;
}