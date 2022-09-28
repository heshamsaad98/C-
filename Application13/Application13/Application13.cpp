// Application13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Shape {
    string color;
public:
    Shape(string c)
    {
        color = c;
    }

    virtual int area()
    {
        cout << "Parent class area: " << endl;
        return 0;
    }

    virtual void draw()
    {
        cout << "Draw Parent Shape in " << color << endl;
    }

    virtual void erea()
    {
        cout << "Erase The Parent Shape" << endl;
    }
};
class Rectangle : public Shape
{
private:
    int length;
    int width;

public:
    Rectangle(int l, int w, string c) : Shape(c)
    {
        length = l;
        width = w;
    }

    int area()
    {
        cout << "Rectangle class area: " << (width * length) << endl;
        return (width * length);
    }

    void draw()
    {
        cout << "Draw Rectangle " << endl; 
    }

    void erase()
    {
        cout << "The Rectangle Erase " << endl;
    }
};
class Circle : public Shape
{
private:
    int radius;

public:
    Circle(int r, string c) : Shape(c)
    {
        radius = r;
    }

    int area()
    {
        cout << "Circle area: " << 3.14 * (radius * radius) << endl;
        return (3.14 * radius * radius);
    }

    void draw()
    {
        cout << "Draw Circle " << endl;
    }

    void erase()
    {
        cout << "The Circle Erase " << endl;
    }
};

// Main function for the program

int main()
{
    Shape* shap_ptr;
    Rectangle rec(10, 7, "Read");
    Circle c(5, "Yellow");
    shap_ptr = &rec;
    shap_ptr->area();
    shap_ptr->draw();
    shap_ptr = &c;
    shap_ptr->area();
    shap_ptr->draw();
}
