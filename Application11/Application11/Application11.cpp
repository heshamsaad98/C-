// Application11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "student.h"
#include "PostGraduatedStudent.h"

int main()
{
	PostGraduatedStudent s1("Hesham", "Male", 15, 5, 3.9, "IS", "Nano Technology");
	s1.display();
}
