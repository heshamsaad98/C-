#pragma once
class Rectangle
{
private:
	float length;
	float width;

public:
	void setLength(float l);
	void setWidth(float w);
	float getLength();
	float getWidth();
	float getArea();
	Rectangle();
	Rectangle(float l, float w);
};

