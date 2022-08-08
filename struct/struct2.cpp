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
	student s1;
	s1.sno = 1290;
	s1.name = "hesham saad";
	s1.gba = 3.79;
	s1.marks[0] = 100;
	s1.marks[1] = 95;
	s1.marks[2] = 90;
}