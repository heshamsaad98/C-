#include "Rectangle.h"

void Rectangle::setLength(float l)
{
	length = l;
}

void Rectangle::setWidth(float w)
{
	width = w;
}

float Rectangle::getLength()
{
	return length;
}

float Rectangle::getWidth()
{
	return width;
}

float Rectangle::getArea()
{
	return length * width;
}

Rectangle::Rectangle() : length(0), width(0)
{
}

Rectangle::Rectangle(float l, float w) : length(l), width(w)
{
}
