// FirctC++Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    void setLength(float l)
    {
        if (l >= 0)
            length = l;
        else
            cout << "Error, plase enter only positive values\n";
    }

    float getLength()
    {
        return length;
    }

    void setWidth(float w)
    {
        if (w >= 0)
            width = w;
        else
            cout << "Error, plase enter only positive values\n";
    }

    float getWidth()
    {
        return width;
    }

    float getArea()
    {
        return length * width;
    }
};
int main()
{
    Rectangle box;
    box.setLength(40.5);
    box.setWidth(30.6);
    cout<<"The rctangle area is "<<box.getArea() << endl;
}
