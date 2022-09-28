#pragma once
#include "Student.h"
class PostGraduatedStudent :
    public Student
{
private:
    string reserch_interest;

public:
    PostGraduatedStudent(string n, string g, float a, int l, float gp, string d, string ra)
        : Student(n, g, a, l, gp, d)
    {
        reserch_interest = ra;
    }

    void set_reserch_interest(string rarea)
    {
        reserch_interest = rarea;
    }

    string get_reserch_interest()
    {
        return reserch_interest;
    }

    void display()
    {
        Student::display();
        cout << "Reserch interest = " << reserch_interest << endl;
    }
};

