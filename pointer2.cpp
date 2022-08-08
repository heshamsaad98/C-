#include <iostream>
using namespace std;

void swap(double &x, double &y)
{
	double tmp = x;
	x = y;
	y = tmp;
}

void swap(double* ptr1, double* ptr2)
{
	double tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}

int main()
{
	double a = 3.0;
	double b = 5.0;
	swap(a, b);
	cout<<a<<b<<endl;
	swap(&a, &b);
	cout<<a<<b<<endl;
}