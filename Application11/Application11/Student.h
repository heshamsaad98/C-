#pragma once
#include "Person.h"
class Student :
    public Person
{
private:
    int level;
    float gpa;
    string depart;

public:
    Student(string n, string g, float a, int l, float gp, string d) : Person (n, g, a)
    {
        level = l;
        gpa = gp;
        depart = d;
    }

    void set_level(int l)
    {
        level = l;
    }

    void set_gba(float g)
    {
        gpa = g;
    }

    void set_depart(string d)
    {
        depart = d;
    }

    int get_level()
    {
        return level;
    }

    float get_gba()
    {
        return gpa;
    }

    string get_depart()
    {
        return depart;
    }

    void display()
    {
        Person::display();
        cout <<"Level = "<< level << ", GPA = " << gpa << ", Depart = " << depart << endl;
    }
};

